class Solution {
public:
long long mod=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
         int n=arr.size();
       vector<long long> prev(n,1);
      vector<long long>  next(n,1);
     
        //{element,index}

        stack<pair<int,int>> st;
        st.push({arr[n-1],n-1});
        //next greater
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && st.top().first >= arr[i]) st.pop();

            //operations
           if(!st.empty()) next[i]=st.top().second-i;
           else next[i]=n-i;

           //push the current array element
           st.push({arr[i],i});
        }
     
        while (!st.empty())
        st.pop();
        st.push({arr[0],0});
        //prev greater
        for(int i=1;i<n;i++){

            while(!st.empty() && st.top().first > arr[i]) st.pop();

            //operations
           if(!st.empty()) prev[i]=i-st.top().second;
           else prev[i]=i+1;

           //push the current array element
           st.push({arr[i],i});
        }
        long long total=0;
        for(int i=0;i<n;i++){
            total+=(prev[i]*next[i]*arr[i]) % mod;
          //  cout<<prev[i]<<" "<<next[i]<<endl;
        }
        return total % mod;
    }
};