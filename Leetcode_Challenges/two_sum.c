// Two sum problem

 #include <stdio.h>
 #include <stdlib.h>

int* two_sum(int *nums, int target, int numsSize, int *returSize)
{

  // Dynamically create a array.

  int* arr = (int*)malloc(numsSize*sizeof(int));

  


}





// create array & target to be passed to a function
int main()
{
   int nums[] = {1,5,3,9,7};
   int target = 8;
   int numsSize = sizeof(nums)/sizeof(nums[0]);
   int returnSize[2];

   printf("The size of the array is %d", numsSize);
  
   // creating a function which will recieve pointer, pointing to array (output)

   int *output_arr = two_sum(nums, target, numsSize, returnSize);

  return 0;

}

