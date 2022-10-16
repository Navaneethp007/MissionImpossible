/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static int countDistinct(int arr[], int n)
    {
        Arrays.sort(arr);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            while (i < n - 1 &&
                    arr[i] == arr[i + 1])
            {
                i++;
            }
            res++;
        }
        return res;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0){
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    for (int i = 0; i<n; i++) {
		        arr[i] = sc.nextInt();
		    }
		    int count = countDistinct(arr, n);
		    if(count%2 == 0)
		    System.out.println("YES");
		    else if (count%2 != 0 && count < n)
		    System.out.println("YES");
		    else 
		    System.out.println("NO");
		    
		    t--;
		}
	}
}
