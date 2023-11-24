/**
 * @param {number[]} nums
 * @param {number[]} l
 * @param {number[]} r
 * @return {boolean[]}
 */
var checkArithmeticSubarrays = function(nums, l, r) {
    let aa=[];
    for(let i=0;i<l.length;i++){
        let ans=true;
        let arr=[];
        for(let ii=l[i];ii<=r[i];ii++){
            // console.log(nums[ii]);
            arr.push(nums[ii]);
        }
        arr=arr.sort(function(a,b){return b-a});
        let x=arr[0]-arr[1];
        for(let ii=1;ii<arr.length-1;ii++){
            if(arr[ii]-arr[ii+1]==x){
                continue;
            }else{
                ans=false;
                break;
            }
        }
        aa.push(ans);
    }
    return aa;
};
