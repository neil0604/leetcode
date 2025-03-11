class Solution {
public:
    int minimumRecolors(string b, int k) {
        
int cnt=0;
int i=0,j=k-1;
for(;i<=j;i++){
    if(b[i]=='W') {cout<<"hrre";
    cnt++;}
}
i=0;
int maxi=cnt;
            while(j<b.size()-1){

                if(b[i]=='W') cnt--;
                j++;
                i++;
                if(b[j]=='W') cnt++;
                cout<<cnt<<" ";
                maxi=min(maxi,cnt);

            }

return maxi;
    }
};