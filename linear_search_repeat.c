#include <stdio.h>
#include <stdlib.h>


int linearsearch(int *arr, int min, int max, int key)
{

   for(int i=min; i<max; i++)
   {
         if(arr[i]==key)
         {
             printf("Key found\n");
             return i;

         }


   }

   return -1;


}


int main()
{
    // First create dynamic array by creating pointer.

   int *arr = NULL;
   int max,key;
   // Input the number whose total size of array must be created
    printf("Enter the max size of array \n");
    scanf("%d", &max);

    arr = (int *)malloc(max*sizeof(int));

    // for loop to input all the elemets of the dynamically created array
    printf("Enter the elements of the array\n");
      for(int i=0; i<max; i++)
      {
         scanf("%d", arr+i);

      }

      // Take a key which should be the searched in the array.
      printf("Enter the key\n");
      scanf("%d",&key);
      int loc = linearsearch(arr,0,max,key);
          if(loc == -1)
          {

           printf("No key found\n");

          }
          else{

           printf("The location of the key is %d\n", loc+1);

          }





}