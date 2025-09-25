class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        string res="",ans="";
        int res2=0;
        if(tokens.size()==1){
            return stoi(tokens[0]);
        }

        for(auto token : tokens){
            if(token=="+"|| token=="-" || token=="*" || token=="/"){
                    string first=st.top();
                    int fir=stoi(first);
                    st.pop();
                    string second=st.top();
                    int sec=stoi(second);
                    if(token=="+" ) res2=sec+fir;
                    else if(token=="-") res2=sec-fir;
                    else if(token=="/") res2=sec/fir;
                    else res2=sec*fir;
                   // cout<<res2<<" ";
                    st.pop();

                    string ans=to_string(res2);
                    cout<<ans<<" ";
                    st.push(ans);
                    res=res+ans;
            }
            else{
                st.push(token);
            }
        }
        return res2;
    }
};