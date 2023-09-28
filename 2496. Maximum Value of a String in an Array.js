/**
 * @param {string[]} strs
 * @return {number}
 */
var maximumValue = function(strs) {
    let arr=[];
    for(let i=0;i<strs.length;i++){
        if(Number.isInteger(Number(strs[i]))){
            arr.push(Number(strs[i]));
        }else{
            arr.push(strs[i].length);
        }
    }
    return Math.max.apply(Math, arr);
};
