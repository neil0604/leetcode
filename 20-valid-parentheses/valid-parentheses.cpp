class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool flag=true;
        int i=0;
        while(s[i]!='\0'){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
           else if(st.empty()==false){
            if(s[i]==')'  && st.top()=='('){
                st.pop();
            }
            
          
            else if(s[i]=='}'   && st.top()=='{'){
                st.pop();
            }
            
            
           
           else if(s[i]==']'  && st.top()=='['){
                st.pop();
            }
            else{ 
                flag=false;

            }
            }
            else flag=false;
           
            
               

            
             i++;
        }
        if(st.empty() && flag==true ) return true;
        else return false;
       // return flag;
    }
      
    
};