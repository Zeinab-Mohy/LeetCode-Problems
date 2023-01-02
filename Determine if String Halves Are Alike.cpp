class Solution {
public:
    bool halvesAreAlike(string s) {
        int l=s.length();
        int al=l/2,ca=0,cb=0;
        char a[al],b[al];
        for(int i=0;i<al;i++){
            a[i]=s[i];
        }
        for(int i=al,j=0;i<l;i++,j++){
            b[j]=s[i];
        }
        for(int i=0;i<al;i++){
            if(a[i]=='a'||a[i]== 'e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'||a[i]=='A'||           a[i]=='E'||a[i]=='I'|| a[i]=='O'||a[i]=='U'){
                ca++;
            }
        }
        for(int i=0;i<al;i++){
            if(b[i]=='a'||b[i]== 'e'|| b[i]=='i'|| b[i]=='o'|| b[i]=='u'||b[i]=='A'||           b[i]=='E'||b[i]=='I'|| b[i]=='O'||b[i]=='U'){
                cb++;
            }
        }
        if(ca==cb){
            return true;
        }else{
            return false;
        }
    }
};
