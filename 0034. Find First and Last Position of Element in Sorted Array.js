/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function(nums, target) {
    let v=[];
    v.push(nums.indexOf(target));
    v.push(nums.lastIndexOf(target));
    return v;
};
