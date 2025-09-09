class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        int n=in.size();
        sort(in.begin(),in.end());

        for(int i=0;i<n;i++){
            bool flag=false;
            int first=in[i][0];
            int last=in[i][1];
         // int  j=i+1;
            if(i<n-1){
             
            while( i<n-1 && in[i+1][0] >= first && in[i+1][0] <= last){
                last = max(last, in[i+1][1]);
                i++;
                flag=true;
            }
            }
          
            ans.push_back({first,last});
        }

        return ans;
    }
};