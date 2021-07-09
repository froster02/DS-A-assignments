class Solution {
public:
    string addStrings(string a, string b) {
        string ans;
        int sum, carry = 0, i = a.length() - 1, j = b.length() - 1; 

        while(i >= 0 || j >= 0) {
            sum = carry;
            if(i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if(j >= 0) {
                sum += b[j] - '0';
                j--; 
            }
            carry = sum / 10;
            ans = to_string(sum % 10) + ans;
        }
        if(carry == 1)
            ans = to_string(carry) + ans;

        return ans;
    }
};