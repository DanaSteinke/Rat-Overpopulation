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

   public static void print2DArray(int[,] map){
       for(int row=0; row<map.GetLength(0); row++){
           string m = "";
           for(int col=0; col<map.GetLength(1); col++){
               m=m+string.Format("{0}\t", map[row, col]);
           }
           Debug.Log(m);
       }
   }

  // public static 
}
