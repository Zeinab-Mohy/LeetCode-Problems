/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    for(let i=0;i<nums.length;i++){
        nums[i]--;
    }
    nums.sort((a,b)=>b-a);
    return nums[0]*nums[1];
};
