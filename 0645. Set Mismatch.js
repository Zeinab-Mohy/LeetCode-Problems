/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function(nums) {
    nums=nums.sort((a,b)=>a-b);
    let rep=1,x=0;

    for(let i=0;i<nums.length;i++){
        if(nums[i]==rep){
            rep++;
        }
    }
    let counter={};
    for(let i=0;i<nums.length;i++){
        if(counter[nums[i]]){
            counter[nums[i]]++;
            if(counter[nums[i]]==2){
                x=nums[i];
                break;
            }
        }else{
            counter[nums[i]]=1;
        }
    }
    return [x,rep];
};
