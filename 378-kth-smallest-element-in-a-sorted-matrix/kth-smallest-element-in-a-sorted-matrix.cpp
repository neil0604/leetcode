class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        int n=m.size();
        int n1=m.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pq.push(m[i][j]);
                if(pq.size()>k) pq.pop();
            }
        }
        return pq.top();
    }
};