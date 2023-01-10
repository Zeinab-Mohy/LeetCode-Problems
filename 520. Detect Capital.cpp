class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>=65&&word[i]<97){
                c++;
            }
        }
        if(c==word.length()){
            return true;
        }else if(c==1){
            if(word[0]>=65&&word[0]<97){
                return true;
            }else{
                return false;
            }
        }else if(c==0){
            return true;
        }else{
            return false;
        }
    }
};
