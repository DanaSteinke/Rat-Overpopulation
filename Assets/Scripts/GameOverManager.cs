using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverManager : MonoBehaviour
{
    public GameObject GameOverPanel;
    public GameObject RatPopulationGraphContainer;
    public Sprite circleSprite;
    public PauseControl pcs;
    private RectTransform RatPopulationGraphTransform;
    public int[] totalRatData;
    public int[] deadRatData;
    public int[] totalAliveRatData;
    // Start is called before the first frame update
    void Start()
    {
        RatPopulationGraphTransform = RatPopulationGraphContainer.GetComponent<RectTransform>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void showGameOverPanel(RatManager rm){
        GameOverPanel.SetActive(true);
        totalRatData = LinkedListToArray(rm.totalRatStack);
        deadRatData = LinkedListToArray(rm.deadRatStack);
        totalAliveRatData = LinkedListToArray(rm.totalAliveRatStack);
        rm.totalRatStack.CopyTo(totalRatData, 0);
        rm.deadRatStack.CopyTo(deadRatData, 0);

        //drawGraphByData(totalRatData);
        drawGraphByData(totalRatData, new Color(0f,0f,0f));
        drawGraphByData(deadRatData, new Color(153f,0f,17f, 0.5f));
        drawGraphByData(totalAliveRatData, new Color(0f,255f,0f));
        Debug.Log(totalRatData);
        GlobalScript.print1DArray(totalRatData);
    }

    private GameObject CreateCircle(Vector2 anchoredPosition){
        GameObject gameObject = new GameObject("circle", typeof(Image));
        gameObject.transform.SetParent(RatPopulationGraphTransform, false);
        //gameObject.GetComponent<Image>().sprite = circleSprite;
        gameObject.GetComponent<Image>().color = new Color(0,0,0,0);

        RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
        rectTransform.anchoredPosition = anchoredPosition;
        rectTransform.sizeDelta = new Vector2(11, 11);
        rectTransform.anchorMin = new Vector2(0, 0);
        rectTransform.anchorMin = new Vector2(0, 0);

        return gameObject;
    }
    private void drawGraphByData(int[] data, Color color){
        GameObject singleGraphContainer = new GameObject();
        float graphHeight = RatPopulationGraphTransform.sizeDelta.y;
        float graphWidth = RatPopulationGraphTransform.sizeDelta.x;
        int size = data.GetLength(0);
        float yMaximum = 0;
        for(int i=0; i<data.GetLength(0); i++){
            if(data[i]>yMaximum){
                yMaximum = data[i];
            }
        }
        float x_delta = graphWidth/(size+1);

        GameObject lastCircleGameObject = null;
        for(int i=0; i<size; i++){
            float xPosition = x_delta + i * x_delta;
            float yPosition = (data[i]/yMaximum)*graphHeight;
            GameObject circleGameObject = CreateCircle(new Vector2(xPosition, yPosition));

            if(lastCircleGameObject!=null){
                CreateDotConnection(lastCircleGameObject.GetComponent<RectTransform>().anchoredPosition, circleGameObject.GetComponent<RectTransform>().anchoredPosition, color);
            }
            lastCircleGameObject = circleGameObject;
        }
    }

    private void CreateDotConnection(Vector2 dotPositionA, Vector2 dotPositionB, Color color){
        GameObject gameObject = new GameObject("dotConnection", typeof(Image));
        gameObject.transform.SetParent(RatPopulationGraphTransform, false);
        gameObject.GetComponent<Image>().color = color;

        RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
        Vector2 dir = (dotPositionB - dotPositionA).normalized;
        float distance = Vector2.Distance(dotPositionA, dotPositionB);
        rectTransform.anchorMin = new Vector2(0, 0);
        rectTransform.anchorMax = new Vector2(0, 0);
        rectTransform.sizeDelta = new Vector2(distance, 3f);
        rectTransform.anchoredPosition = dotPositionA + dir*distance * 0.5f;
        rectTransform.localEulerAngles = new Vector3(0, 0, GetAngleFromVectorFloat(dir));
    }

    public static float GetAngleFromVectorFloat(Vector3 dir){
        dir = dir.normalized;
        float n = Mathf.Atan2(dir.y, dir.x)*Mathf.Rad2Deg;
        if(n<0) n += 360;
        return n;
    }

    public static int[] LinkedListToArray(LinkedList<int> list){
        int size = list.Count;
        int[] result = new int[list.Count];
        for(int i=0; i<size; i++){
            result[i] = list.First.Value; 
            list.RemoveFirst();
        }
        return result;
    }

}
