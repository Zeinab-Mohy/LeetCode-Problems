class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>ss;
        for(int i=0;i<s.size();i++){
            ss.push_back(s[i]);
        }
        s.clear();
        for(int i=ss.size()-1;i>=0;i--){
            s.push_back(ss[i]);
        }
    }
};
