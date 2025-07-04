class Solution {
public:
    string longestPalindrome(string s) {

        string str = s;
        int n=s.size();
        string result="";
        if(s.size()==1) return s;
        if(s.size()==2) {
            if(s[0]==s[1]) return s;
            char x = s[0];
            string y ;
            y=y+x;
            return y;
        }

        for(int i=1;i<n;i++){
           bool flag=false;
            cout<<endl<<"i "<<i<<endl;
            int low=i;
            int high = i;
            while(s[low]==s[high]){
                flag=true;
                low--;
                high++;
                

                if(low==-1 || high==n) {
                    low++;
                    high--;
                    break;}

                    if(s[low]!=s[high]){
                    low++;
                    high--;
                    break;
                }

            }
            if(flag)
            {int no = (high)-(low)+1;
            string palindrome = str.substr(low,no);
            int size = palindrome.size();
            if(size > result.size()){
                result=palindrome;
                cout<<result<<" "<<low<<" " <<high;
            }
}

            //for cases like dd(even)
            low=i-1;
            high=i;
            flag=false;
            while(s[low]==s[high]){
                low--;
                high++;
                flag=true;
               
                 if(low==-1 || high==n) {
                    low++;
                    high--;
                    break;}

                 if(s[low]!=s[high]){
                    low++;
                    high--;
                    break;
                }
            }
            if(flag){
           int no = (high)-(low)+1;
          string  palindrome = str.substr(low,no);
             int size = palindrome.size();

              if(size > result.size()){
                result=palindrome;
                cout<<endl<<"2)"<<result<<" "<<low<<" "<<high<<endl;
            }
        }

        }
        return result;

        
    }
};