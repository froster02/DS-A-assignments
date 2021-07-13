class Solution {
public:
    string thousandSeparator(int n) {
        
        if(n == 0)
            return "0";
        
        string str = "";
        
        for(int i = 0; n > 0; i++) {
            char ch = (n % 10) + '0';
            n = n / 10;
            if(i % 3 == 0 && i != 0)
                str.push_back('.');
            str.push_back(ch);
        }
        
        reverse(str.begin(), str.end());
        
        return str;
    }
};