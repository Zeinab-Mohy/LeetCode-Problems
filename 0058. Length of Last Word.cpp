class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length(),x=0,c=0;
        for(int i=n-2;i>=0;i--){
            if(s[i]==' '&&s[i+1]!=' '){
                x=i;
                break;
            }
        }
        for(int i=x;i<n;i++){
            if(s[i]!=' '){
                c++;
            }
        }
        return c;
    }
};
