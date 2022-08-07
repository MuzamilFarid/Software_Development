#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int Binarysearch()
{




    
}



int main()
{


    

  // Creating a dynamic array, pass key, min & max paramters to the Binarysearch function

    int max_num;
    int * d_arr = NULL;
    printf("Enter the maximum number of the array\n");
    scanf("%d",&max_num);
     d_arr = (int *) malloc( sizeof(int)*max_num);
    for(int i=0; i<max_num; i++)
    {
        scanf("%d",&d_arr[i]);
        printf("The array printed is %d\n",d_arr[i]);

    }
    
   



}