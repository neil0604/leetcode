
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char> stack;
        int start = 0; 
        int n = s.size();
        for(int i = 0; i <n; i++){
            if(s[i] == '(') {
                stack.push('(');
            }else{
                stack.pop();
            }
           
            if(stack.empty()){
              
                result += s.substr(start + 1, i - start - 1);
                start = i + 1;  
            }
        }

        return result;
    }
};