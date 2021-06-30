#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxi = INT_MAX;

int richest(vector<vector<int> >& accounts){
    for(int i = 0; i < accounts.size(); i++){
        int sum = 0;
        for(int j = 0; j < accounts.size(); j++){
            sum = sum + accounts[i][j];
        }
        if(sum > maxi)
            maxi = sum;
    }
    cout << maxi;
}

int main(){
    int m,n;
    int k;
    cin>>m>>n;
    vector<vector<int> > accounts(m);

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){
        cin>>k;
        accounts[i].push_back(k);
        }
    }
    
    richest(accounts);

    return 0;
}