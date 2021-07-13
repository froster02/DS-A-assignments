class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        int hlen = haystack.size();
        int nlen = needle.size();
        int i = 0, j = 0;
        while(i < hlen && j < nlen){
            if(haystack[i] == needle[j]){
                i++;
                j++;
                if(j == nlen){
                    int idx = i - nlen;
                    return idx;
                }
            } else {
                i = i - j + 1;
                j = 0;
            }
        }
        return -1;
    }
};