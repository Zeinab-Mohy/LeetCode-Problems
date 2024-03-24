/**
 * @param {character[]} tasks
 * @param {number} n
 * @return {number}
 */
var leastInterval = function(tasks, n) {
    let counter = {};

    tasks.forEach((ele)=>{
        if(counter[ele]){
            counter[ele]++;
        }else{
            counter[ele]=1;
        }
    });

    let keys = Object.keys(counter).length;
    if(n==1&&keys!=1){
        let sum=0;
        for(let i=0;i<Object.values(counter).length;i++){
            sum+=Object.values(counter)[i];
        }
        return sum;
    }else if(n==1&&keys==1){
        let maxx = Math.max.apply(Math,Object.values(counter))
        let nn = maxx-1;
        let ans = nn+(n*nn)+1;
        return ans;
    }

    let maxx = Math.max.apply(Math,Object.values(counter))
    let nn = maxx-1;
    let ans = nn+(n*nn)+1,ans2=0;
    let non=(n*nn);
    let x;
    for(let i=0;i<Object.values(counter).length;i++){
        if(Object.values(counter)[i]==maxx){
            x=i;
            break;
        }
    }
    // console.log(Object.values(counter),x);
    for(let i=0;i<Object.values(counter).length;i++){
        if(i==x){
            continue;
        }else{
            if(Object.values(counter)[i]>=nn){
                if(non==0){
                    ans2+=Object.values(counter)[i];
                }else{
                    ans2+=Object.values(counter)[i]-nn;
                    non-=nn;
                }
            }else{
                if(non==0){
                    ans2+=Object.values(counter)[i];
                }else{
                    non-=Object.values(counter)[i];
                }
            }
        }
    }
    if(non<0){
        return ans+ans2-non;
    }else{
        return ans+ans2;
    }
};
