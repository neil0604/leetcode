class Solution {
private:
    void pse(vector<int> arr,vector<int>& res){
        stack<pair<int,int>> st;
        st.push({arr[0],0});
        res[0]=-1;
        int i=1;
        int n=arr.size();
        while(i<n){
            while(st.size()!=0 && st.top().first >= arr[i]){
                st.pop();
            }
            if(!st.empty()) res[i]=st.top().second;
            else res[i]=-1;
            st.push({arr[i],i});
            i++;

        }
       
    }
        void nse(vector<int> arr,vector<int> &res){
        stack<pair<int,int>> st;
        int n=arr.size();
        st.push({arr[n-1],n-1});
        res[n-1]=-1;
        int i=n-2;
        
        while(i>=0){
            while(st.size()!=0 && st.top().first > arr[i]){
                st.pop();
            }
            if(!st.empty()) res[i]=st.top().second;
            else res[i]=-1;
            st.push({arr[i],i});
            i--;

        }
        
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        //PREVIOUS-smaller
        vector<int> res(n);
        vector<int> res1(n);

        pse(arr,res);
        nse(arr,res1);
        
int i=0;
int ans=0;
        while(i<n){
            int pse =0;
            int nse =0;
            if(res[i]==-1) pse=i+1;
            else pse = i-res[i];

            if(res1[i]==-1) nse=n-i;
            else nse = res1[i]-i;

            
ans = (ans + (1LL * pse % 1000000007 * nse % 1000000007 % 1000000007 * arr[i] % 1000000007) % 1000000007) % 1000000007;
            
            i++;
        }

        return ans;
    }
};