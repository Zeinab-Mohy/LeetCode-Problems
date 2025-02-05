class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<char>s1vec;
        vector<char>s2vec;
        for(int i=0;i<s1.length();i++){
            if(s1[i]==s2[i]){
                continue;
            }else{
                s1vec.push_back(s1[i]);
                s2vec.push_back(s2[i]);
            }
        }
        if(s1vec.size()>2||s1vec.size()==1){
            return false;
        }else if(s1vec.size()==0){
            return true;
        }else{
            sort(s1vec.begin(),s1vec.end());
            sort(s2vec.begin(),s2vec.end());
            if(s1vec[0]==s2vec[0] && s1vec[1]==s2vec[1]){
                return true;
            }else{
                return false;
            }
        }
    }
};
