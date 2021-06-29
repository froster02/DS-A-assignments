#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int n, key;
    cin >> n;
    vector<int> a(0);

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        a.push_back(ele);
    }
    cin >> key;

    sort(a.begin(), a.end(), greater<int>());

    vector<int> b(0);
    for(int i = 0; i < n; i++){
        if(a[i] != key) 
            b.push_back(a[i]);
        if(a[i] == key) {
            b.push_back(a[i]);
            break;
        }
    }

    for(int x : b) 
        cout << x << " ";

    return 0;
}