class Solution {
public:
    int numJewelsInStones(string J, string S);
    };

/*
int Solution::numJewelsInStones(string J, string S) {        
        int Output = 0;
        for(int i=0; i<S.size(); i++){
            string js = J.substr(0,1);
            string ss = S.substr(i,1);
            
            if (js.compare(ss) == 0){
                int count = 0;
                string scur;
                scur = S.substr(i,J.size());
               if (scur.compare(J) == 0){
                   Output = Output + 1;
               }           
            }
        }
        return Output;
}*/

int Solution::numJewelsInStones(string J, string S) {        
        int Output = 0;
        string jewelstr;
        int jewel = 0;
            for (int i =0; i<J.size(); i++){
                string cmpstr = J.substr(i,1);
                for (int j = 0; j<jewelstr.size(); j++){
                    if(jewelstr.compare(cmpstr)==0){
                        jewel ++;
                    }
                }
                if(jewel == 0){
                    jewelstr.append(cmpstr, 0 , 1);
                }
            }
    
        for(int i=0; i<jewelstr.size(); i++){
            string js = jewelstr.substr(i,1);
            for(int j=0; j<S.size(); j++){
               string ss = S.substr(j,1);
               if (ss.compare(js) == 0){
                        Output = Output + 1;
                    }           
                } 
            }
            
        
        return Output;
}
