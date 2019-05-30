/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
   int i,j;
    int* returnArray = calloc(2, sizeof(int));
     
    for (i=0; i < numsSize; i++){
        for (j= i + 1; j < numsSize; j++){
            if ((nums[i] + nums[j]) == target) {
                returnArray[0] = i;
                returnArray[1] = j;
                *returnSize = 2;
                return returnArray;
            }
        }
    }
    *returnSize = 0;
    return returnArray;
}
