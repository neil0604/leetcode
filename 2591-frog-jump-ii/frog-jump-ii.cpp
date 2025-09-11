class Solution {
public:
    int maxJump(vector<int>& stones) {
        vector<int>v1;
        vector<int>v2;
        int n = stones.size();
        v1.push_back(stones[0]);
        v2.push_back(stones[0]);
        for(int i=1;i<n-1;i++){
            if(i%2==0) v1.push_back(stones[i]);
            else v2.push_back(stones[i]);
        }
        v1.push_back(stones[n-1]);
        v2.push_back(stones[n-1]);
        int mx = 0;
        for(int i=0;i<v1.size()-1;i++){
            mx = max(mx,v1[i+1]-v1[i]);
        }
        for(int i=0;i<v2.size()-1;i++){
            mx = max(mx,v2[i+1]-v2[i]);
        }
        return mx;
    }
};