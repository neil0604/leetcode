class Solution {
public:
typedef pair<int,int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;
        int n=arr.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int dis=abs(x-arr[i]);
            v[i]=dis;
        }
        for(int i=0;i<n;i++){
            pq.push({v[i],arr[i]});
            if(pq.size()>k){
                cout<<pq.top().first<<" "<<pq.top().second;
                pq.pop();
            }
        }
        vector<int> ans(k);
        for(int i=k-1;i>=0;i--){
            ans[i]=pq.top().second;
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};