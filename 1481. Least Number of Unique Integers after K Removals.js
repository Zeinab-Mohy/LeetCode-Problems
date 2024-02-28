/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findLeastNumOfUniqueInts = function(arr, k) {
    let counter={};
    arr.forEach(ele=>{
        if(counter[ele]){
            counter[ele]++;
        }else{
            counter[ele]=1;
        }
    })
    let ans=[];
    ans=Object.values(counter).sort((a,b)=>a-b);
    let c=ans.length;
    ans=ans.sort((a,b)=>a-b);
    for(let i=0;i<ans.length;i++){
        if(k!=0&&ans[i]<=k){
            k-=ans[i];
            c--;
        }else{
            break;
        }
    }
    return c;
};
