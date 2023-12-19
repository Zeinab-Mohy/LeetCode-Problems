/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProductDifference = function(nums) {
    nums=nums.sort((a,b)=>b-a);
    let ans=(nums[0]*nums[1])-(nums[nums.length-2]*nums[nums.length-1]);
    return ans;
};
