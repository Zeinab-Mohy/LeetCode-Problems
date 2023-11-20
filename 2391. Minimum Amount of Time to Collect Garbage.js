/**
 * @param {string[]} garbage
 * @param {number[]} travel
 * @return {number}
 */
var garbageCollection = function(garbage, travel) {
    let garbType = ["M","P","G"];
    let c=0;

    for(let ii=0;ii<garbType.length;ii++){
        let g = 0;
        let l = 0;
        let x = -1;
        for(let j=0;j<garbage.length;j++){
            if(garbage[j].length>1){
                let gg = garbage[j].split(''); 
                if(gg.includes(garbType[ii])){
                    x = j;
                }
            }else{
                if(garbage[j]==garbType[ii]){
                    x = j;
                }
            }
        }
        // console.log("x",x);
        for(let i=0;i<=x;i++){
            if(garbage[i].length > 1){
                let garb = garbage[i].split('');
                let garbFilter = garb.filter(ele => ele == garbType[ii]);
                g += garbFilter.length;
                // console.log(garbFilter);
            }else{
                if(garbage[i] == garbType[ii]){
                    g++;
                }
            }
        }
        // console.log(g);
        for(let v=0 ;v<x ;v++){
            c+=travel[v];
        }
        c+=g;
    }
    return c;
};
