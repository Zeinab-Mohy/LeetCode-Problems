/**
 * @param {number[][]} grid
 * @return {number}
 */
var findChampion = function(grid) {
    let ans=[];
    for(let i=0;i<grid.length;i++){
        let sum=0;
        for(let ii=0;ii<grid[i].length;ii++){
            sum+=grid[i][ii];
        }
        ans.push(sum);
    }
    let max=Math.max.apply(Math,ans);
    return ans.indexOf(max);
};
