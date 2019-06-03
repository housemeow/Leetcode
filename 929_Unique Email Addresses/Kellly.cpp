class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> sets;
        
        for(int i = 0; i < emails.size(); i++) {
            string email;
            bool stop = false;
            for (int j = 0; j < emails[i].size(); j++) {
                if (emails[i][j] == '+') {
                    stop = true;
                } else if (emails[i][j] == '@') {
                    string domain = emails[i].substr(j, emails[i].size());
                    sets.insert(email + domain);
                    break;
                } else if (emails[i][j] != '.') {
                    if (!stop) {
                        email += emails[i][j];   
                    }
                }
            }
        }
        return sets.size();
    }
};
