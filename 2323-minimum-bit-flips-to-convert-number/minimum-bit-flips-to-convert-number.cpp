class Solution {
public:
    int minBitFlips(int start, int goal) {

        int res = start ^ goal;
        int count = 0;
        cout<<res<<" ";
    while (res != 0 ) { 
        if(res & 1 == 1) count++;
        res >>= 1;          
        
    }
        cout<<count;
        return count;
        
    }
};