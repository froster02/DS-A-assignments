#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void peakIndexInMountainArray(vector<int>& arr) {
    int largest = *max_element(arr.begin(), arr.end());
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < largest)
            count++;
        else 
            break;
    }
    cout << count;
}

int main(){

    vector<int> v {0,2,1,0};
    peakIndexInMountainArray(v);

    return 0;
}