/**
 * @param {number[]} arr
 * @return {number}
 */
var findSpecialInteger = function(arr) {
    let x = arr.length/4;
    let c=1;
    let ans;
    if(arr.length==1){
        return arr[0];
    }else{
        for(let i=0;i<arr.length-1;i++){
            if(arr[i]==arr[i+1]){
                c++;  
            }
            else if(arr[i]!=arr[i+1]){
                c=1;
            }
            if(c>x){
                ans=arr[i];
                break;
            }
        }
        return ans;
    }
};
