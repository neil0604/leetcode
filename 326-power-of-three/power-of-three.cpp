class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n<0) return false;
        int low=1;
        int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
          
            if( pow(3,mid)==n) return true;
            if( pow(3,mid)>n){
                high=mid-1;
            }
            else if( pow(3,mid)<n){
                low=mid+1;

            }
        }
        return false;
    }
};