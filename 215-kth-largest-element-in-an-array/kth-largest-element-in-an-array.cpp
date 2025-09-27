class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        int i=0;
        for(auto num :  nums){
            pq.push({num,i});
            i++;
        }
        k--;
        while(k--){
            pq.pop();
        }
        return pq.top().first;
    }
};