class Solution {
public:
    void helper(vector<string> &ans,string v,int ob,int cb,int n){
        if(ob==n && cb==n) ans.push_back(v);
        if(ob<n) helper(ans,v+'(',ob+1,cb,n);
        if(cb<ob) helper(ans,v+')',ob,cb+1,n);

    }
    vector<string> generateParenthesis(int n) {
        
vector<string> ans;
        helper(ans,"",0,0,n);
        return ans;
    }
};