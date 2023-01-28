#include <stdio.h>
#include <stdlib.h>

// Function of sel_sort
void swap(int *, int, int);
int smallest(int *, int, int);
void sel_sort(int *a, int min, int max)
{

     int small;
     for(int i=min; i<max; i++)
     {
           small= smallest(a,i,max);
          if(i!=small)
            {
                swap(a,i,small);
            }

     }

}

int smallest(int *a, int i, int max)
{

   int s_small = i;
     for(i=i+1; i<=max; i++)
     {
           if(a[s_small]>a[i])
           {
                 s_small = i;
           }
       
     }

    return s_small; 

}

void swap(int *a, int index1, int index2)
{

   int temp;
   temp = a[index1];
   a[index1] = a[index2];
   a[index2] = temp;
}















int main()
{
    // Dynamically create an array

    int *arr = NULL;
    int n;
    printf("Enter the max size of the array\n");
    scanf("%d",&n); 

    arr = (int *)malloc(n*sizeof(int));

    printf("Enter the elements of the array\n");

    for(int i=0; i<n; i++)
    {
      scanf("%d",arr+i);

    }

   sel_sort(arr,0,n);

   // printing the array after sorting
   printf("The sorted array is as follows\n");

   for(int i=0; i<n; i++)
   {
       printf("%d\n",arr[i]);

   }





}