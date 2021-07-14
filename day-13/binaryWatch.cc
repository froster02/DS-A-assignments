#include <iostream>
#include <bitset>
#include <vector>
#include <string>
using namespace std;

int main(){

    int bit = 2;
    // cin >> bit;

    vector<string> t;
    for(int i = 0; i < 12; i++){
        bitset<4> hr(i);
        for(int j = 0; j < 60; j++){
            bitset<6> min(j);
            for(int k = 0; k < 60; k++){
                bitset<6> sec(k);
                if(hr.count() + min.count() + sec.count() == bit){
                    string hour = to_string(i);
                    string minute = (j < 10) ? ":0" : ":";
                    string second = (k < 10) ? ":0" : ":";
                    minute = minute + to_string(j);
                    second = second + to_string(k);
                    t.push_back(hour + minute + second);
                }
            }
        }
    }

    for(int i = 0; i < t.size(); i++)
        cout << t[i] << "|";

    return 0;
}