// Program to add a node in the beginning & end of the of single linked list
// Program to find the size of linked list.

#include <stdio.h>
#include <stdlib.h>


struct node {

  int data;
  struct node *n_addr;

};


struct node *head;
void addnodebeginning();
void length_ls(struct node *root);
int main()
{
 
 // calling addnode function
 int i=0;
 while(i<5) {
 addnodebeginning();
 i++;   
 }
length_ls(head);

}


// Function to add the nodes at the end of the list or successive nodes

 void addnodebeginning()
 {

    struct node *tmp;
    struct node *p;
     tmp = (struct node*)malloc(sizeof(struct node));
     printf("Enter the data of the nodes\n");
     scanf("%d",&tmp->data);
       // assigning the next address field of node
      tmp -> n_addr = NULL;
    if(head==NULL)
      {
        head = tmp;
      }
       else
       {
           
        p = head;
        while(p->n_addr != NULL)
         {
            p = p->n_addr;

         }

         p->n_addr = tmp;

      }
 





 }

 // Function to count the length of the list
   void length_ls (struct node *root)
    {

      int count = 0;
      struct node *temp;
      temp = head;
      while(temp!= NULL)
      {
        count++;
        temp = temp -> n_addr;
      }
    
 printf("The lenght of the list is %d\n", count);


    }