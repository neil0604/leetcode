class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string str="";
        int l1=0,l2=0;
        for(int i=0;i<min(w1.size(),w2.size());i++){
            str.push_back(w1[l1++]);
            str.push_back(w2[l2++]);
            
        }
        if(l1<w1.size()){
            for(int i=l1;i<w1.size();i++){
                str.push_back(w1[l1++]);
            }
        }
        else if(l2<w2.size()){
            for(int i=l2;i<w2.size();i++){
                str.push_back(w2[l2++]);
            }
        }

        return str;
        
    }
};