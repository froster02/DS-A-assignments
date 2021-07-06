#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void kWeakestRows(vector<vector<int>>& mat, int k) {
    vector<pair<int, int> > temp;
    vector<int> ans;
    int cumSum = 0;
    for(int i = 0; i < mat.size(); i++){
        cumSum = 0;
        for(int j = 0; j < mat[i].size(); j++)
            if(mat[i][j] == 1)
                cumSum++;
        temp.push_back({cumSum,i});
    }
    sort(temp.begin(), temp.end());
    for(int i = 0;i < k; i++)
        ans.push_back(temp[i].second);
    
    for(auto i : ans)
        cout << i << " ";
}

int main(){
    vector<vector<int> > v {  {1,1,0,0,0},
                            {1,1,1,1,0},
                            {1,0,0,0,0},
                            {1,1,0,0,0},
                            {1,1,1,1,1}};
    kWeakestRows(v, 3);
    return 0;
}