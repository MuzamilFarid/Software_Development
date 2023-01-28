#include <stdio.h>
#include <stdlib.h>

int binarysearch(int *a, int min, int max, int key)
{
     int mid;
     
     while(min<=max)
{
     mid = (min+max)/2;

      if(a[mid] == key)
      {
             return mid;
      }
      else if(key>a[mid])
      {
          min = mid +1;

      }
      else 
      {
        max = mid -1;
      }
 
}
return -1;
}








int main()
{
    // Dynamically create an array
    int *arr = NULL;
    int max,key;

    //input max size of the array

    printf("Enter the max size of array\n");
    scanf("%d",&max);
    printf("The entered max number is %d\n", max);
    arr = (int *) malloc(max*sizeof(int));

    //input the elements of the array, array must be sorted for binary search to work.
    printf("Enter the elements of the array\n");

    for(int i=0; i<max; i++)
    {
       scanf("%d",arr+i);

    }

     // Input the key to be searched in the array
     printf("Enter the key to be searched\n");
     scanf("%d", &key);
    // calling binary search function

    int return_num = binarysearch(arr,0,max,key);

     if(return_num == -1)
     {
           printf("No key found in the array\n");

     }
     else 
      {
        printf("The returned location of the number is %d\n", return_num+1);

      }

}