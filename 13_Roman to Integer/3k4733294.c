//let's brainstorm now
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
int romanToInt(char * s){

}
