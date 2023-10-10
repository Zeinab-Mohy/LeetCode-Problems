/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let ans=[];
    for(let i=0;i<arr.length;){
        f=i;
        t=f+size;
        let x=arr.slice(f,t);
        ans.push(x);
        // console.log(ans);
        i=t;
    }
    return ans;
};
