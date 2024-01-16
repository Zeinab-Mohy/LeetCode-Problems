/**
 * @param {number[][]} matches
 * @return {number[][]}
 */
var findWinners = function(matches) {
    let win=new Set();
    let lose=new Set();
    let morelose=new Set();
    for(let i=0;i<matches.length;i++){
        if(!morelose.has(matches[i][0])&&!lose.has(matches[i][0])){
            win.add(matches[i][0]);
        }
        if(lose.has(matches[i][1])){
            lose.delete(matches[i][1]);
            morelose.add(matches[i][1]);
        }else if(win.has(matches[i][1])){
            win.delete(matches[i][1]);
            lose.add(matches[i][1]);
        }else if(morelose.has(matches[i][1])){
            continue;
        }else{
            lose.add(matches[i][1]);
        }
    }
    win=Array.from(win).sort((a,b)=>a-b);
    lose=Array.from(lose).sort((a,b)=>a-b);
    return [win,lose];
};
