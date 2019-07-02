//way1
//1. store the every different num to a new array 
//2. move every content to the nums
//-----------------
//way2
//iteration every time count the repeat num and represent the array postion 
//at sametime ,

int removeDuplicates(int* nums, int numsSize){
    int diffcount = 0;
    if(numsSize<=1){
        diffcount = numsSize;
    }else{
        diffcount = 1;
        for (int i = 1; i < numsSize; i++) {
            if(nums[i]!=nums[i-1]){
                nums[diffcount]=nums[i];
                diffcount ++;
            }
        }
    }
    return diffcount;
}
