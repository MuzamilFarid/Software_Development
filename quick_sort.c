#include <stdio.h>
#include <stdlib.h>

 void quicksort(int*, int, int);
 void swap(int*, int, int);
 int partition(int *a, int min, int max)
 {
     int pivot,i,j;
     pivot=min;
      i= min+1;
      j=max;
     while(1)
     {
      while(a[i]<a[pivot] && i < max)
         i++;
      
      while(a[j]>a[pivot])
        j--;

        if(i<j)
        swap(a,i,j);
        else{
            swap(a,pivot,j);
            return j;
        }
     }

 }
   
  void quicksort(int *a, int min, int max)
  {
    if(min<max)
    {
     int mid = partition(a,min,max);
      quicksort(a,min,mid-1);
      quicksort(a,mid+1,max);
    }
  } 

  void swap(int *a, int index1, int index2)
  {
      int temp;
      temp = a[index1];
      a[index1]=a[index2];
      a[index2]=temp;
  }


int main()
{


 // Creating dynamic array
 int *arr = NULL;
 int n;
 printf("Enter the max size of the array\n");
 scanf("%d",&n);
 arr = (int*)malloc(n*sizeof(int));

   // input the elements of the array
   for(int i=0; i<n; i++)
   {

    scanf("%d", arr+i);

   }

    quicksort(arr,0,n);

    // printing the elements of the array after sorting
    for(int i=0; i<n; i++)
    {

     printf("%d\n", arr[i]);

    }



}