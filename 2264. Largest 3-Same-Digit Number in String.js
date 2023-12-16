/**
 * @param {string} num
 * @return {string}
 */
var largestGoodInteger = function(num) {
    let xx=[];
    for(let i=0;i<num.length;i++){
        let x=num[i];
        let c=0;
        let ans="";
        let ii=i;
        while(x==num[ii]){
            if(c==3){
                break;
            }
            ans+=num[ii];
            ii++;
            c++;
        }
        if(c==3){
            xx.push(+ans);
        }
    }
    if(Math.max.apply(Math,xx)==0){
        return "000";
    }else if(Math.max.apply(Math,xx)=="-Infinity"){
        return "";
    }else{
        return Math.max.apply(Math,xx).toString();
    }
};
