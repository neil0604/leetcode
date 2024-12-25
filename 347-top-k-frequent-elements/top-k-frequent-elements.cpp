class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v(k);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int v1=mp.size();
        for(int i=0;i<v1;i++){
            int fre=0;
            int key;
            int mx=INT_MIN;
            cout<<"i  "<<i<<endl;
            for(auto ele1 : mp){
             fre=ele1.second;
            if(mx<fre){
                 key=ele1.first;
                 cout<<key<<endl;
                 mx=fre;
                
            }
            }
             mp[key]=0;
            if(k>0) v[--k]=key;


            }
            return v;

        }

        
    
};