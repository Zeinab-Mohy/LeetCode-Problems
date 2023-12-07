/**
 * @param {string} num
 * @return {string}
 */
var largestOddNumber = function(num) {
    let ans=[];
    for(let i=num.length-1;i>=0;i--){
        let x = +num[i];
        if(x%2!=0){
            ans.push(num.substring(0,i+1));
        }
    }
    if(ans.length==0){
        return "";
    }else{
        return ans[0];
    }
};
