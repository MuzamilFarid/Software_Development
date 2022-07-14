#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Step 1, creating a switch/case statement or external function to obtain the integer values of Roman numerals.
//Step 2, Traverse the roman numerals array and convert to integers



int main()
{

char a[]="XIV";
int length_arr = sizeof(a)/sizeof(a[0]);
int num[length_arr];
bool sig;

int output=0;
printf("the length array is %d\n",length_arr);

int i;
for(i=0; i<length_arr; i++)
{
switch(a[i])
{
  
   case 'I':
       num[i] = 1;
        //printf("The integers values of arrays is num[%d] is %d\n",i,num[i]);
        //goto endpoint;
        break;
          
   case 'V':
        num[i]=5;
         //printf("The integers values of arrays is num[%d] is %d\n",i,num[i]);
          //goto endpoint;
          break;
        
   case 'X':
         num[i]=10;
          //printf("The integers values of arrays is num[%d] is %d\n",i,num[i]);
     //goto endpoint;
     break;
     default:
      num[i]=0;
}
 //endpoint:
  printf("The value of i is %d\n",i);
  printf("The output is %d\n",num[i]);
}
int num_one = num[0];
 int curr_num =0;
 int prev_num = 0;


// for(int k=0; k<=length_arr; k++)
// {  
//      if(k==length_arr && num[k]<num[k-1])
//      {
      
//          num[k]=num[k-1]+1000;
     
//      }

//    printf("The integers values of arrays is a[%d] = %d\n",k,num[k]);


// }


for(int k=0; k<length_arr; k++)
{  
 
   printf("The integers values of arrays is a[%d] = %d\n",k,num[k]);


}


printf("The FIRST is %d\n",num_one);
for(int k=1; a[k]!='\0'; k++)
{

   curr_num = num[k];
   printf("The current no is %d\n",num[k]);
    prev_num = num[k-1];
   printf("The previous no is %d\n",prev_num);
   if(prev_num < curr_num)
   {
      num_one = (num_one - prev_num) + (curr_num-prev_num);
      printf("The within else output no is %d\n",num_one);

   }
   else
   {
     num_one = num_one + curr_num;
    printf("The SECOND is %d\n",num_one);
   }
}

printf("The output is %d\n",num_one);



//   char p[] = {'A','B'};
//   int length_p = sizeof(p)/sizeof(p[0]);
//   for(int i=0; i<length_p; i++)
//   {
//      printf("Character values are %c\n",p[i]);



//   }
    






//    char a[]={'X','I','I'};
//   int output;
//     int num[]={0};
// int length_arr = sizeof(a)/sizeof(a[0]);
// for(int i=0; i<length_arr; i++)
//    {
//    switch (a[i])
//    {
//         case 'I':
//          num[i]=1;
//         break;

//         case 'V': 
//         num[i]=5;
//          break;
//          case 'X':
//          num[i]=10;
//          break;

//    }
//    }

//    for(int j=0; j<=length_arr; j++)
//    {
//     printf("The num[%d] is %d\n",j, num[j] );


//    }


//   printf("The length of the array is %d\n",length_arr);

//      for(int i=0; i<length_arr; i++)
//     {  
   
//         if((num[i] > num[i+1]) || (num[i] == num[i+1]) )
//         {
//             output = output +  num[i];
//             printf("The output is %d\n",output);
//             printf("The checking value is %d\n", num[i]);
        
//         }
        


//     }
  
//         printf("The result is %d\n",output);

//    for(int j=0; j<=length_arr; j++)
//    {
//     printf("The num[%d] is %d\n",j, num[j] );


//    }


}