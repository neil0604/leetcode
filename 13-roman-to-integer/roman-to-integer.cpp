class Solution {
public:
    int romanToInt(string s) {
        vector <int> v(128);
        v['I']=1;
        v['V']=5;
        v['X']=10;
        v['L']=50;
        v['D']=500;
        v['M']=1000;
        v['C']=100;
        int ans=0;
        int i=0;
        while(s[i]!='\0'){
           // char ch=s[i];
           if(v[s[i+1]]>v[s[i]]){
            ans=ans-v[s[i]];
           } else ans+=v[s[i]];
        i++;}
        return ans;
    }
};