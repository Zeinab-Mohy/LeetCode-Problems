/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function(hours, target) {
    let c=0;
    for(let i=0;i<hours.length;i++){
        if(hours[i]>=target){
            c++;
        }
    }
    return c;
};
