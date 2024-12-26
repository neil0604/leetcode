class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq;
        int n=s.size();
        for(int i=0;i<n;i++){
            pq.push(s[i]);
        }
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            int dif=a-b;
            if(dif!=0) pq.push(dif);
        }
        if(pq.size()==0) return 0;
        return pq.top();
    }
};