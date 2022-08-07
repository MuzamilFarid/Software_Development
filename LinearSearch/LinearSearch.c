#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int *a, int key, int min, int max)
{

     for(int i=min; i<max; i++)
    {
           if(a[i]==key)
           {
                return i;
            

           }
        
    }



}

int main()
{
    int num, key,ret_num;
    int *arr = NULL;
    printf("Enter the size of the array\n");
    scanf("%d",&num);

    // create an array
    arr = (int*)malloc(num*sizeof(int));

    printf("Enter the elements of the dynamically allocated array\n");

      for(int i=0; i<num; i++)
      {
          scanf("%d",arr+i);

      }

    printf("Enter the key which should be searched in the array\n");
    scanf("%d",&key);

      ret_num = LinearSearch(arr,key,0,num);
   
      if(ret_num == -1)
      {
         printf("Wrong key \n");
      }
      else 
      {
      printf("The location of the key is %d\n",ret_num+1);
   
      }
      
 



}