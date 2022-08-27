#include <stdio.h>
#include <stdlib.h>


void swap(int *, int, int);
int smallest(int*, int , int);

void selectionsort(int *a, int min, int max)
{
    int small_index;

   for(int i=min; i<max; i++)
   {
    
     small_index = smallest(a,i,max);
      if(i!=small_index)
         swap(a,i,small_index);
      
   }

}

int smallest(int *a,int min,int max)
{
   
 int smallest_i = min;

  printf("The smallest_i value before starting the loop is %d\n",smallest_i);

 for(int i=min; i<max; i++)
 {
       if(a[smallest_i]>a[i])
       {
           smallest_i = i;

       }
 }
     return smallest_i;


}

void swap(int *a, int first ,int second)
{
  int temp=0;
  temp = a[first];
  a[first]=a[second];
  a[second]=temp;
 

}

int main()
{

     int *arr;
     int n;

     printf("Enter the size of the array\n");
     scanf("%d",&n);
   // dynamicllay allocating an array
    arr = (int*) malloc (sizeof(int)*n);
    // entering the elements of the array
    printf("Enter the elements of the array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",arr+i);

    }

 // Calling function of selection sort
       selectionsort(arr,0,n);
    for(int j=0; j<n; j++)
   {
     printf("The selection sort array is %d\n",arr[j]);

   }


}