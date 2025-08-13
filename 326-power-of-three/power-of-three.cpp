class Solution {
public:
    bool isPowerOfThree(int n) {
        long long num=3;
        if(n==1) return true;
        if(n==0 || n <= -1) return false;
        for(int i=0;i<100;i++){
         if(num==n) return true;
         cout<<num<<" ";
         if(num > n) return false;
         num  = 3 * num;
        }



        return false;
    }
};