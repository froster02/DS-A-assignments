#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;
    string mostCommonWord(string parameter, vector<string>& banned){
        unordered_set<string> set(begin(banned), end(banned));
        for (int i = 0; i < parameter.length(); i++){
            if(isalpha(parameter[i]))
                parameter[i] = tolower(parameter[i]);
            else 
                parameter[i] = ' ';
        }
        
        stringstream s(parameter);
        string str = "";
        int freq = INT_MIN;
        
        unordered_map <string, int> ans;
        while (s >> str) {
            if(!set.count(str))
                ans[str]++;
        }
        
        for (auto i : ans) {
            if (i.second > freq) {
                str = i.first;
                freq = i.second;  
            }
        }
        return str;
    }
};
