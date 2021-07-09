#include <iostream>
#include <vector>
using namespace std;

void createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> ans;
    int i, x, v;
    for(i = 0;i < nums.size(); i++) {
        x = index[i];
        v = nums[i];
        ans.insert(ans.begin() + x, v);
    }
    for(auto x : ans)
        cout << x << " ";
}

int main(){

    vector<int> v {0,1,2,3,4}, v1 {0,1,2,2,1};

    createTargetArray(v, v1);

    return 0;
}