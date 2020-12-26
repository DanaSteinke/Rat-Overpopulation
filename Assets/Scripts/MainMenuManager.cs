using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MainMenuManager : MonoBehaviour
{
    public TMP_InputField unitNumberInput;
    public TMP_InputField ratNumberInput;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void StartNewGame(){
        if(unitNumberInput.text == ""){
            unitNumberInput.text = "1";
        }
        if(ratNumberInput.text == ""){
            ratNumberInput.text = "10";
        }
        PlayerPrefs.SetInt("Unit_Number", int.Parse(unitNumberInput.text));
        PlayerPrefs.SetInt("Rat_Number", int.Parse(ratNumberInput.text));
	    SceneManager.LoadScene("MainGame", LoadSceneMode.Single);
    }
}
