class Solution {
    private:
    void bfs(int node,vector<int> &visited,vector<list<int>> adv){
visited[node]=1;
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            int n =q.front();
            q.pop();
            for(auto ele : adv[n]){
                if(!visited[ele]){
                    q.push(ele);
                    visited[ele]=1;
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
int n=isConnected.size();
      //  vector<int> advLs[n];
        vector<list<int>> adv(n+1);

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(isConnected[i-1][j-1]==1){
                    adv[i].push_back(j);
                    adv[j].push_back(i);
                }
            }
        }
       vector<int> visited(n+1,0);
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                cnt++;
                bfs(i,visited,adv);
            }
        }
        return cnt;
    }
};