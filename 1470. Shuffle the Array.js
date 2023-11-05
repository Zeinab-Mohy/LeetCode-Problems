/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
var shuffle = function(nums, n) {
    let ans=[];
    for(let i=0,ii=n;i<n,ii<2*n;i++,ii++){
        ans.push(nums[i]);
        ans.push(nums[ii]);
    }
    return ans;
};
