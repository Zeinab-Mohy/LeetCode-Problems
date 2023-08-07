class Solution {
public:
    int titleToNumber(string s) {
        int c=0;
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            int ss=s[i];
            ss-=64;
            if(c==0){
                ans+=ss;
            }else{
                ans+=(ss*pow(26,c));
            }
            c++;
        }
        return ans;
    }
};
