class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        while(n > 0) {
            count = count + (n & 1);
            n = n >> 1;
        }
        if(count == 1)
            return true;
        else 
            return false;
    }
};