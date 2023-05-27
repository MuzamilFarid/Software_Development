#include <stdio.h>
#include <stdlib.h>


// function to equate roman numerals to integers
int romantoInt(char *c)
{
   int current_ind;
   int prev_ind;
   int result;
   int num=0;
   int *num_array;
   int j = 1;
   int len_char_array;
   int count_char_array = 0;
   
   for(int k=0; c[k] != '\0'; k++)
        len_char_array = k;
           

    printf("The length of the array is %d\n", len_char_array);

    num_array = (int*)malloc((len_char_array+1) * sizeof(int));

    for(int i=0; c[i] != '\0'; i++)
    {
        switch(c[i])
        {
      case 'I':
         num = 1;
         break;
      case 'V':
         num = 5;
         break;
      case 'X':
         num = 10;
         break;
      case 'L':
         num = 50;
         break;
      case 'C':
         num = 100;
         break; 
      case 'D':
         num = 500;
         break;
      case 'M':
         num = 1000;
         break;                

      default:

         num = 0;
        }   

     num_array[i] = num;
     printf("The array elements are %d\n", num_array[i]);
     printf("The i value are %d\n", i);
    }
        // maybe store the above into array of numbers.
        // need to loop J 
     result      = num_array[0];
     while(count_char_array < len_char_array)
     {
     current_ind = num_array[j];
     prev_ind    = num_array[j-1];
     if(current_ind <= prev_ind)
     {
        result = current_ind + result;
     }
     else 
     {
       result  = (result - prev_ind) + (current_ind - prev_ind);

     }
     count_char_array++;
     j++;

     }
    return result;
    free(num_array);

}

int main()
{

// Create a character array of roman numerals
char c[20] = "LVIII";

int num = romantoInt(c);

printf("The answer is %d\n", num);

}