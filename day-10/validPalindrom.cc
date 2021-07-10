class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> temp;
        
        for(int i=0 ; i<s.length() ; i++) {
            if(isalpha(s[i]))
                temp.push_back(tolower(s[i]));
            if(isdigit(s[i]))
                temp.push_back(s[i]);
        }

        vector<char> res = temp;
        reverse(res.begin(),res.end());
        
        if(temp == res)
            return true;
        return false;
    }
};
