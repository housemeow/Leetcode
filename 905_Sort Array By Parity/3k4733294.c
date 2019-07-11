

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//check every element if any are even then switch with front of A , evenPos start at 0 
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    short evenPos = 0;
    for(int i = 0;i<ASize;i++){
        if(*(A+i)%2==0){
            short int temp;
            temp = *(A+evenPos);
            *(A+evenPos)=*(A+i);
            *(A+i) = temp;
            evenPos++;
        }
    }
    *returnSize = ASize;
    return A;
}
