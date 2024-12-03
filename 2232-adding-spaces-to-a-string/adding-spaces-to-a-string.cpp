class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        stringstream result;
        int a = 0;
        int n = spaces.size();
        
        for (int i = 0; i < s.size(); ++i) {
            // Add space if current index matches a space position
            if (a < n && i == spaces[a]) {
                result << ' '; // Add a space
                a++; // Move to the next space index
            }
            result << s[i]; // Add the current character
        }
        
        return result.str(); // Convert the stringstream to string
    }
};