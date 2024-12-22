class Solution {
bool helper(int i,unordered_map<int,int> mp){
    while(i>0){
        int d=i%10;
        if(mp.find(d)!=mp.end()){
            mp[d]--;
            if(mp[d]==0){
                mp.erase(d);
            }
        }
        else return false;

        
        i=i/10;

    }
    return true;
}
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int> mp;
        vector<int> v;
        int n= digits.size();
        for(int i=0;i<n;i++){
            mp[digits[i]]++;
        }

        for(int i=100;i<=998;i+=2){
            bool check=helper(i,mp);
            if(check) v.push_back(i);



        }
        return v;
        
    }
};