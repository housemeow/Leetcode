// 2021/06/19
var maxProfit = function(prices) {
  let minPrice = 99999
  let res = 0
  
  prices.forEach(prcie => {
    if (prcie < minPrice) minPrice = prcie
    
    if (prcie > minPrice && res < prcie - minPrice) {
      res = prcie - minPrice
    }
  })
    
  return res
}




// 2021/01/06
Runtime: 64 ms, faster than 99.93% of JavaScript online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 39.5 MB, less than 33.13% of JavaScript online submissions for Best Time to Buy and Sell Stock.

var maxProfit = function(prices) {
    let buy = {id:-1, val:0}
    let sell = {id:-1, val:0}
    let res = 0
    
    prices.forEach((price, index) => {
      if (price < buy.val || buy.id === -1  ) {
        buy.id = index
        buy.val = price
        sell.val = price
        sell.id = index
      } else if ((price - buy.val > res)|| (sell.id === -1)) {
        sell.id = index
        sell.val = price
        res = sell.val - buy.val
      }
    })
  
    return res
};
