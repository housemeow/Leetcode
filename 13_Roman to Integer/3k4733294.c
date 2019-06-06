//let's brainstorm now  from number to Roman 
// I  II III IV V VI VII VIII IX X   
// 1  2  3   4  5 6  7    8   9 10  
// XXI XXII   21  22
// XI XII ... 11  12
// XXXI XXXII 31  32                  
// XLI  XLII 41   42                                                                          
// LI   LII  51   52                  
// LXI   LXII 61  62
// XCI   XCII 91  92
// CI    CII  101 102
// CXI   CXII 111 112
//                        operation num postion
//                                    o1 o2 o3  digicount 
//                                    I  V  X      0      1~10 needed  units digit  if digitcount 0 
//                        arrayrow1   1  5  10              
//                                    X  L  C      1      10~100 (w/o 1~10) tens digit 
//                        arrayrow2   10 50 100
//                                    C  D  M      2      100~1000 (w/o 1~10 10~100) hundre digit
//                        arrayrow3   100 500 1000
//                                    M  N  Q      3      1000~10000 (w/o 1~10 10~100 100~1000) thousand digit
//                        arrayrow4  1000 5000// 10000//   
//                       some  carry logic with 
//                        I        II         III          IV       V      VI          VII        VIII                     IX         X 
//                      o1.1 o1.1+o1.1 o1.1+o1.1+o1.1 o1.1+o1.3 o1.3  o1.3+o1.1 o1.3+o1.1+o1.1  o1.3+o1.1+o1.1+o1.1   o1.1+o1.3      o1.3      
// must some step 
// know every digit  4321   seperate to  4000 300 20 1
// judge every digit represent the some logic at different digit
// o1.1 o1.1+o1.1 o1.1+o1.1+o1.1 o1.1+o1.3 o1.3  o1.3+o1.1 o1.3+o1.1+o1.1  o1.3+o1.1+o1.1+o1.1   o1.1+o1.3      o1.3
//know every digit by divid with digicount find the digit array by digicount


//let's brainstorm now  from Roman  to number
//  I   IV  V
//  V   VI  VII
// IX   X

// find I X C M  o1 next not vldn o2  if then put o1.x + o2.x
// find o2 then if o1 then output                 o2.x + o1.x

// 1 find from M to I  judge still o1 or o2 have at same row then forward to lower digit
// if the big digit if operation/find the operation digit first , we finish then narrow the array iteration range +1 -1 iteration range

//add the 1 colum structure 
//keep implement the array digit structure
int digitarray[3][3] = {
    {1, 5, 10}, 
    {10, 50, 100},
    {100, 500, 1000},
    {1000, 5000, 10000}
};
char roman[3][3] = {
    {'I', 'V', 'X'}, 
    {'X', 'L', 'C'},
    {'C', 'D', 'M'},
    {'M', 'N', 'Q'}
};
int romanToInt(char * s){
    int romentoint;
    int lens = strlen(s);
    printf("lens %d", lens);
    char* ptr = s;
    for(int i = 0 ;i < lens;i++){
        printf("%c :", *(ptr+i));
        
        for(int j;j<3;j++){
            for(int k;k<3;k++){
                if(*(ptr+i)=='I'){
                    if(*(ptr+i+1)=='V'){
                    
                    }else if(*(ptr+i+1)=='X'){
                    
                }
                }else if(*(ptr+i)=='V'){
                    if(*(ptr+i+1)=='I'){
                
                }else{
                
                }            
                }else if(*(ptr+i)=='X'){
            
                }
            }
        }
        
        
    } 
    int i=0;
   // while(*(ptr+i)!='\0'){
   //     printf("at while %c :", *(ptr+i));
   //     i++;
   // }
    return romentoint;
}

