class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int , int> map;
        int n=arr.size();
        for(int i=0;i<n;i++){

            map[arr[i]]++;
        }
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(map[arr[i]]);
        }
        return st.size()==map.size();


        
    }
};