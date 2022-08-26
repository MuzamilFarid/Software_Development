#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Step 1, creating a switch/case statement or external function to obtain the integer values of Roman numerals.
//Step 2, Traverse the roman numerals array and convert to integers



int main()
{

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


char **dblarr;

char *strarr[3] = {"Hello","Killbill", "Bla bla"};

dblarr = strarr;

printf("The first element of the string array is %s\n", *(dblarr+1));



}