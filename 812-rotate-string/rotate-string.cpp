class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int i=0;
       string str=s;
        if(s==goal) return true;
        while(n>0){
            
            str=str.substr(1);
            
            char ch=s[i++];
            str+=ch;
           // cout<<str<<endl;
            if(str==goal) return true;
            n--;
           // i++;


        }
        return false;
    }
};