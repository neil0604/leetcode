class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        long long sum=0;
        int smallest=1e9;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j] < 0) cnt++;
                smallest=min(smallest,abs(matrix[i][j]));

            }
        }
        cout<<cnt<<" "<<smallest<<" "<<sum;
        if(cnt%2==1) sum=sum-2*smallest;
        return sum;
    }
};