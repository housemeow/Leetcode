/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

//hi all
// 1. do the transpose for element move
// 2.do the transpose matrix for the 2nd step


int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes) {
  //step1 reverse
  for (int i = 0; i < ASize; i++) {
    for (int j = 0; j < ASize / 2; j++) {
      short int temp = 0;
      temp = *(*(A + i) + j);
      *(*(A + i) + j) = *(*(A + i) + ASize - j - 1);
      *(*(A + i) + ASize - j - 1) = temp;
    }
  }
  //step2 flip
  int** ret = (int**)malloc(ASize * sizeof(void*));
  for (int i = 0; i < ASize; i++) {
    *(ret + i) =  (int*)malloc(ASize * sizeof(int*));
    for (int j = 0; j < ASize; j++) {
      *(*(A + i) + j) = *(*(A + i) + j) ^ 1;
      *(*(ret + i) + j) = *(*(A + i) + j);

    }
  }

  *returnSize = ASize;
  *returnColumnSizes = AColSize;
  return ret;
}
