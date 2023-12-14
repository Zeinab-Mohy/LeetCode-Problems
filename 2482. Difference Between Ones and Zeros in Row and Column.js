/**
 * @param {number[][]} grid
 * @return {number[][]}
 */
var onesMinusZeros = function(grid) {
    let onescol=[],onesraw=[];
    let ans=[];
    let m=grid.length,n=grid[0].length;
    for(let i=0;i<grid.length;i++){
        let one=0;
        for(let ii=0;ii<grid[i].length;ii++){
            if(grid[i][ii]==1){
                one++;
            }
        }
        onesraw.push(one);
    }
    for(let i=0;i<grid[0].length;i++){
        let one=0;
        for(let ii=0;ii<grid.length;ii++){
            if(grid[ii][i]==1){
                one++;
            }
        }
        onescol.push(one);
    }
    for(let i=0;i<onesraw.length;i++){
        let ans1=[];
        for(ii=0;ii<onescol.length;ii++){
            ans1.push(2*onesraw[i]+2*onescol[ii]-n-m);
        }
        ans.push(ans1);
    }
    return ans;
};
