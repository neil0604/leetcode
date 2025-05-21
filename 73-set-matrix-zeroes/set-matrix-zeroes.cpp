class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int row=matrix.size();
        int col=matrix[0].size();

        queue<pair<int,int>> q;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){

            int row0=q.front().first;
            int col0=q.front().second;
            q.pop();
            for(int ncol=0;ncol<col;ncol++){
                matrix[row0][ncol]=0;
            }
            for(int nrow=0;nrow<row;nrow++){
                matrix[nrow][col0]=0;
            }

        }

       // return matrix;
        
    }
};