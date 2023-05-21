// Two sum problem

 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

int* two_sum(int *nums, int target, int numsSize, int *returnSize)
{

  // Dynamically create a return array.

    int* arr = (int*)malloc(*(returnSize)*sizeof(int));

     for(int i=0; i<numsSize; i++)
     {
        for(int j=i+1; j<numsSize; j++)
        {
            if(nums[i]+nums[j]==target)
            {
              arr[0]=i;
              arr[1]=j;
              return arr;
            }
        }
     }
    printf("No matching numbers\n"); 
    arr[0] = -1;
    arr[1] = -1; 
  return arr;
}





// create array & target to be passed to a function
int main(int argc, char *argv[])
{
   int nums[] = {3,1,6,8};
   int target = 4;
   int numsSize = sizeof(nums)/sizeof(nums[0]);
   int size = 2;
   int *returnSize = &size;

   printf("The size of the array is %d", numsSize);
  
   // creating a function which will recieve pointer, pointing to array (output)
  
   int *output_arr = two_sum(nums, target, numsSize, returnSize);
   printf("The output array is %d and %d\n", *(output_arr), *(output_arr+1));

  return 0;

}

