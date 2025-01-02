class Solution {
public:
    vector<int> vowelStrings(vector<string>& w, vector<vector<int>>& q) {
        unordered_set<char> st;
        string v="aeiou";
        vector<int> v1;
        for(int i=0;i<v.size();i++){
            st.insert(v[i]);
        }
        int n=w.size();
        vector<int> pre(w.size());
        for(int i=0;i<n;i++){
            string s=w[i];
            char first=s[0];
            char last=s[s.size()-1];
            if(st.find(first)!=st.end() && st.find(last)!=st.end()){
                pre[i]=1;
            }

        }
        // prefix sum
        for(int i=1;i<pre.size();i++){
            pre[i]=pre[i-1]+pre[i];
        }
        for(int i=0;i<q.size();i++){
            int first=q[i][0];
            int second=q[i][1];
            if(first==0){
                v1.push_back(pre[second]);
            }else v1.push_back(pre[second]-pre[first-1]);
        }
        return v1;
    }
};