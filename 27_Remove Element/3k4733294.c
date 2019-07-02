//way2
//iteration every time count the repeat num and represent the array postion 
//at sametime ,

int removeElement(int* nums, int numsSize, int val){
    int diffcount = 0;
        for (int i = 0; i < numsSize; i++) {
            if(nums[i]!=val){
                    nums[diffcount]=nums[i];
                    diffcount ++;
            }
        }
    return diffcount;
}
