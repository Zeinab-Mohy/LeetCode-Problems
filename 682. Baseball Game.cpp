class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>v;
        for(int i=0;i<op.size();i++){
            if(op[i]=="C"){
                v.pop_back();
            }else if(op[i]=="D"){
                int vv=v.back();
                v.push_back(vv*2);
            }else if(op[i]=="+"){
                int x=v[v.size()-1];
                int y=v[v.size()-2];
                v.push_back(x+y);
            }else{
                string opp=op[i];
                int o=stoi(opp);
                v.push_back(o);
            }
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};
