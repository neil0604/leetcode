class Solution {
public:
    int findClosest(int x, int y, int z) {

      int left =   abs(z-x) ;
        int right = abs(z-y);
        if(left==right) return 0;
        if(left<right) return 1;
        
        return 2;
    }
};