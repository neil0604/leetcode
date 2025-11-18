class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // (time,(remaining frequency,character))
        queue<pair<int,pair<int,char>>> q;
        vector<string> ans;

        unordered_map<char,int> mp;
        for(auto ele : tasks){
            mp[ele]++;
        }

        priority_queue<pair<int,char>> pq;
        for(auto ele : mp){
            pq.push({ele.second,ele.first});
        }

        // prep the queue
        while(!pq.empty()){
            auto ele=pq.top();
            pq.pop();
            q.push({0,{ele.first,ele.second}});
        }
        int time=0;

        while(!q.empty()){
            auto ele = q.front();
            int present_time=ele.first;
            char ch=ele.second.second;
            int fre=ele.second.first;
            // q.pop();
            if(time < present_time) {
                ans.push_back("NOTHING");
                time++;
                continue;
            }else{
                q.pop();
                ans.push_back(to_string(ch));
                fre--;
                if(fre > 0) {
                   q.push({present_time+n+1,{fre,ch}});
                }
            }
            time++;

        }

     //   priority_queue<int,vector<int> , greater<int>> pq2;
        return ans.size();
    }
};