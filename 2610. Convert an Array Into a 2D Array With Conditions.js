/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var findMatrix = function(nums) {
    let ans=[];
    nums=nums.sort((a, b) => a - b); 
    let count = 1,max = 0,el; 
    for (let i = 1; i < nums.length; ++i) { 
        if (nums[i] === nums[i - 1]) { 
            count++; 
        } else { 
            count = 1; 
        } 
        if (count > max) { 
            max = count; 
            el = nums[i]; 
        } 
    }
    if(nums.length==1){
        el=nums[0];
    }
    while(nums.includes(el)){
        let x=[];
        for(let ii=0;ii<nums.length;ii++){
            if(!x.includes(nums[ii])&&nums[ii]!=-1){
                x.push(nums[ii])
                nums[ii]=-1;
            }
        }
        ans.push(x);
    }
    return ans;
};
