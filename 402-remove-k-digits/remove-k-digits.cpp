class Solution {
public:
    string removeKdigits(string num, int k) {
        // stack monotonic(bigger to smaller)

        stack<char> st;

    int i=0,n=num.size();

        while(i<n){
            while(!st.empty() && st.top()> num[i] && k>0){
                st.pop();
                    k--;
            }
            st.push(num[i]);
            
            i++;
        }
         // --- THIS IS THE MISSING PIECE ---
        // For cases like "12345", k=2
        // We need to remove the largest digits from the end.
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string res="";
      //  cout<<st.size();
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
         int j=0;
        while(res[j]=='0') j++;
        res=res.substr(j);
        if(res=="") return "0";
        return res;

    }
};