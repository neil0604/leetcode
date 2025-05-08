class Solution {
private:
   bool dfs_of_directed_graph(vector<int> &vis,int node,vector<vector<int>>& graph,vector<int> &ans,vector<int> &pathvisited){
        vis[node]=1;
        pathvisited[node]=1;

        for(auto ele : graph[node]){
            if(!vis[ele]){
                if(!dfs_of_directed_graph(vis,ele,graph,ans,pathvisited)){
                    ans[node] = -1; // Mark as unsafe
                    return false;
                }
            }
            else if(pathvisited[ele]==1){
                ans[node] = -1; // Mark as unsafe
                return false;
            }
        }

        pathvisited[node]=0;
        ans[node]=1; // Mark as safe
        return true;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int n=graph.size();
        vector<int> vis(n,0);
        vector<int> pathvisited(n,0);
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs_of_directed_graph(vis,i,graph,ans,pathvisited);
            }
        }

        vector<int> ans2;
        for(int i=0;i<n;i++){
            if(ans[i]==1){
                ans2.push_back(i);
            }
        }
        return ans2;
    }
};

