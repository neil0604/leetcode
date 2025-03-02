class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& v, vector<vector<int>>& v1) {
        
        map<int,int> mp;

        for(int i=0;i<v.size();i++){
            int a=v[i][0];
            int b=v[i][1];
            mp[a]=b;
        }
        for(int i=0;i<v1.size();i++){
            if(mp.find(v1[i][0])!=mp.end()){
                int temp=mp[v1[i][0]];
                mp[v1[i][0]]=v1[i][1]+temp;
            }else {
                mp[v1[i][0]]=v1[i][1];
            }
        }
        vector<vector<int> > ans;
        for(auto ele :mp){
            vector<int> temp1;
            temp1.push_back(ele.first);
            temp1.push_back(ele.second);
            ans.push_back(temp1);
        }


return ans;
    }
};