using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PopupTextScript : MonoBehaviour
{
    public Animator animator;
    public TextMeshProUGUI popupText;

    public void SetText(string text, Color32 color){
        popupText.text = text;
        popupText.color = color;
    }

    public void PlayPopup(){
        Destroy(gameObject, animator.GetCurrentAnimatorStateInfo(0).length +0f);
    }
}
