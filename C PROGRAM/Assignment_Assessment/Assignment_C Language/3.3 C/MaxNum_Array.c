//MODULE: 3.3 (File Handling and Debugging)

//01
//Write a program to find out the max number from given array using function

#include<stdio.h>

int maximum(int n1)
{


 int arr[] = {25, 11, 7, 75, 56,103};      
     int i;   
        
    int length = sizeof(arr)/sizeof(arr[0]);    
        
       
    int max = arr[0];    
        
      
    for (i = 0; i < length; i++) 
	{     
          
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return max;  
}    


main()

{
	int max;
	maximum( max);
}
