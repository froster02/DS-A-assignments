#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n < 1)   return n;
    int i, j;
    for(i = 1, j = 1; i < n; i++){
        if(nums[i] != nums[i - 1]){
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
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