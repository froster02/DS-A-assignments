#include <iostream>
#include <vector>
using namespace std;

    void shiftGrid(vector<vector<int> >& grid, int k = 1) {
        vector<int> temp;
        
        int r = grid.size();
        int c = grid[0].size();
        k = k % (r*c);
        for(auto i : grid){
            for(auto j : i)
                temp.push_back(j);
        }
        
        reverse(temp.begin(), temp.end());
        
        vector<int> temp1;
        for(int i = k; i < temp.size(); i++)
            temp1.push_back(temp[i]);
        
        for(int i = 0; i < k; i++)
            temp1.push_back(temp[i]);
        
        reverse(temp1.begin(), temp1.end());
        int p = 0;
        vector<vector<int> > result;
        for(int i = 0; i < r; i++){
            vector<int> temp2;
            for(int j = 0; j < c; j++){
                temp2.push_back(temp1[p++]);
            }
            result.push_back(temp2);
        }
        
        for(auto x : result){
            for(auto y : x)
                cout << y << " ";
            cout << endl;
        }
    }

int main(){
    vector<vector<int> > v{{1,2,3},{4,5,6},{7,8,9}};
    shiftGrid(v);
}