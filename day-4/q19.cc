#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static bool comparator(int x,int y){
    if(__builtin_popcount(x) == __builtin_popcount(y))
        return x < y;
    return __builtin_popcount(x) < __builtin_popcount(y);
}

void sortByBits(vector<int>& arr) {
    sort(arr.begin(), arr.end(), comparator);
    for(auto x : arr)
        cout << x << " ";
}

int main(){

    vector<int> v {0,1,2,3,4,5,6,7,8};

    sortByBits(v);

    return 0;
}