class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);
        int n=s.size();
        string res="";
        bool flag=true;
        int rows=0;
        if(numRows==1) return s;

        for(int i =0;i<n;i++){

            char ch=s[i];
            ans[rows]+=ch;
            if(numRows-1==rows){
                flag=false;
            }
            if(rows==0){
                flag=true;
            }
            if(flag){
                rows++;
            }else rows--;
        
       // return ans;
        }
       for(int j=0;j<numRows;j++){

        res+=ans[j];
       }
    
    return res;
    }
};