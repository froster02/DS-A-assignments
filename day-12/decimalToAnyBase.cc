#include <iostream>
using namespace std;
int decimalToAnyBase(int n, int b){
    int ans = 0, pow = 1;
    while(n != 0){
        int temp = n % 10;
        n = n / 10;
        ans = ans + (temp * pow);
        pow = pow * b;
    }
    return ans;
}

int main(){
    int n, b;
    cin >> n >> b;
    cout << decimalToAnyBase(n, b) << endl;
    return 0;
}