class Solution {
public:
    int numberOfSteps(int nums) {
        if(nums==0) return 0;
        if(nums%2==0)
        return 1 + numberOfSteps(nums>>1);
        else {
            return 1 + numberOfSteps(nums-1);
        }
    }
};