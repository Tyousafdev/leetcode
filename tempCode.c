/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){

            if (nums[i] + nums[j] == target){
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;

                *returnSize = 2;
                return result;
                free(result);
            }
                              
        }
    }
    *returnSize = 0;
    return NULL;
}

// loop array
// if index[0] = element in array
// print anaswer

// else
// index[0] + 1
// recall function

// linear way
