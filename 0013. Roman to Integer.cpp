class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                ans+=1;
            }else if(s[i]=='V'){
                if(i>0&&s[i-1]=='I')
                    ans+=5-2;
                else
                    ans+=5;
            }else if(s[i]=='X'){
                if(i>0&&s[i-1]=='I')
                    ans+=10-2;
                else
                ans+=10;
            }else if(s[i]=='L'){
                if(i>0&&s[i-1]=='X')
                   ans+=50-20;
                else
                ans+=50;
            }else if(s[i]=='C'){
                if(i>0&&s[i-1]=='X')
                    ans+=100-20;
                else
                ans+=100;
            }else if(s[i]=='D'){
                if(i>0&&s[i-1]=='C')
                    ans+=500-200;
                else
                ans+=500;
            }else if(s[i]=='M'){
                if(i>0&&s[i-1]=='C')
                    ans+=1000-200;
                    
                else
                ans+=1000;
            }
        }
        return ans;
    }
};
