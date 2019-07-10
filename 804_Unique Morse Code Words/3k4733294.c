//   a  b  c d e
//a  -  *  * * 0
//b  -  -  0 0 0
//c  -  -  - * 0
//d  -  -  - - 0
//e  -  -  - - -
//part 1
// convert the alpha word to morseword
// compare the morseword
//maping the table on morse and store to morseword
//part 2
//compare solution like
//  morse1  a1 a2 a3 a4 a5 a6 a7
//  morse2  b1 b2 b3 b4 b5 b6 b7
//  morse3  c1 c2 c3 c4 c5 c6 c7
//  base on morse1 looping every other morse element
//  if yes ,equal do nothing  if not ,stall the morse2 position in morseword to the remainnum
//  memo the all position for next loop
//  loop 1  
//  morse1 com morse2 morse3 morse4
//  morse1 equal morse2   
//  morse1 notequal morse3 stall the position for next cal
//  morse1 notequal morse4 stall the position for next cal
//  diffcount +1;
//  loop 2 
//  morse3 equal morse4
//  diffcount +1
//  if no anything morse remain them output diffcount;

int uniqueMorseRepresentations(char** words, int wordsSize) {
  char morseWord[100][50];
  short int remainNumSize = 100;
  short int diffTypeCount = 0;
  int  remainnum[100];
  int  tempremain[100];
  // printf("\n wordsSize is %d",wordsSize);
  const char* morse[2][26] =
  {
    { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." },
    { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" }
  };
  for (short int i = 0; i < 100; i++) {
    remainnum[i] = i;
  }
                                                                          //PART 1
  if (wordsSize > 1) {
    for (int i = 0; i < wordsSize; i++) {                                 //loop "gin","zen"
      int j = 0;
      int m = 0;
      while ((*(*(words + i) + j)) != '\0') {                             //loop g"i"n
        for (int k = 0; k < 26; k++) {                                    //find i morse
          int n = 0;
          if ((*(*(words + i) + j)) == (*(*(*(morse + 1) + k) + 0))) {    //if find then move morse represent to morseWord
            while ((*(*(*(morse + 0) + k) + n)) != '\0') {
              (*(*(morseWord + i) + m)) = (*(*(*(morse + 0) + k) + n));
              m++;
              n++;
            }
            (*(*(morseWord + i) + m)) = '\0';
            break;
          }
        }
        j++;
      }
    }
                                                                                                //PART 2
    remainNumSize = wordsSize;
    while (remainNumSize > 1) {                                                                 //if something remain waithing for compare at pool
      short int newremainNumSize = 0;
      bool enableCount = false;
      short int k = 1;
      while (k < remainNumSize) {                                                               //loop remain element
        int j = 0;
        while ((*(*(morseWord + remainnum[0]) + j)) != '\0') {                                  //the remain element looping not at end
          if ((*(*(morseWord + remainnum[0]) + j)) != (*(*(morseWord + remainnum[k]) + j))) {   //if different happend at both of element
            enableCount = true;
          } else if (((*(*(morseWord + remainnum[0]) + j + 1)) == '\0') && ((*(*(morseWord + remainnum[k]) + j + 1)) != '\0')) { 
            enableCount = true;                                                                 // if a elelment already the end and another not  judge to not equal
          }
          if (enableCount == true) {
            tempremain[newremainNumSize] = remainnum[k];                                        //store the new reamin position to remain pool
            newremainNumSize++;                                                                 //count the last remainNumers
            enableCount = false;
            break;
          }
          j++;
        }
        k++;
      }
      for (short int o = 0; o < newremainNumSize + 1; o++) {
        remainnum[o] = tempremain[o];
      }
      if (k == remainNumSize) {
        diffTypeCount++;
        remainNumSize = newremainNumSize;
        newremainNumSize = 0;
        k = 0;
      }
    }
    if (remainNumSize == 1) {
      diffTypeCount = diffTypeCount + 1;
      return diffTypeCount;
    }
  } else if (wordsSize == 1) {
    return 1;
  } else {
    return 0;
  }
  return diffTypeCount;
}

