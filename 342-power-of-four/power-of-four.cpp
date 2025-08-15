class Solution {
public:
    bool isPowerOfFour(int n) {
        long long i=1;
        while(i<n){
            i=i*4;
            if(i==n) return true;

        }
        if(n==1) return true;
        else return false;

        return false;
    }
};