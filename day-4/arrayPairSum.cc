#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void arrayPairSum(vector<int>& nums) {
    int sum = 0;
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        sum = sum + nums[i];
        i++;
    }
    cout <<  sum << endl;
}

int main(){
    vector<int> v{1,4,3,2};
    arrayPairSum(v);
    return 0;
}