class Solution {
public:
  //  bool rec(int i,int j,string &s){
      bool rec(int i, int j, string &s) {
        // Move i forward if it's not an alphanumeric character
        while (i < j && !std::isalnum(s[i])) {
            i++;
        }
        // Move j backward if it's not an alphanumeric character
        while (i < j && !std::isalnum(s[j])) {
            j--;
        }
        // If indices cross, we have checked all characters
        if (i >= j) {
            return true;
        }
        // Compare characters (case insensitive)
        if (tolower(s[i]) != tolower(s[j])) {
            return false;
        }
        // Move towards the center
        return rec(i + 1, j - 1, s);
    }
    bool isPalindrome(string s) {
        int n=s.size();
       return rec(0,n-1,s);
    }
};