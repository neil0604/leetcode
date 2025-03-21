class Solution {
public:
    vector<string> findAllRecipes(vector<string>& r, vector<vector<string>>& in, vector<string>& s) {
        
        unordered_set<string> st;
        unordered_set<string> output1;
        vector<string> output;
        bool flag;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }
        int a=100;
        while(a--)
        for(int i=0;i<in.size();i++){
            flag=false;
            for(int j=0;j<in[i].size();j++){
                if(st.find(in[i][j])!=st.end()){
                    flag=true;
                    continue;
                }else {
                    flag=false;
                    break;
                }
            }
                if(flag) {
                st.insert(r[i]);
                output1.insert(r[i]);
                }
            
        }
        for(auto ele: output1){
            output.push_back(ele);
        }
        return output;

    }
};