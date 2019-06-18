
// pop out adjust array start position
// if all pass then legal flag true

//012345  
//position
//{([]})
//123X
// 2  X
//1    X
//()[]{}
//([)]        
//looping position keep looping
//if find )]}  then using compare with s content at popoutposition
//  over execute adjust the  popoutposition minus 1     
//if find ([{  then store +popoutposition
//point is position spot 
//
//if not middle keep looping 
        
bool isValid(char * s){
    char pararr[7000]="";
    short int slen = strlen(s);
    short int popoutposition = 0;   //char array posotion
    bool  legal = false;
    if(slen%2==0&&slen!=0){ //illegal predetect
    for(int i=0;i<slen;i++){      //store the every left Parentheses at char array
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            pararr[popoutposition] = s[i];
            popoutposition++;    
            legal=false;
        }else{
            if(slen!=1&&i!=0){  //illegal predetect
                if(s[i]==')'&&pararr[popoutposition-1]=='('){  //if meet any right Parentheses and pop the array and compare
                    popoutposition--;
                    legal=true;
                }else if(s[i]==']'&&pararr[popoutposition-1]=='['){
                    popoutposition--;
                    legal=true;
                }else if(s[i]=='}'&&pararr[popoutposition-1]=='{'){
                    popoutposition--;
                    legal=true;
                }else{
                    legal=false;
                    break;
                }
            }else{
                legal=false;
                break;
            }
        }
    }
    }else if(slen==0){
        legal=true;   
    }else{
        legal=false;   
    }
    return legal;
}
