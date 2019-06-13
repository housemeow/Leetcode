//looping every result O(n^2)
//store the longest result to the char array
//set looping size add and keep forward like
//abbc   a  b  b  c  next loop  abbc abb bbc bc bb ab
//abbc     p 0     ws 4
//abb bbc  p 0 1   ws 3
//bc bb ab p 0 1 2 ws 2
// compare the char change it first then loop every position with window size like
//  a b b a 
// compare
//  a     a compare
//    b b   compare
// if window size are odd
// a b b b a
// a       a compare 
//   b   b   compare
//     b     pass
//if find any can reverse try more windowsize and move postion to find more lengh basic on already reverse string you find
//point: if find any maximum result in the window size then jump to next window size plus 1

char * longestPalindrome(char * s){
    int maxws = strlen(s);
    unsigned short re_position = 0;
    unsigned short re_wnsize= 0;
    bool reverse_mismatch_flag=0;
    bool findresult=0;
    for(unsigned short j=maxws;j>=2;j--){  //the windowsize  
        unsigned short ismiddlenum = (j/2);
        unsigned short isodd = (j)%2;
        re_wnsize=j; //store the windowsize for result find at s input
        for(unsigned short i=0;i<=maxws-j;i++){ // the position move
            re_position=i; //store the positon for result find at s input
            for(unsigned short k=0;k<j;k++){ // the position store char with windowsize
                if(isodd!=0&&j-k+1==ismiddlenum+1){ //find if the windowsize are odd and is middle num then break
                    break;
                }else if(isodd==0&&j-k+1==ismiddlenum){ //find if the windowsize are even and is middle num then break
                    break;
                }else{
                    if(s[j-k+i-1]!=s[i+k]){ // every char reverse store it and check the some position with origin chararray is same or not at some time
                    reverse_mismatch_flag=1;  //if not the same then jump out the store reverse try another situation.
                    }
                }
                if(reverse_mismatch_flag==1){
                    break;
                }
            }
            if(reverse_mismatch_flag==1){
                reverse_mismatch_flag=0;
            }else{
                findresult=1;
                break;   
            }
        }
        if(findresult==1){
            break;
        }
    }
    char* char_result = calloc(re_wnsize+2, sizeof(char)); //add 1 is wnsize start from 1 another 1 is for ref '/0'
    if(findresult == 0){
        char_result[0]=s[0];
    }else{
        for(unsigned short i=0;i<re_wnsize;i++){
        char_result[i]=s[re_position+i];
        } 
    }
  
    
    return char_result;
}
