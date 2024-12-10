class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){

           int a = target-nums[i];
           if(map.find(a)!=map.end()){
                return {i,map[a]};
           }else {
            // pair<int ,int> p1;
            // p1.first=a;
            // p1.second=i;
            // map.insert(p1);
            map[nums[i]]=i;
           }
        }

        return {-1,-1};
    }
};