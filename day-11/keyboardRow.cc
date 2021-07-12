class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        int a[26] = {2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3};
        for(int i = 0; i < words.size(); i++){
            int temp = a[(tolower(words[i][0])) - 'a'];
            bool flag = false;
            for(int j = 1; j < words[i].size(); j++){
                if(temp != a[(tolower(words[i][j])) - 'a']){
                    flag = true;
                    break;
                }
            }
            if(flag == false)
                ans.push_back(words[i]);
        }
        return ans;
    }
};
