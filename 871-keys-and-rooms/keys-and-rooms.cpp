class Solution {
private:
    void dfs(int idx,vector<int> & vis,vector<vector<int>>& rooms){
        vis[idx]=1;

        for(auto keys : rooms[idx]){
            if(!vis[keys]){
                dfs(keys,vis,rooms);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> vis(n,0);

        dfs(0,vis,rooms);

        for(auto ans : vis){
            if(ans==0) return false;
            cout<<ans<<" ";
        }
        return true;
    }
};