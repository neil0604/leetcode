class Solution {
    int digits(int n){
        int sum=0;
        while(n!=0){
            int d=n%10;
            sum+=d;
            n=n/10;
        }
        return sum;
    }
public:
    int countLargestGroup(int n) {

        int maxi=-1;

        map<int,int> mp;
        for(int i=1;i<=n;i++){
        int sum=digits(i);

        mp[sum]++;
        maxi=max(maxi,mp[sum]);



        }
        int cnt=0;

        for(auto ele : mp){
            if(ele.second==maxi){
                cnt++;
            }
        }
    
return cnt;

        
    }
};