class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<double>ser;
        vector<double>  spells_copied;
        spells_copied.assign(spells.begin(),spells.end());
        vector<int>return_ans;
        for(int i=0;i<spells_copied.size();i++){
            double serr=ceil(success/spells_copied[i]);
            ser.push_back(serr);//2 7 3
        }
        sort(potions.begin(),potions.end());
        for(int i=0;i<ser.size();i++){
            int ans=lower_bound(potions.begin(), potions.end(), ser[i])
            - potions.begin();
            return_ans.push_back(potions.size()-ans);
        }
        return return_ans;
    }
};
