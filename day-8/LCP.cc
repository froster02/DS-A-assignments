class Solution {
public:
        string longestCommonSuffix(vector<string>& strs) {

        for(int i = 0; i < strs.size(); i++)
            reverse(strs[i].begin(), strs[i].end());

        sort(strs.begin(), strs.end());
        int n = strs.size();
        string s1 = strs[0];
        string s2 = strs[n - 1];
        string ans = "";
        for(int i = 0; i < s1.size();i++) {
            if(s1[i] == s2[i])
                ans += s1[i];
            else 
                break;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};