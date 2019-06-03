class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string, set<string>> maps;
        
        for(int i = 0; i < emails.size(); i++) {
            string email;
            bool stop = false;
            for (int j = 0; j < emails[i].size(); j++) {
                if (emails[i][j] == '+') {
                    stop = true;
                } else if (emails[i][j] == '.') {
                } else if (emails[i][j] == '@') {
                    string domain = emails[i].substr(j+1, emails[i].size());
                    if (maps.find(domain) != maps.end()) {
                        maps[domain].insert(email);
                    } else {
                        set<string> s;
                        s.insert(email);
                        maps[domain] = s;
                    }
                    break;
                } else {
                    if (!stop) {
                        email += emails[i][j];   
                    }
                }
            }
        }
        
        int size = 0;
        for (map<string, set<string>>::iterator it = maps.begin(); it != maps.end(); it++) {
            size += it->second.size();
        }
        
        return size;
    }
};
