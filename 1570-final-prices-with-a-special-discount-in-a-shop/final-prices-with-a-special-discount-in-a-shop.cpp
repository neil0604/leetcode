class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        int n=p.size();
       // vector<int> v(n);
        for(int i=0;i<n-1;i++){
            int j=i+1;
            while(j < n && p[i] < p[j]){
                j++;
            }
           if(j==n) continue;
           else {
            //v[i]=p[j];
           p[i]=p[i]-p[j];
           }
        }
       
        return p;
        
    }
};