#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> ans;
    int pos;
    for(int i = 0;i < matrix.size(); i++) {
        int min = INT_MAX, max = INT_MIN;
        for(int j = 0;j < matrix[i].size(); j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
                pos = j;
            }   
        }
        for(int j = 0; j < matrix.size(); j++) {
            if(matrix[j][pos] > max)
                max = matrix[j][pos];
        }
        if(min == max)
            ans.push_back(min);
    }
    for(auto x : ans)
        cout << x << endl;
}

int main(){

    vector<vector<int> > v {{3,7,8},{9,11,13},{15,16,17}};

    luckyNumbers(v);

    return 0;
}