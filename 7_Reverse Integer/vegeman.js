/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    // Number way
    // let negetive = false
    // let result = 0
    // if(x<0){
    //     negetive = true
    //     x *= -1
    // }
    // let length = x.toString().length
    // for(let i = length; i > 0; i--){
    //     result += (x%10)*Math.pow(10, i-1)
    //     x = Math.floor(x/10)
    // }
    // if(negetive) result *= -1
    
    // String way
    let result = x.toString().split("").reverse()
    if(result[result.length-1] == "-") result.splice(0, 0, result.pop())
    result = result.join("")*1
    if(result < Math.pow(-2, 31) || result > Math.pow(2, 31)-1) return 0
    return result
};
