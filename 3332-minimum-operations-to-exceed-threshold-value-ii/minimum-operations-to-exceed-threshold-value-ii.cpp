class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
     priority_queue <long long, vector<long long>, greater<long long> > pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        if (pq.size() < 1) return 0;
        int cnt=0;
        while(pq.size()>1){
            if(pq.top() >= k) break;
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            long long x = min(a,b)*2 + max(a,b);
            pq.push(x);
            cnt++;
            


        }
        return cnt;
    }
};