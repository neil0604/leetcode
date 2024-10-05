class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        
        int N=0;
        vector<int> pre(n+1);
        vector<int> suf(n+1);

        int Y=0;
        int min1=INT_MAX;
        for(int i=0;i<n+1;i++){
            pre[i]=N;
            if(customers[i]=='N'){
                N++;
            }
            //for(int i=n-1;i>=0;i--){

                if(customers[n-i]=='Y'){
                    Y++;
                }
                suf[n-i]=Y;
            }
            //ans 
            for(int i=0;i<n+1;i++){

                pre[i]=pre[i]+suf[i];
                min1=min(min1,pre[i]);
            }
            
            for(int i=0;i<n+1;i++){
                if(pre[i]==min1){
                    return i;
                     break;
                }
            }
            return 0;
        }
        
    
};