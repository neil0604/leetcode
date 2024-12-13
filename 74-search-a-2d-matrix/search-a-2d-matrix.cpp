class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int n=m.size();
        int n1=m[0].size();
        int idx=-1;
        for(int i=0;i<n;i++){
            int a=m[i][0];
            int b=m[i][m[0].size()-1];
            
            if(a<=target && b>=target){
                idx=i;
                break;
            }
        }
            if(idx==-1) return false;
            for(int i=0;i<n1;i++){
                if(m[idx][i]==target){
                    return true;
                }
            }
             return false;
        }
       
        
    
    
    
};