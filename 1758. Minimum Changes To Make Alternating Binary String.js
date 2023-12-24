/**
 * @param {string} s
 * @return {number}
 */
var minOperations = function(s) {
    let c=0,cc=0;
    for(let i=0;i<s.length;i++){
        if(i%2==0){
            if(s[i]=='1'){
                continue;
            }else{
                c++;
            }
        }else{
            if(s[i]=='0'){
                continue;
            }else{
                c++;
            }
        }
    }
    for(let i=0;i<s.length;i++){
        if(i%2==0){
            if(s[i]=='0'){
                continue;
            }else{
                cc++;
            }
        }else{
            if(s[i]=='1'){
                continue;
            }else{
                cc++;
            }
        }
    }
    return Math.min.apply(Math,[c,cc]);
};
