class Solution {
public:
    void f(int curr,int n,vector<int>& ans){
        if(curr>n) return;
        if(curr<=n) ans.push_back(curr);

        for(int i=0;i<=9;i++){
            int d=curr*10+i;
            f(d,n,ans);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<=min(9,n);i++){
            f(i,n,ans);
        }
        for(auto ele : ans){
            cout<<ele<<" ";
        }
return ans;

    }
};