#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void subsetXORSum(vector<int>& nums) {
    int b = 0;
    for(auto x : nums)
        b = b | x;
    int t = b * pow(2,nums.size() - 1);
    cout << t << endl;
}

int main(){

    vector<int> v{5,1,6};
    subsetXORSum(v);

    return 0;
}
