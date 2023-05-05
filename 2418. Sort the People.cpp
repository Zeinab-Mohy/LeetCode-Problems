class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>v;
        vector<string>ans;
        for(int i=0,ii=0;i<names.size(),ii<heights.size();i++,ii++){
            v.push_back({heights[ii],names[i]});
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
