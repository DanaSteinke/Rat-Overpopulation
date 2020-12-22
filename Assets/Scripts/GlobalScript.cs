using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class GlobalScript
{
   public static void SetLayerRecursively(GameObject obj, int layer){
       if(obj == null){
           return;
       }
       obj.layer = layer;

       foreach(Transform child in obj.transform){
           if(child != null){
               SetLayerRecursively(child.gameObject, layer);
           }
       }
   }
}
