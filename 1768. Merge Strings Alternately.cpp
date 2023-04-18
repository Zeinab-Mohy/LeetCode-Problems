class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.length();
        int l2=word2.length();
        int m=min(l1,l2);
        string s="";
        for(int i=0;i<m;i++){
            s+=word1[i];
            s+=word2[i];
        }
        if(l2>l1){
            for(int i=m;i<l2;i++){
                s+=word2[i];
            }
        }else if(l2<l1){
            for(int i=m;i<l1;i++){
                s+=word1[i];
            }
        }
        return s;
    }
};
