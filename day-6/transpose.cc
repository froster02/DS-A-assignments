#include <iostream>
#include <vector>
using namespace std;

void transpose(vector<vector<int>>& matrix) {
    vector<vector<int>> ans  (matrix[0].size() , vector<int> (matrix.size(), 0));
    for(int i = 0;i < matrix.size(); i++) {
        for(int j = 0;j < matrix[i].size(); j++)
            ans[j][i] = matrix[i][j];
    }
    
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[0].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main (){

    vector<vector<int> > v{ {1,2,3}, {4,5,6}, {7,8,9}};
    transpose(v);

    return 0;
}