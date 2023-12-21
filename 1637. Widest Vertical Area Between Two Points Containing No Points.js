/**
 * @param {number[][]} points
 * @return {number}
 */
var maxWidthOfVerticalArea = function(points) {
    let ans=[];
    for(let i=0;i<points.length;i++){
        ans.push(points[i][0]);
    }
    ans=ans.sort((a,b)=>b-a);
    let xx=[];
    for(let i=0;i<ans.length-1;i++){
        xx.push(ans[i]-ans[i+1]);
    }
    xx=xx.sort((a,b)=>b-a);
    if(xx.length==0){
        return 0;
    }else{
        return xx[0];
    }
};
