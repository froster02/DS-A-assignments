#include <iostream>
#include <vector>
using namespace std;

void decode(vector<int>& encoded, int first) {
    vector<int> ans(encoded.size() + 1);
    ans[0] = first;
    for(int i=1; i <= encoded.size(); i++)
        ans[i] = ans[i-1] ^ encoded[i-1];
    
    for(auto x : ans) 
        cout << x << " ";
}

int main(){

    vector<int> v {1,2,3};
    int f = 1;

    decode(v, f);

    return 0;
}