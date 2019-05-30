

char * toLowerCase(char * str){
    int strsize = strlen(str) ;  //prevent memory loop leak (why have 2 size?)
    char* newstr = (char *)calloc(strsize+1, sizeof(char));  //must out put by char pointer so only create the malloc with char pointer not array
                                                             //strsize  must plus 1 make iteration to last 2nd char at malloc
    for(int i=0; i < strsize; i++){  //loop
        int strcharnum = str[i]; //char position to ASCII number mapping
 
        if (strcharnum < 91 && strcharnum > 64){   //if char is maping on uppercase ascii
            strcharnum = strcharnum + 32; //translate to lowercase (mapping with ascii)            
        }
        newstr[i] = strcharnum ;  //store to newstr with position result
    }
   return newstr;
}


