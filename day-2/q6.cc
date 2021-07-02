#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] == nums[j])
                count++;
        }
    }
    cout << count;
}

int main(){

    int n;
    vector<int> nums;
    cin >> n;

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }

    numIdenticalPairs(nums);

    return 0;
}