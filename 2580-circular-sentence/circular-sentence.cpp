class Solution {
public:
    bool isCircularSentence(string s) {
        bool flag=true;
        s=s+' ';
        int n=s.size();
        int i=0;
        while(s[i]!='\0'){

            while(s[i] != ' ' ){
                i++;

            }
            if(s[i+1]!='\0' && s[i-1]!=s[i+1]){
                flag=false;
                break;
            }
            i++;
        }
        if(s[0]!=s[n-2]){
            flag=false;
        }
        return flag;
    }
};