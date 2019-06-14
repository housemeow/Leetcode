
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
    short int slen = strlen(s);
    printf("slen is %d",slen);
    short int popoutposition = 0;
    bool  legal = false;
    if(slen%2==0&&slen!=0){
    for(int i=0;i<slen;i++){
        printf("\n i is %d ",i);
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            popoutposition=i;;    
            printf("popoutposition++ is %d ",popoutposition);
            legal=false;
        }else{
            
            printf("s[i] is %c ",s[i]);
           
            if(slen!=1&&i!=0){
                printf("s[popoutposition-1] is %c ",s[popoutposition]);
                if(s[i]==')'&&s[popoutposition]=='('){
                    popoutposition--;
                    legal=true;
                    printf("popoutposition-- is %d ",popoutposition);
                }else if(s[i]==']'&&s[popoutposition]=='['){
                    popoutposition--;
                    legal=true;
                }else if(s[i]=='}'&&s[popoutposition]=='{'){
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
        printf("legal=true is");
        legal=true;   
    }else{
        legal=false;   
    }
        
    return legal;
}

