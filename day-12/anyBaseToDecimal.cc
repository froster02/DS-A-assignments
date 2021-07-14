#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    string str;
    int n;
    cin >> str >> n;
    int size = str.size(), j = 0;
    string s1, s2;
    for(int i = 0; i < size; i++){
        if(str[i] != '.') {
            s1.push_back(str[i]);
            j++;
        }
        else if(str[i] == '.')
            break;
    }

    for(int i = j; i < size; i++)
        if(str[i] != '.')
            s2.push_back(str[i]);

    double sum = 0.0;

    for(int i = s1.size() - 1, exp = 0; i >= 0; i--, exp++)
        sum += (s1[i] - '0') * pow(n, exp);

    for(int i = 0, exp = -1; i < s2.size(); i++, exp--)
        sum += (s2[i] - '0') * pow(n, exp);

    cout << sum << endl;

    return 0;
} 