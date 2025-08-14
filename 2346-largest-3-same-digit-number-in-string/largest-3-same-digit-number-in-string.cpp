class Solution {
public:
    string largestGoodInteger(string num) {

        //sliding window

        if(num.size()<2) return "";

      int maxi=INT_MIN;
       int u=2;
       int idx=-1;
       
       cout<<num.size();
        while(u<num.size()){
            unordered_set<char> st;
            string str="";
            str =str + num[u-2]+num[u-1]+num[u];
            st.insert(num[u-2]);
            st.insert(num[u-1]);
            st.insert(num[u]);
            int x = stoi(str);
          //  cout<<x<<" ";
            if(x > maxi && st.size()==1){
                idx=u-2;
                maxi=x;
            }


            u++;
        }
        return idx != -1 ? num.substr(idx,3) : "";
    }
};