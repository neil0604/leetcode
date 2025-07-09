class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {

        vector<int> gaps;
       int initial_gap = startTime[0]-0;
        if(initial_gap != 0 ) gaps.push_back(initial_gap);
        int i=1;
        int n = startTime.size();
        while(i<n){
            int gap = startTime[i]-endTime[i-1];
            gaps.push_back(gap);
            i++;

        }
       int last_gap = eventTime - endTime[n-1];
        if(last_gap != 0 ) gaps.push_back(last_gap);

        for(int gap : gaps){
            cout<<gap<<" ";
        }
        i=0;
        int sum=0;
        for(;i<=k;i++){
            if(gaps.size() <= i) continue;
            sum = sum + gaps[i];
        }
        i=k+1;
        int maxi = sum;
        int a=0;
        while(i<gaps.size()){

            sum=sum-gaps[a++]+gaps[i++];
            maxi =max(maxi,sum);

        }

        return maxi;
    }
};