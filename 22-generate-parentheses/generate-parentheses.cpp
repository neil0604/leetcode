class Solution {
private:
    void f(int no_opening,int no_closing,vector<string> &result,string ans,int n){

       if(2*n==(no_opening + no_closing) && no_opening==no_closing){
        result.push_back(ans);
        return;
       }
       if(2*n==(no_opening + no_closing)){
        return;
       }

       f(no_opening+1,no_closing,result,ans+"(",n);
       if(no_opening > no_closing) f(no_opening,no_closing+1,result,ans+")",n);

    }
public:
    vector<string> generateParenthesis(int n) {

        vector<string> result;

        f(0,0,result,"",n);

        return result;
        
    }
};