#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> temp(0);
    int i = 0, j = n;
    while(i < n){
        temp.push_back(nums[i++]);
        temp.push_back(nums[j++]);
    }
    return temp;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(0);

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    cout << removeDuplicates(nums);
    return 0;
}