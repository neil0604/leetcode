class Solution {
public:
    int titleToNumber(string a) {
        long long sum=0;
        
        for(int i=0;i<a.length();i++){
            sum=sum*26+(int)a[i]-'A'+1;
        }
        return (int)sum;

        
    }
};