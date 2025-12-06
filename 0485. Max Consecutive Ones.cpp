class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>v={0};
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c=1;
                if(i<nums.size()-1&&nums[i]==nums[i+1]){
                    while(i<nums.size()-1&&nums[i]==nums[i+1]){
                        c++;
                        i++;
                    }
                }
                v.push_back(c);
                c=0;
                
            }else{
                c=0;
                v.push_back(c);
            }
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        int max=*max_element(v.begin(),v.end());
        return max;
    }
};
