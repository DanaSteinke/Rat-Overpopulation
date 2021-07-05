using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ClipboardScript : MonoBehaviour
{
    public GameObject clipboardModel;
    public GameObject menuPanelModel;

    public GameObject menuCB;
    public Animator anim;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {/*
       if(anim!=null && anim.GetCurrentAnimatorStateInfo(0).IsName("Idle_Pause")){
           Time.timeScale = 0;
       } 
*/
       if(anim!=null && anim.GetCurrentAnimatorStateInfo(0).IsName("Idle_Deactivated")){
        menuCB.SetActive(false);
       } 
    }

    public void ReloadGame(){

        HideMainMenuClipboard();
        StartCoroutine(ExampleCoroutine());
        
    }

    public void ShowMainMenuClipboard(){
        menuCB.SetActive(true);
        anim = menuCB.GetComponent<Animator>();
        Debug.Log("is entry state " + anim.GetCurrentAnimatorStateInfo(0).IsName("Entry"));
        anim.SetBool("isMovingIn", true);
        Debug.Log("is clipboard_in state " + anim.GetCurrentAnimatorStateInfo(0).IsName("clipboard_in"));

        //GameObject newMenuPanel = Instantiate(menuPanelModel);
        //GameObject menu = CreateNewClipboard();
    }

    public void HideMainMenuClipboard(){
        //DestroyNewClipboard(menuCB);
        Debug.Log("hide clipboard has been called");
        anim = menuCB.GetComponent<Animator>();
        anim.SetBool("isMovingIn", false);
    }

    IEnumerator ExampleCoroutine()
    {
        //Print the time of when the function is first called.
        Debug.Log("Started Coroutine at timestamp : " + Time.time);

        //yield on a new YieldInstruction that waits for 5 seconds.
        yield return new WaitForSeconds(1);

        //After we have waited 5 seconds print the time again.
        Debug.Log("Finished Coroutine at timestamp : " + Time.time);
        SceneManager.LoadScene("MainGame", LoadSceneMode.Single);
    }

    

    /*public GameObject CreateNewClipboard(){
        //Vector3 pos = new Vector3();
        GameObject newClipboard = Instantiate(clipboardModel);
        newClipboard.transform.parent = this.gameObject.transform;
        Debug.Log("rotation before = " + newClipboard.transform.rotation);
        newClipboard.transform.Rotate(26f, 90f, 0f, Space.Self);
        Debug.Log("rotation after = " + newClipboard.transform.rotation);
        newClipboard.transform.position = new Vector3(190.5f, 136.5f, 93.5f);
        
        return newClipboard;
    }
 */
    public void DestroyNewClipboard(GameObject clipboard){
        Destroy(clipboard);
    }
}
