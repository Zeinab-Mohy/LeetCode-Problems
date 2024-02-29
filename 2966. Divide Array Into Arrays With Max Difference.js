/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[][]}
 */
var divideArray = function(nums, k) {
    nums=nums.sort((a,b)=>a-b);
    let ans=[];

    if(nums.length%3==0){
        let i=0;
        for(;i<nums.length;){
            let c=0;
            let x=[];
            while(i<nums.length&&c!=3){
                x.push(nums[i]);
                i++;
                c++;
            }
            if(x.length!=0){
                let maxx=Math.max.apply(Math,x);
                let minn=Math.min.apply(Math,x);
                let dif=maxx-minn;
                if(dif>k){
                    ans=[];
                    break;
                }else{
                    ans.push(x);
                }
            }
            // console.log(x);
        }
    }
    return ans;
};
