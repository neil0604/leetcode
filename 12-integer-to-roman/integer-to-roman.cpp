class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int a=num;
        int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ch[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
           
            for(int i=0;i<13;i++){
                while(a >= arr[i]){
                
                ans=ans+ch[i];
                 a=a-arr[i];
               
            }
            
            }
        
        return ans;
    }
};