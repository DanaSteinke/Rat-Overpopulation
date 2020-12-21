using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingMenuManager : MonoBehaviour
{
    public GameObject SettingMenu;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void showSettingPanel(){
	SettingMenu.SetActive(true);
    }
    public void reloadGame(){
	SceneManager.LoadScene("MainGame", LoadSceneMode.Single);
    }

    public void closeSettingPanel(){
	SettingMenu.SetActive(false);
    }

    public void loadMainMenu(){
	SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);
    }
}
