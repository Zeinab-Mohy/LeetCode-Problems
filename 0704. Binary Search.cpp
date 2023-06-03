class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int x=binary_search(nums.begin(),nums.end(),target);
        // if(x==1){
            int l=0,r=nums.size()-1;
            while(l<=r){
                int mid=(r+l)/2;
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]>target){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
        // }else
            return -1;
    }
};
