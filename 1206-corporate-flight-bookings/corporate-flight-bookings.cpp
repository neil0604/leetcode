class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int len=bookings.size();
        int a,b;
        vector<int> v(n);
        for(int i=0;i<len;i++){
            
            
            a=bookings[i][0]-1;
            b=bookings[i][1]-1;
            v[a]=v[a]+ bookings[i][2];
             if(b==n-1) v[b]=v[b]+0;
             else
            v[b+1]-=bookings[i][2];  
            
        }
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+v[i];
        }
    return v;
    }
};