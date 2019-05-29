class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        if ( emails.empty() )
            return 0;
        
        string local;
        string domain;
        int count = 0;
        int found = 0;
        
        vector<string> mailList ;
        
        for ( int i = 0; i < emails.size(); i++) {
            found = emails.at(i).find("@");
            local = emails.at(i).substr(0,found);
            domain = emails.at(i).substr(found+1);
            ErasePlus( local );
            EraseDot( local );
            mailList.push_back(local+"@"+domain);
        }
        
        sort(mailList.begin(),mailList.end());
        
        for ( int i = 0 ; i < mailList.size() ; i++ ) {
            if ( i == 0 ) {
              count++;
              continue;
            } // must have at least one email address
            
            if ( mailList.at(i).compare( mailList.at(i-1) ) )
              count++;
        }

        return count;
    }
    
private:

    void EraseDot( string &str ) {
        
        int lastFound = 0;
        int found = 0;
        do {
            found = str.find(".");
            lastFound = str.rfind(".");
            if (found == -1 )
              return;

            if (found != lastFound )
              str.erase(found,1);
            else {
              str.erase(lastFound,1);
              break;
            }
        } while( true );
        
        return;
    }
    
    void ErasePlus( string &str ) {
        int found = 0;
        
        found = str.find("+");
        if ( found != -1 )
            str.erase(str.begin()+found,str.end());
        
        return;
    }
};
