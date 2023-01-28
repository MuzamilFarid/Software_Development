#include <stdio.h>
#include <stdlib.h>

// declaring a structure to create nodes in Linked list.

struct Node 
{
    int data;
    char name[50];
    struct Node *next_node;
};

  // head is a global structure pointer
   struct Node *head = NULL;

// Function to add nodes to the list
void addnode()
{
   struct Node *tmp = NULL;
   struct Node *p = head;
   int counter=1;
    // Newly created node, which will be connected to first node, this function can be called several times to create as much nodes as we want in the list
    tmp = (struct Node *) malloc(sizeof(struct Node));
    // Now the first node is pointing to newly created second node
   while(p->next_node != NULL)
   {
        p = p->next_node;
        printf("The addresses of the nodes are as follows %x\n",p);
       counter++;
   }

   p -> next_node = tmp;

    // Entering the data for the newly created node
    printf("Enter the data for the %d node\n",counter);
    scanf("%d",&tmp->data);
    printf("Enter the name\n");
    scanf("%s",tmp->name);
    tmp -> next_node = NULL;
}


// Function to print the length of the linked list
int printlength()
{

  int count=1;
  struct Node *tmp;
  tmp = head;

  while(tmp->next_node != NULL)
  {

   tmp = tmp -> next_node;
   count++;
  }
   return count;
 

}


// Function to add a node in a specified location in the linked list

void insertnode(int loc)
{

  // creating a node which will be inserted at specified location
   struct Node *tmp=NULL;
   struct Node *p;
   int counter=1;
   p = head;
   tmp = (struct Node *) malloc (sizeof(struct Node));
    // tmp pointing to newly created new which will be inserted.
   //Now p will traverse the whole list until specified location comes
   
     while(counter < loc) 
     {
       p = p->next_node;
      
       counter++;
       
       }
   // At this point, p has reached to specified location, breaking a link between two nodes to insert this one
     tmp ->next_node = p->next_node;
     p->next_node = tmp;
   
    
}

// Function to delete a node from a specified location in the list.

 void deletenode(int loc)
 {
    int counter=1;
   struct Node *tmp;
   struct Node *p;
   tmp = head;
   while(counter<loc-1)
    {
       p = p->next_node;
       counter++;
           
    }

    tmp=p->next_node;
    p->next_node=tmp->next_node;
    tmp->next_node=NULL;


 }
   // function to reverse a linked list
 void reverseLinkedlist()
 {
  int len;
  struct Node *P,*Q;
  len = printlength();
 //printf("The total nodes in the list are %d\n", len);
  int i,j;
  int k;
  int tmp;
  i=0;
  j = len-1;
  P = head;
  Q = head;
  while(i<j)
  {
    k=0;
     while(k<j)
     {
        Q = Q->next_node;
        k++;
     }

    tmp = Q->data;
    Q->data = P->data;
    P->data = tmp;
    i++;
    j--;
    
   P = P -> next_node;
   Q = head;

  }


 }



int main()
{
 
   int max_nodes;
   int loc;
   // First node created, head pointing to the first node
    head = (struct Node*) malloc (sizeof(struct Node));
    printf("Enter the data in the first node\n");
    scanf("%d",&head->data);
    printf("Enter the name of the first node\n");
    scanf("%s",head->name);
    head -> next_node = NULL;

   printf("The name of the first node is %s, & data of the first node is %d\n",head->name,head->data);

    // Adding subsequent nodes in the list

    printf("Enter the number of the nodes you want to append to first node\n");
    scanf("%d",&max_nodes);
    // Loop to add as many nodes as we want
   for(int i=0; i<max_nodes; i++)
   {
    addnode();
   }
   
   // calling printlength function
   printlength();
   
   // calling a insert node function.
   printf("Enter the location of the node you want to insert\n");
   scanf("%d",&loc);
   insertnode(loc);
   printlength();
   reverseLinkedlist();






}