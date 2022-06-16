// Program to perform operations on Qeueu/FIFO

#include <stdio.h>
#include <stdlib.h>



#define capacity 5 


// program to insert an element in the fifo
void insert_element(int fifo[],int *front, int *back)
{

    int elem;
    printf("Enter the elements in the FIFO\n");
    scanf("%d",&elem);
    fifo[*back]=elem;
     printf("The location of the b is %d\n",*back);
    *back = *back +1;
}


// Check weather the FIFO is full or empty
void check_fifo(int fifo[], int *front, int *back)
{

       if(*front== *back )    {
         printf("The fifo is empty\n");
       }
      else if(*back=capacity)
      {
       printf("The fifo is full\n");
      }    
      else
       {
        printf("The fifo is not empty\n");
       }
}

void display_fifo(int fifo[], int *front, int *back){


for(int i=0; i<*back; i++){
printf("The elements of the FIFO are fifo[%d]=%d\n",i, fifo[i]);
}
printf("The value of the back pointer is %d\n",*back);

}

void delete_elem(int fifo[], int *front, int *back)
{

   if(*front==*back)
   {
      printf("The fifo is empty\n");

   }
  else 
   {
        printf("deleting element from the FIFO\n");
      for(int i=0; i<*back-1; i++)
      {   
            fifo[i]=fifo[i+1];
      }
    *back=*back-1;

   }

}

// Driver Code/Program Entry

int main()
{

int fifo[capacity];
int front=0;
int back=0;

int a=0;
while(a<5)
{
insert_element(fifo,&front,&back);
a++;
}
check_fifo(fifo,&front,&back);

display_fifo(fifo,&front,&back);

printf("executign a delete function\n");
delete_elem(fifo,&front,&back);

display_fifo(fifo,&front,&back);


}