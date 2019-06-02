//follow up some tip at reverse integer , but we have some thing different here,
//using the some divid strategy
// base on reverse integer solution 
// modified part of a b  

//Madeon Liu 2019/06/02 23:27
//Runtime: 0 ms, faster than 100.00% of C online submissions for Palindrome Number.
//Memory Usage: 7.2 MB, less than 78.10% of C online submissions for Palindrome Number.


bool isPalindrome(int x){
    int digit[10]={1000000000,100000000,10000000,1000000,100000,10000,1000,100,10,1};
    long long reversex = 0; // reverse result
    int reversecount = 0; //divid now which is digit is not 0 and going count
    int xforlocal =x; // x for local use
    int numfind = 0;
    bool palindrome = false;
        
    for (int i=0;i<10;i++){
        long long dividnow = 0;
        int temp = 0 ;
        if(x < 0){  //input x judge for next divid rules like  x -90 digit -100, x 90 d 100
            palindrome = false;   //part a  the negative is absolutly false
            break;
        }else{
            if(x < digit[i]){
                // keep divinow is 0;
            }else{
                dividnow = xforlocal/digit[i];  //filter out which digit and numbers
                temp = dividnow * digit[i];   // delete which digit from local x
                xforlocal = xforlocal - temp; // pure next x part of not divid
            } 
        } 
        if(dividnow == 0 && numfind == 0){ //numfind represet finding numbers start then pass all the 0 in the numbers
        }else if( dividnow != 0 || numfind == 1 ){
            long long reversenow = dividnow * digit[10-1-reversecount]; //maping reverse number position multi the digihere
            reversex = reversenow + reversex; //plus the result
            reversecount ++; //count the numbers of next digit
            numfind = 1; //if find any digit not 0 then represent number flow start
        }
        if(reversex>2147483647 ||reversex<-2147483648){
            reversex = 0;  //prevent overflow
        }
        
       
    }
    if(x == reversex){   //part b compare reverse numvber with input x
        palindrome = true;
    }else{
        palindrome = false;
    }
    return palindrome;
}
