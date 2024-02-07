/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    let counter={};

    for(let i=0;i<s.length;i++){
        if(counter[s[i]]){
            counter[s[i]]++;
        }else{
            counter[s[i]]=1;
        }
    }
    let ans=[];
    let counterSort = Object.entries(counter).sort(([, a], [, b]) => b - a)
    for(let i=0;i<counterSort.length;i++){
        let num = new Array(counterSort[i][1]).fill(counterSort[i][0]);
        ans.push(num.join(''))
    }
    return ans.join('');
};
