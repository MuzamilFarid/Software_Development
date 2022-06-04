// Program to add a node in the beginning & end of the of single linked list

#include <stdio.h>
#include <stdlib.h>

struct node {

  int data;
  struct node *n_addr;

};



int main()
{
     struct node *ptr;
     struct node *pointer;
     struct node *tmp;
     struct node *ctr;
     
     tmp = (struct node*)malloc(sizeof(struct node));
     printf("Enter the data of the node\n");
     scanf("%d",&tmp->data);
       // assigning the next address field of node
      tmp -> n_addr = NULL;
     printf("Enter the data of the last element of list\n");
     scanf("%d",&ptr->data);
     ptr = (struct node*)malloc(sizeof(struct node));
     ptr -> n_addr <= NULL;
     
   
  
     
      if(pointer==NULL)
      {
        pointer = tmp;
      }
      else
      {
        ctr = pointer;
        while(ctr->n_addr != NULL)
         {
            ctr = ctr->n_addr;

         }

         ctr->n_addr = ptr;





      }
  

        


     // scanf_s ("%d", &x);
      //fflush(stdin);
    //   printf("Please enter the value of x \n");
    //   fflush(stdin);
    //   scanf("%d", &x);
    //   fflush(stdin);
    //  printf("The value of x is %d", x);
    //  fflush(stdout);
     // pointer = (struct node*)malloc(sizeof(struct node));
    //  //struct node *sec_ptr;
    //  printf("Please enter the value of the data of the struct\n");
    //  fflush(stdout);
    //  scanf("%d",p->data);
    //  printf("The value entered now is %d",(*p).data);
//printf("The value contained insdie the poointer variable is %x",*pointer);

    //pointer -> data = 50;





    //printf("The value of data is %d\n", (*pointer).data);



//printf("Hello This is Muzamil, Starting with Linked List/DS \n");
//printf("Hello This is Muzamil, Starting with Linked List, Second Push/DS \n");

 


// printf("The size of the struct defined above is %d bytes \n", sizeof(struct node));
// printf("The size of the integer is %d bytes \n", sizeof(pointer));
// printf("The size of the pointer is %d bytes \n", sizeof(sec_ptr));






}