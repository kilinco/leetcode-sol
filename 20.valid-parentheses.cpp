#include <string>
#include <stack>
class Solution {
public:
    bool isValid(std::string s) {
        if (s.length() == 0) return true;
        if (s.length() == 1
                || s[0]=='}' 
                || s[0] == ']'
                || s[0] == ')') return false;
        std::stack<char> p;
        p.push(s[0]);
        for(int i = 1; i < s.length(); i++) {
            if ( !p.empty() 
             && ((p.top() == '{' && s[i] == '}') 
             ||  (p.top() == '[' && s[i] == ']') 
             ||  (p.top() == '(' && s[i] == ')'))) p.pop();
            else if ((s[i] == '{')
             || (s[i] == '[')
             || (s[i] == '(')) p.push(s[i]);
            else return false;
        }
        return p.empty(); 
    }
};


