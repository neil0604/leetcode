class Solution {
long long fact(int n){
    long long mul=1;
    for(int i=2;i<=n;i++){
        mul=mul*i;
    }
    return mul;
}
long long pairs(int i){
    long long ans=fact(i)/(fact(2)*fact(i-2));
    return ans;
}
int rev(int i){
    int r=0;
    while(i>0){
        int d=i%10;
        r=r*10+d;
        i=i/10;
    }
    return r;
}
public:
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);
        }
        int i=0;
        long long sum=0;
        unordered_map<int,int> mp;
        while(i<n){
            if(mp.find(nums[i])!=mp.end()){
              //  if(mp[nums[i]]==1) sum+=1;
              sum=sum+mp[nums[i]];
                mp[nums[i]]++;
             
              
            }
            else {
                mp[nums[i]]++;
            }
            i++;
        }
// while(i<n){
//     mp[nums[i]]++;
//     i++;
// }
// for(auto ele : mp){
//     int c=ele.second;
//     sum+=pairs(c);
// }
return  sum%1000000007;
    }
        
//     }
};