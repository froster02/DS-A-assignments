#include<iostream>
#include<vector>
#include<set>
using namespace std;

void uniqueMorseRepresentations(vector<string>& words) {
    string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    set<string> setString;
    int value;
    for(int i = 0;i < words.size(); i++){
        string s = "";
        for(int j = 0;j < words[i].size(); j++){
            value = words[i][j] - 97;
            s.append(morse[value]);
        }
        setString.insert(s);
    }
    int size = setString.size();
    cout <<  size;
}

int main(){
    vector<string> s {"gin", "zen", "gig", "msg"};
    uniqueMorseRepresentations(s);
    return 0;
}