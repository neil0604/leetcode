class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        v.push_back(1);
        for(int i=2;i<n;i++){
            if(n%i==0){
                v.push_back(i);
            }
        }
            v.push_back(n);
           // int idx=-1;
           if(k > v.size()) return -1;
          int ans = v[k-1];
            return ans;
        }
    
};