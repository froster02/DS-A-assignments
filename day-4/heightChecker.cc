#include <iostream>
#include <vector>
using namespace std;

void heightChecker(vector<int>& v) { 
    vector<int> v2=v;
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]!=v2[i])
        count++;
    }
    cout << count;
}

int main() {
  vector<int>v {1,1,4,2,1,3};
  heightChecker(v);
  return 0;
}