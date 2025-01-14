class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> ans(n);
        int i=0;
        unordered_map<int,int> mp;
       // mp[A[0]]++;
        while(i<n){
            int cnt=0;
            mp[A[i]]++;
            for( int a=0;a<=i;a++){
                if(mp.find(B[a])!=mp.end()){
                    cnt+=mp[B[a]];
                }
            }
            ans[i]=cnt;
i++;
            }
            return ans;
        }
    
};