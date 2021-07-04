#include<iostream>
#include<vector>
using namespace std;

void islandPerimeter(vector<vector<int>>& grid) {
    int r = grid.size();
    int c = grid[0].size();
    int count = 0;
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            if(grid[i][j] == 1){
                if(i-1 < 0 || grid[i-1][j] == 0)
                    count++;
                if(j-1 < 0 || grid[i][j-1] == 0)
                    count++;
                if(i+1 == r || grid[i+1][j] == 0)
                    count++;
                if(j+1 == c || grid[i][j+1] == 0)
                    count++;
            }
        }
    }
    cout << count;
}

int main(){

    vector<vector<int> > v{{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    islandPerimeter(v);
    
    return 0;
}