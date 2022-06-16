// Program to perform operations on Qeueu/FIFO

#include <stdio.h>
#include <stdlib.h>



#define capacity 5 

// Driver Code/Program Entry


// program to insert an element in the fifo
void insert_element(int fifo[],int *f,int *b)
{

    int elem;
    printf("Enter the elements in the FIFO\n");
    scanf("%d",&elem);
    fifo[*b]=elem;
     printf("The location of the b is %d\n",*b);
    *b = *b +1;
}


// Check weather the FIFO is full or empty
void check_fifo(int fifo[], int *f, int*b)
{

       if(*f==*b)
       {
         printf("The fifo is empty\n");
       }
      else if(*b=capacity)
      {
       printf("The fifo is full\n");
      }    
      else
       {
        printf("The fifo is not empty\n");
       }
}

void display_fifo(int fifo[], int *f, int *b){


for(int i=0; i<5; i++){
printf("The elements of the FIFO are fifo[%d]=%d\n",i, fifo[i]);
}
printf("The value of the back pointer is %d\n",*b);

}

//Driver Code

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



}