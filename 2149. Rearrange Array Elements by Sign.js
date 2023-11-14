/**
 * @param {number[]} nums
 * @return {number[]}
 */
var rearrangeArray = function(nums) {
    let p = [];
    let n= [];
    for(let i=0;i<nums.length;i++){
        if(nums[i]>0){
            p.push(nums[i]);
        }else{
            n.push(nums[i]);
        }
    }
    let ans = [];
    for(let i=0;i<p.length;i++){
        ans.push(p[i]);
        ans.push(n[i]);
    }
    return ans;
};
