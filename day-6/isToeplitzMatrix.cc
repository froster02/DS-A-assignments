#include <iostream>
#include <vector>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    for(int i = 0; i < matrix.size() - 1; i++){
        for(int j = 0; j < matrix[0].size() - 1; j++){
            if(matrix[i][j] != matrix[i+1][j+1])
                cout << false;
        }
    }
    cout <<  true;
}

int main(){

    vector<vector<int> > v{{1,2,3,4},{5,1,2,3},{9,5,1,2}};

    isToeplitzMatrix(v);

    return 0;
}