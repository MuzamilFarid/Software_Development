// Program to add a node in the beginning & end of the of single linked list
// Program to find the size of linked list.
// Added deletion fucntion to delete a node in single linked list

#include <stdio.h>
#include <stdlib.h>


struct node {

  int data;
  struct node *n_addr;

};


struct node *head;
void addnodebeginning();
int length_ls();
int display();
void delete();
int main()
{

 // calling addnode function
 int i=0;
 int j=0;

 while(i<5) {
 addnodebeginning();
 i++;   
 }

int len= length_ls();
 display();
 printf("Calling a delete function .........\n");
 delete();

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
   int length_ls ()
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
    return count;


    }

   // Program to display elements of the liked list.
    int  display()
    {
        struct node *temp;
        temp = head;
       
        while(temp!=NULL)
        {
           printf("The elements of the list are %d\n",temp -> data);
           temp = temp->n_addr;
       
        }

    }

    void delete()
    {
      
       struct node *temp;
       temp = head;
       int l,j;
       printf("Enter the node you want to delete\n");
       scanf("%d",&l);

       if(temp=NULL)
       {
           printf("The list is empty\n");
       }
       else if(l==1)
       { 
          printf("First node deleted\n");
          head = temp->n_addr;
          temp->n_addr = NULL;
          free(temp);
     
       }

      else
      {
     struct node *pt = head;
     struct node *q;
         while(j<l-1)
      {
            pt = pt -> n_addr;
             j++;
 
      }
        q = pt -> n_addr;
        pt -> n_addr = q -> n_addr;
        q -> n_addr = NULL;

        free(q);


      }



    }