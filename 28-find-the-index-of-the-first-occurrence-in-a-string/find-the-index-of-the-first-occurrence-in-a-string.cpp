class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        int m=haystack.size();
        if(n>m) return -1;
        int idx=-1;
        for(int i=0;i<haystack.size()-n+1;i++){
            string need=haystack.substr(i,n);
            if(need==needle){
                idx=i;
                break;
            }
        }
        return idx;
    }
};