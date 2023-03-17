class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        vector<int>v;
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            v.push_back(it);
        }
        if(v[st.size()-1]!=nums.size()){
            v.push_back(nums.size());
            ans.push_back(nums.size());
        }
        for(int i=0,ii=1;i<st.size(),ii<=nums.size();){
            if(v[i]!=ii){
                ans.push_back(ii);
                ii++;
            }else{
                i++;
                ii++;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
