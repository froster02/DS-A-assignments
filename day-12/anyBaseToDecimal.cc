#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, x;
    string s;
    char c = '.';
    cin >> s >> n;
    x = s.find(c);
    float ans = 0,i = 0;
    while(i < x){
        int t = pow(n, x - i - 1);
        ans = ans + t * (s[i] - '0');
        i++;
    }
    x++, i++;
    int k = -1;
    while(x < s.size()){
        ans += pow(n, k) * (s[i] - '0');
        i++, x++, k--;    
    }
    cout << ans;
} 