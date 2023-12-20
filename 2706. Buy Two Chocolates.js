/**
 * @param {number[]} prices
 * @param {number} money
 * @return {number}
 */
var buyChoco = function(prices, money) {
    prices = prices.sort((a,b)=>a-b);
    if(prices.length>=2){
        if(prices[0]+prices[1]<=money){
            return money-(prices[0]+prices[1]);
        }else{
            return money;
        }
    }else{
        return money;
    }
};
