class Solution {
public:
    vector<vector<int> > fun(vector<vector<int> > &a){
        int N = a.size();
        vector<vector<int>> b;
        for(int j = 0; j < N; j++)
        {
            vector<int> temp;
            for(int i = N - 1; i >= 0; i--)
            {
                temp.push_back(a[i][j]);
            }
            b.push_back(temp);
        }
        return b;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target)
            return true;
        int c = 4;
        while(c--){
            mat = fun(mat);
        
            if(mat == target)
                return true; 
        }
        return false;
    }
};