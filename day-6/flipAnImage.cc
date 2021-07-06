#include <iostream>
#include <vector>
using namespace std;

void flipAndInvertImage(vector<vector<int> >& image) {
    int n = image.size();
    int m = image[0].size();
    vector<vector<int> > ans(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0, k = (m-1); j < m, k >= 0; j++, k--){
            if(image[i][k])
                ans[i][j]=0;
            else
                ans[i][j]=1;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}

int main(){
    vector<vector<int> > v  {{1,1,0}, 
                            {1,0,1}, 
                            {0,0,0}};
    flipAndInvertImage(v);
    return 0;
}