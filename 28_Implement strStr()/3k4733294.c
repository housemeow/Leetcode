//1.compare the needle with first postion 
//2.if equal tehn loop needle other content
//3.if all equal flag true and break
//4.if not all equal then haystack next position and keep compare the needle first content and repeat 1

int strStr(char* haystack, char* needle) {
  short int haysize = strlen(haystack);
  short int needlesize = strlen(needle);
  bool match = false;
  bool firstmatch = false;
  bool matchresultget = false;
  short int matchcount = 0;
  short int startposition = 0;
  short int k = 0;
  char* longstr = haystack;
  char* shortstr = needle;
  if (needlesize == 0) {
    return 0;
  }
  if (needlesize > haysize) {
    return -1;
  }
  for (int i = 0; i < haysize; i++) {
    if (*(haystack + i) == *(needle)) {
      k = i;
      matchcount = 0;
      startposition = 0;
      firstmatch = false;
      for (int j = 0; j < needlesize; j++) {
        if (*(haystack + k) == *(needle + j)) {
          if (firstmatch == true) {
            matchcount++;
            k++;
          }
          if (firstmatch != true) {
            startposition = i;
            firstmatch = true;
            matchcount++;
            k++;
          }
        } else {
          if (haysize - i < needlesize) {
            match = false;
            matchresultget = true;
            break;
          }
        }
        if (matchcount == needlesize) {
          match = true;
          matchresultget = true;
          break;
        }
      }
    }
    if (matchresultget == true) {
      break;
    }
  }
  if (matchresultget == true && match == true) {
    return startposition;
  } else {
    return -1;
  }

}

