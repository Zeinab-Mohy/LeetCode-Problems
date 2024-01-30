/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function(tokens) {
    for(let i=0;i<tokens.length;i++){
        if(tokens[i]=='+'){
            let ans=(Number(tokens[i-2])+ Number(tokens[i-1])).toString();
            tokens.splice(i-2,3,ans);
            i-=2;
        }else if(tokens[i]=="*"){
            let ans=(Number(tokens[i-2])* Number(tokens[i-1])).toString();
            tokens.splice(i-2,3,ans);
            i-=2;
        }else if(tokens[i]=='/'){
            let ans=(Math.trunc(Number(tokens[i-2])/ Number(tokens[i-1]))).toString();
            if(ans==0){
                tokens.splice(i-2,3,'0');
            }else{
                tokens.splice(i-2,3,ans);
            }
            i-=2;
        }else if(tokens[i]=='-'){
            let ans=(Number(tokens[i-2])- Number(tokens[i-1])).toString();
            tokens.splice(i-2,3,ans);
            i-=2;
        }
    }
    return Number(tokens[0]);
};
