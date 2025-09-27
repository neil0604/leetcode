class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        int n=points.size();
        for(int i=0;i<n;i++){
          int  distance=((points[i][0]*points[i][0]) + (points[i][1]*points[i][1]));
            pq.push({distance , {points[i][0] , points[i][1]}});

        } 
        vector<vector<int>> ans;
        while(k--){
            pair<int, int> p = pq.top().second;
            ans.push_back({p.first, p.second});
            pq.pop();
        }
        return ans;
    }
};