class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i = 0; s[i] != '\0'; i++){
            char ch = s[i];
            
            if(ch == '('){
                stk.push(ch);
            } else if (ch == ')'){
                if(stk.empty() || stk.top() != '(')
                    return false;
                stk.pop();
            }
            
            if(ch == '{'){
                stk.push(ch);
            } else if (ch == '}'){
                if(stk.empty() || stk.top() != '{')
                    return false;
                stk.pop();
            }
            
            if(ch == '['){
                stk.push(ch);
            } else if (ch == ']'){
                if(stk.empty() || stk.top() != '[')
                    return false;
                stk.pop();
            }
        }
        return stk.empty();
    }
};