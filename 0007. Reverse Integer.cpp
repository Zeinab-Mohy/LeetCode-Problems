class Solution {
public:
    int reverse(int x) {
        string ss="",sss="",as="";
        string s=to_string(x);
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                sss+=s[i];
            }else if(s[i]=='-'){
                ss+=s[i];
            }else{
                sss+=s[i];
            }
        }
        for(int i=sss.length()-1;i>=0;i--){
            as+=sss[i];
        }
        ss+=as;
        long long ans=stol(ss);
        if(ans<2147483648&&ans>-2147483648){
            return ans;
        }else{
            return 0;
        }
    }
};
