#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int>& nums) {
    vector<int> v;
    for(int i = 0; i < nums.size(); i = i + 2){
        while(nums[i]-- > 0){
            v.push_back(nums[i+1]);
        }
    }
    for(auto x : v)
        cout << x << " ";
}

int main(){
    
    vector<int> v {1,2,3,4};
    fun(v);
    
    return 0;
}