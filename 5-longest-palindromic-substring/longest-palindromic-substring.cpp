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
            cout<<endl<<"i "<<i<<endl;
            int low=i;
            int high = i;
            while(s[low]==s[high]){
                low--;
                high++;

                if(low==-1 || high==n) break;

            }
            int no = (high-1)-(low+1)+1;
            string palindrome = str.substr(low+1,no);
            int size = palindrome.size();
            if(size >= result.size()){
                result=palindrome;
                cout<<result<<" "<<low<<" " <<high;
            }


            //for cases like dd(even)
            low=i-1;
            high=i;
            while(s[low]==s[high]){
                low--;
                high++;

                 if(low==-1 || high==n) break;
            }
            no = (high-1)-(low+1)+1;
            palindrome = str.substr(low+1,no);
             size = palindrome.size();

              if(size >= result.size()){
                result=palindrome;
                cout<<endl<<"2)"<<result<<" "<<low<<" "<<high<<endl;
            }

        }
        return result;

        
    }
};