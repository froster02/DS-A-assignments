#include <iostream>
#include <vector>
using namespace std;

void truncateSentence(string s, int k) {
    int count=0;
    for(int i = 0;i < s.size(); i++){
        if(s[i]==' ')
            count++;
        if(count == k){
            s.erase(s.begin()+i , s.end());
        }
    }
    for(auto x : s)
        cout << x << "";
}

int main(){

    string s = {"Hello how are you Contestant"};
    int k = 4;

    truncateSentence(s, k);

    return 0;
}