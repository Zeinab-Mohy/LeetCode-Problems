/**
 * @param {number[]} arr
 * @return {boolean}
 */
var uniqueOccurrences = function(arr) {
    let counter={};
    arr.forEach(ele => {
        if (counter[ele]) {
            counter[ele] += 1;
        } else {
            counter[ele] = 1;
        }
    });
    for(let i=0;i<Object.keys(counter).length;i++){
        for(let ii=i+1;ii<Object.keys(counter).length;ii++){
            if(Object.values(counter)[i]==Object.values(counter)[ii]){
                return false;
            }
        }
    }
    return true;
};
