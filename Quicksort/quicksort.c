#include <stdio.h>
#include <stdlib.h>

void swap(int *, int, int);
int partition (int *a, int min, int max)
{

  // creating a partioned array, pivot in the middle.

  int pivot = min;
  int i = min+1;
  int j = max;
  while(1) {
   while(a[i]<=a[pivot])
   {
     i++;
   }

   while(a[j]>a[pivot])
   {
    j--;
   }

   if(i<j)
   {
    swap(a,i,j);
   }
   else
   {
     swap(a,pivot,j);
     return j;

   }

  }

}


void quicksort(int *a, int min, int max)
{

  if(min < max)
{
    int pivot = partition(a,min,max);
    quicksort(a,min,pivot-1);
    quicksort(a,pivot+1,max);


} 

}

void swap(int *a, int first, int second)
{

  int temp;

   temp = a[second];
   a[second] = a[first];
   a[first]= temp;


}

int main()
{

 // creating a dynamically allocated array.
     int max; 
     int *array;
   printf("Enter the max size of the array\n");
   scanf("%d",&max);
 

   array = (int *)malloc(sizeof(int)*max);

   printf("Enter the elements of the array\n");
   for(int i=0; i<max; i++)
   {
      scanf("%d",(array+i));
   }

  quicksort(array,0,max);

   printf("The printed array is sorted one\n");

   for(int j=0; j<max; j++)
   {
      printf("%d\n",array[j]);

   }


}

