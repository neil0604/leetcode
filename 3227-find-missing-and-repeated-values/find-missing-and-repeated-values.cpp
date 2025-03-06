class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2);
int n=grid.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               int x = grid[i][j];
               mp[x]++;
               if(mp[x]>1){
                ans[0]=x;
               }
            }
        }
        int a=1;
        for(int i=1;i<=n*n;i++){
           
            if(mp.find(i)==mp.end()){
                ans[1]=i;
                break;
            }

        }
        return ans;
    
    }
};