class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a[0].size();j++){
                
               // if(i!=j) 
                swap(a[i][j],a[j][i]);
            }
        }
        for(int k=0;k<a.size();k++){
            int i1=0;
            int j1=a.size()-1;
            while(i1<j1){
                swap(a[k][i1],a[k][j1]);
                i1++;
                j1--;
            }
        }
      
    }
};