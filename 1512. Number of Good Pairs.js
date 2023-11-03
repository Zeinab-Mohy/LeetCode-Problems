/**
 * @param {number[]} nums
 * @return {number}
 */
var numIdenticalPairs = function(nums) {
    let ans=0;
    for(let i=0;i<nums.length;i++){
        let x=[];
        for(let ii=i+1;ii<nums.length;ii++){
            if(nums[i]==nums[ii]){
                x.push(i);
                x.push(ii);
            }
        }
        ans+=x.length/2;
    }
    return ans;
};
