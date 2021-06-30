#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(auto x : nums1)
        m[x]++;
    for(auto y : nums2){
        if(m[y] > 0){
            ans.push_back(y);
            m[y]--;
        }
    }

    for(auto y : ans){
        cout << y << " ";
    }    
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> nums1, nums2;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        nums1.push_back(ele);
    }
    for(int i = 0; i < m; i++){
        int ele;
        cin >> ele;
        nums2.push_back(ele);
    }

    intersect(nums1, nums2);

    return 0;
}