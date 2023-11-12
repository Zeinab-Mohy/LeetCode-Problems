/**
 * @param {number[][]} score
 * @param {number} k
 * @return {number[][]}
 */
var sortTheStudents = function(score, k) {
    let ans = [];
    let out = [];

    for(let i=0;i<score.length;i++){
        ans.push(score[i][k]);
    }
    ans.sort(function(a, b){return b - a});
    let x = 0;
    for(let i=0;i<score.length;){
        if(x<ans.length&&score[i].includes(ans[x])){
            out.push(score[i]);
            x++;
            score.splice(i,1);
            i = 0;
        }else{
            i++;
        }
    }
    return out;
};
