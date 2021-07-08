#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    vector<int> temp;
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[i].size(); j++)
            temp.push_back(grid[i][j]);
    }
    int count = 0;
    for(int i = 0; i < temp.size(); i++)
        if(temp[i] < 0)
            count++;
    cout << count;
}

int main(){

    vector<vector<int> > v {  {4,3,2,-1}, {3,2,1,-1}, {1,1,-1,-2}, {-1,-1,-2,-3}};

    countNegatives(v);

    return 0;
}