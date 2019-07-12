

int numUniqueEmails(char ** emails, int emailsSize){
    char emailsProcessed[100][100];
    printf("email size is %d",emailsSize);
    int i = 0;
    int j = 0;
    bool plusFind = false;
    bool thisPlus = false;
    bool thisAt =false;
    bool atFind = false;
    
    while(i<emailsSize){
      while(*(*(emails+i)+j)!='\0'){
          //printf("\n *(*(emails+i)+j  is %c",*(*(emails+i)+j));
          if(*(*(emails+i)+j)=='+'){plusFind = true;thisPlus = true;}
          if(*(*(emails+i)+j)=='@'){atFind = true;thisAt = true;}
          
          if(atFind==false && *(*(emails+i)+j)=='.'){
              //bypass every dot before @
          }else if(plusFind == true && atFind == false){
              //+ abdds @  <--between + ... @
               if(thisPlus == true){
                  thisPlus = false;
              }
          }else if(plusFind == false && atFind == false){
              //before the + and @ about the this part
              // adfds <-- + amiki @
          }else if(atFind == true){
               //add every contain to array after @
                if(atFind == true){
                  atFind = false;
              }
          }
          
          *(*(emailsProcessed+i)+j) = *(*(emails+i)+j);
          //printf("\n emailsProcessed[i][j]  is %c",*(*(emailsProcessed+i)+j));
          j++;
      }
        //must add the '\0' to the last char position
        *(*(emailsProcessed+i)+j) = '\0';
        i++;
        j = 0;
    }
    i = 0;
    j = 0;
    while(i<emailsSize){
      while(*(*(emailsProcessed+i)+j)!='\0'){
          printf("\n emailsProcessed[i][j]  is %c",*(*(emailsProcessed+i)+j));
          j++;
      }
        i++;
        j=0;
    }
    
    return 0;
}

