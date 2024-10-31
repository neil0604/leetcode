class Solution {
public:
    double myPow(double x, int n) {
       if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
       
        bool flag=false;
        long n1=n;
        if(n<0){
            flag=true;
            n1=-n1;
        }
        double sum=1;
        
        
        if(flag) x=1/x;
        for(int i=0;i<n1;){
            sum=sum*x;
            i++;
        }
        return sum;
    }
};