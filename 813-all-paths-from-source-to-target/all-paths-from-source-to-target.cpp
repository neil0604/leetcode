class Solution {
private:
    void dfs(vector<vector<int>>& graph,vector<int> & vis,int scr,int dis,vector<int> &ans,vector<vector<int>> & res){
      //  vis[scr]=1;
        if(scr==dis){
          
            res.push_back(ans);
          
            return;

        }
        for(auto nei : graph[scr]){
            if(!vis[nei]){
                ans.push_back(nei);
                vis[nei]=1;
                dfs(graph,vis,nei,dis,ans,res);
                vis[nei]=0;
                ans.pop_back();
            }
        }
      //  vis[scr]=0;
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int scr=0;
        int n=graph.size();
        int dis=n-1;
        vector<int> vis(n);
        vis[0]=1;
        vector<int> ans;
        ans.push_back(0);
        vector<vector<int>> res;
        dfs(graph,vis,scr,dis,ans,res);
        return res;
    }
};