#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// function returning charcater pointer, a string (in C strings are character arrays, character pointer is actually a string)
char * longestCommonPrefix(char ** strs, int strsSize){

  char ch;
  char *res;

// Calculate the size of the smallest string in the array
size_t len_first_string = strlen(strs[0]);

for(int i=1; i<strsSize; i++)
{
   if(strlen(strs[i])<len_first_string)
        len_first_string = strlen(strs[i]);
}
  res = (char*)malloc(20*sizeof(char));
   if(strsSize==0) 
      return "";
  
      for(int i=0; i<len_first_string; i++)
      {
           ch = strs[0][i];
          for(int j=0; j<strsSize; j++)
          {
                 if(ch != strs[j][i])  
                   return res;
                 
          }
        strncat(res,&ch,1); 
      }
   return res;
   free(res);

}

// main function 
int main()
{

char *array[3] = {"Hello", "HellBill", "Hella"};
 // creating a pointer to character which will recieve a return array
 char *result;
 result = longestCommonPrefix(array, 3);



 printf("The longest common prefix is %s", result);



}