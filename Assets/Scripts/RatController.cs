using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RatController : MonoBehaviour
{
    /*
    public float speed = 5;
	public float directionChangeInterval = 1;
	public float maxHeadingChange = 30;
 
	CharacterController controller;
	float heading;
	Vector3 targetRotation;
 
	int[][] matrix = int[3][3];
	void Start ()
	{
		controller = GetComponent<CharacterController>();
 
		// Set random initial rotation
		heading = Random.Range(0, 360);
		transform.eulerAngles = new Vector3(0, heading, 0);
 
		StartCoroutine(NewHeading());
	}
 
	void Update ()
	{
		transform.eulerAngles = Vector3.Slerp(transform.eulerAngles, targetRotation, Time.deltaTime * directionChangeInterval);
		var forward = transform.TransformDirection(Vector3.forward);
		controller.SimpleMove(forward * speed);


		int height = matrix.length;
        int width = matrix[0].length;
        int[][] result = new int[height][width];
        for (int i = 0; i<height; i++){
            for (int j = 0; j<width; j++){
                result[i][j] = BFS(matrix, i, j);
            
	}
 
	private int BFS(int[][] matrix, int i, int j){
        int result = 0;
        if(matrix[i][j] == 0){
            return result;
        }
        int height = matrix.length;
        int width = matrix[0].length;
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(i*width + j);
        while(q.peek() != null){
            int size = q.size();
            for(int index = 0; index < size; index++){
                int current = q.poll();
                int x = current/width;
                int y = current%width;
                if (matrix[x][y] == 0)
                    return result;
                if (x > 0){
                    q.add((x-1)*width + y);
                }
                if (x < height - 1){
                    q.add((x+1)*width + y);
                }
                if (y > 0){
                    q.add(x*width + y - 1);
                }
                if (y < width - 1){
                    q.add(x*width + y + 1);
                }
            }
            result++;
        }
        return result;
    }



	/// <summary>
	/// Repeatedly calculates a new direction to move towards.
	/// Use this instead of MonoBehaviour.InvokeRepeating so that the interval can be changed at runtime.
	/// </summary>
	IEnumerator NewHeading ()
	{
		while (true) {
			NewHeadingRoutine();
			yield return new WaitForSeconds(directionChangeInterval);
		}
	}
 
	/// <summary>
	/// Calculates a new direction to move towards.
	/// </summary>
	void NewHeadingRoutine ()
	{
		var floor = Mathf.Clamp(heading - maxHeadingChange, 0, 360);
		var ceil  = Mathf.Clamp(heading + maxHeadingChange, 0, 360);
		heading = Random.Range(floor, ceil);
		targetRotation = new Vector3(0, heading, 0);
	}
*/
}
