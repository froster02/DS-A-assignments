class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int n = s.length() - 1;
        int j = n;
        for(int i = 0; i < j; i++){
            while(i < j && !isVowel(s[i]))
                i++;
            while(i < j && !isVowel(s[j]))
                j--;
            swap(s[i], s[j]); 
            j--;
        }
        return s;
    }
};



















