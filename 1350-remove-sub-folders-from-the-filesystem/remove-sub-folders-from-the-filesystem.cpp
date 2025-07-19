class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> result;
        sort(folder.begin(),folder.end());
int n = folder.size();
int i=0;
        while(i<n){
            string str=folder[i]+'/';
            while( i+1 != n && folder[i+1].find(str) != string::npos && str[1]==folder[i+1][1]) i++;
            str.pop_back();
            result.push_back(str);
            i++;

        }

        return result;
        
    }
};