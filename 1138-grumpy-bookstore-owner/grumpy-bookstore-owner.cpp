class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int k=minutes;
        int previousloss=0;
        //finding loss of satisfaction
        for(int i=0;i<k;i++){
            if(grumpy[i]==1)
            previousloss+=customers[i];
        }
        int i=1;
        int j=k;
       int maxloss=previousloss;
       int currentloss=0;
       int n=grumpy.size();
      int start=0;
       int last=k;
       while(j<n){
            currentloss=previousloss;
            if(grumpy[i-1]==1) currentloss-=customers[i-1];
            if(grumpy[j]==1) currentloss+=customers[j];
            if(currentloss>maxloss){
                maxloss=currentloss;
                start=i;
                last=j;
                cout<<start<<" "<<last<<endl;
                            }
            previousloss=currentloss;
            i++;
            j++;
       }
       //filling zeros in grumpy;
       for(int i=start;i<k+start;i++){
            grumpy[i]=0;
       }
       int sum=0;
       for(int i=0;i<n;i++){
           // grumpy[i]=0;
           if(grumpy[i]==0)
           sum+=customers[i];
       }
       return sum;
    }
};