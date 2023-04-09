class Solution {
public:
    bool isPalindrome(string s) {
        string ss="",sss="";
        for(int i=0;i<s.length();i++){
            if(s[i]>=65&&s[i]<=90){
                ss+=s[i]+32;
                sss+=s[i]+32;
            }else if(s[i]>=97&&s[i]<=122){
                ss+=s[i];
                sss+=s[i];
            }else if(s[i]>=48&&s[i]<=57){
                ss+=s[i];
                sss+=s[i];
            }
        }
        bool ch=0;
        reverse(ss.begin(),ss.end());
        for(int i=0;i<ss.length();i++){
            if(ss[i]!=sss[i]){
                ch=1;
                break;
            }
        }
        if(ch==1){
            return false;
        }else{
            return true;
        }
    }
};
