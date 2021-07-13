class Solution {
public:
    bool isAnagram(string s, string t) {
        int slen = s.size();
        int tlen = t.size();
        
        if(slen != tlen)
            return false;
        
        unordered_map<char, int> um;
        
        for(auto x : s)
            um[x]++;
        
        for(auto x : t)
            um[x]--;
             
        for(auto x : um)
            if(x.second != 0)
                return false;
            
        return true;
    }
};