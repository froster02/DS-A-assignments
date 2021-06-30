#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void kidsToffee(vector<int>& toffee, int extra){
    vector<bool> ans;
    int maximum = *max_element(toffee.begin(), toffee.end());
    for(int i = 0; i < toffee.size(); i++){
        if(toffee[i] + extra >= maximum)
            ans.push_back(true);
        else 
            ans.push_back(false);
    }
    for(bool x : ans){
        cout << x << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> toffee(0);
    int extra;

    for(int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        toffee.push_back(ele);
    }

    cin >> extra;

    kidsToffee(toffee, extra);

    return 0;
}