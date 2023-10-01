/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let ss=s.split(" ");
    let ans=[];
    for(let i=0;i<ss.length;i++){
        let a=ss[i].split("");
        a.reverse();
        let aa=a.join("");
        ans.push(aa);
        // console.log(aa);
    }
    return ans.join(" ");
};
