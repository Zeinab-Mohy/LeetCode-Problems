class Solution {
public:
    bool validPalindrome(string s) {
        int ii=s.length()-1;
        int c=0;
        for(int i=0;i<s.length();){
            if(i>=ii||c>1){
                break;
            }
            if(ii>=0&&s[i]==s[ii]){
                i++;
                ii--;
            }else if(ii>=0&&s[i]!=s[ii]){
                i++;
                c++;
            }
        }
        ii=s.length()-1;
        int cc=0;
        for(int i=0;i<s.length(),ii>=0;){
            if(i>=ii||cc>1){
                break;
            }
            if(s[i]==s[ii]){
                i++;
                ii--;
            }else if(s[i]!=s[ii]){
                ii--;
                cc++;
            }
        }
        if(c>1&&cc>1){
            return false;
        }else{
            return true;
        }
    }
};
