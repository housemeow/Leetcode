
char * toLowerCase(char * str){
    int strsize = strlen(str) ;  //prevent memory loop leak (why have 2 size?)
    //printf ("The charstr is %s.\n",str);
    //printf ("The charsizeIs %d",strsize);
    //char toLCstr[strsize];
    //char* newstr;
    //char* newstr = malloc(strsize*sizeof(char)); 
    char* newstr = (char *)calloc(strsize, sizeof(char));  //must out put by char pointer so only create the malloc with char pointer not array
    //printf ("The newstr is %s.\n",newstr);
    //strcpy(newstr,str);
    for(int i=0; i < strsize; i++){  //loop
        int strcharnum = str[i]; //char position to ASCII number mapping
        //char c = strcharnum; 
        printf ("The i is %d.\n",i);
        //printf ("The strcharnum is %d.\n",str[i]);
        //printf ("The newstr is %d.\n",newstr[i]);
        //printf ("The strchar is %c.\n",c);
        if (strcharnum < 91 && strcharnum > 64){   //if char is maping on uppercase ascii
            strcharnum = strcharnum + 32; //translate to lowercase (mapping with ascii)
             //printf ("The strcharnum  to lower is %d.\n",strcharnum);
            
        }
        //char a = strcharnum;
        newstr[i] = 'a' ;  //store to newstr with position result
        //printf ("toLCstr %d.\n",*(newstr+i));
    }
   return newstr;
}

