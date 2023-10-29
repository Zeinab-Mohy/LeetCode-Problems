class Solution {
public:
    string convert(string s, int numRows) {
        vector<pair<int,char>>v;
        for(int i=0;i<s.length();){
            int x=1;
            while(i<s.length()&&x<=numRows){
                v.push_back({x,s[i]});
                i++;
                x++;
            }
            int xx=numRows-1;
            while(i<s.length()&&xx>1){
                v.push_back({xx,s[i]});
                i++;
                xx--;
            }
        }
        string ans="";
        for(int ii=1;ii<=numRows;ii++){
            for(int i=0;i<v.size();i++){
                if(v[i].first==ii){
                    ans+=v[i].second;
                }
            }
        }
        return ans;
    }
};
