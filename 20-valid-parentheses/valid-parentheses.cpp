class Solution {
public:
    bool isValid(string s) {
        stack<char> str; 
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                str.push(s[i]); 
            }
            
            if(s[i] == '}'){
                if(str.empty() || str.top() != '{') {
                    return false; 
                }
                else str.pop();
            }
            if(s[i] == ']'){
                if(str.empty() || str.top() != '[') {
                    return false;
                }
                else str.pop();
            }
            if(s[i] == ')'){
                if(str.empty() || str.top() != '(') {
                    return false;
                }
                else str.pop();
            }
        }
        return str.empty(); 
    }
};