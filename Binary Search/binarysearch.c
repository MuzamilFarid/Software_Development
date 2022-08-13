#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int Binarysearch(int *arr, int key, int min, int max)
{
    while(min<=max)
    {
     int arr_mid = (min + max) /2;
   
    if(arr[arr_mid]==key)
    {
        return arr_mid;
    }
    else 
     if(key > arr[arr_mid])
     {
       min = arr_mid +1;
     }
    else 
      if(key < arr[arr_mid])
        {
           max = arr_mid -1;

        }        
     else
     return -1;

 }

    
}



int main()
{
  //Creating a dynamic array, pass key, min & max paramters to the Binarysearch function

    int max_num;
    int key;
    int * d_arr = NULL;
    printf("Enter the maximum number of the array\n");
    scanf("%d",&max_num);
     d_arr = (int *) malloc( sizeof(int)*max_num);
  printf("Enter the elements of array\n");
     for(int i=0; i<max_num; i++)
     {
       scanf("%d",&d_arr[i]);

     }

    printf("Press the key you want to pass to binarysearch function\n");

   scanf("%d",&key);
   
   int return_loc = Binarysearch(d_arr,key,0,max_num);

    if(return_loc!=-1)
      printf("Location of the Key found %d\n", return_loc+1);
    else
    printf("Incorrect location!!!\n");
   








    
   



}