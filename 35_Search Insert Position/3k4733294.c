int searchInsert(int* nums, int numsSize, int target){
    for(int i = 0;i<numsSize;i++){
        if(nums[i]==target){
             return i;
        }
        if(i+1!=numsSize){
            if((nums[i]<target)&&(nums[i+1]>target)){
                return i+1;
            }
        }
        if(i+1==numsSize){
             if(nums[i]<target){
                return i+1;
            }
        }
    }
    return 0;
}

