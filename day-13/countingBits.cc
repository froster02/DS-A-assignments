class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++) {
            int c = 0, num = i;
            while(num > 0){
                num = num & (num - 1);
                c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};