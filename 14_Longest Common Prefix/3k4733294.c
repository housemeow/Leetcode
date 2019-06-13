

char * longestCommonPrefix(char ** strs, int strsSize){
    bool notqual = 0;
    bool loopend =0;
    short int samesize = 1;
    short int minstrsize = 100;
    if(strsSize>1){
        for(int j=0;j<strsSize;j++){  //find the min length at all prefix content
            short int astrsize = strlen(strs[j]);
            if(minstrsize>astrsize){
                minstrsize = astrsize;
            }
        }
        if(minstrsize==0){
            strsSize = 0;
        }else{
            for(int i=0;i<minstrsize;i++){  //min prefix length
                char compare[] = "a";
                samesize = i;
                for(int j = 0;j<strsSize ;j++){  // loop strsSize how many prefix content we have
                    if(j == 0){
                        compare[0] = strs[j][i];
                    }else{
                        if(compare[0] != strs[j][i]){
                            notqual = 1;
                            break;
                        }
                    }
                    
                }
                if(notqual==1){
                    break;
                }
            }
        }
    }else if(strsSize==1){
        short int astrsize = strlen(strs[0]);
        if(astrsize==1){
                samesize = 1;
        }else if(astrsize==0){
            strsSize = 0;
        }else{
            for(int j = 0;j < astrsize;j++){  // loop strsSize how many prefix content we have
                samesize = j;
                char compare[] = "a";
                if(j == 0){
                    compare[0] = strs[0][j];
                }else{
                    if(compare[0] != strs[0][j]){
                        notqual = 1;
                        break;
                    }
                } 
            }
        }
    }else{}
    
    char *result = "";
    char *resultlength = calloc(samesize+2, sizeof(char));
    if(strsSize==0){
        return result;
    }else{
        if(samesize-1<0&&notqual==1){
            return result;
        }else{
            if(samesize==0){
                resultlength[0] = strs[0][0];  
            }else if(notqual==0){
                for(int i = 0;i<samesize+1;i++){
                    resultlength[i] = strs[0][i];       
                }
            }else{
                for(int i = 0;i<samesize;i++){
                    resultlength[i] = strs[0][i];   
                }
            }
            return resultlength;
        } 
    }
}

