class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string ss="";
        bool ch=0;
        for(int i=s.length()-1;i>=0;i--){
            ss+=s[i];
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==ss[i]){
                ch=0;
            }else{
                ch=1;
                break;
            }
        }
        if(ch==0){
            return true;
        }else{
            return false;
        }
    }
};
