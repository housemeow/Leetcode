/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function(str) {
    str = str.split(" ").find(e=> e != "")
    if(!str) return 0
    if(str.match(/^[+-]\d/) || str.match(/^\d/)){
        str = (str.match(/^[+-]\d*/) || str.match(/^\d*/))[0]*1
    }else{
        return 0
    }
    if(str > Math.pow(2, 31)-1) {
        return Math.pow(2, 31) -1
    }else if(str < Math.pow(-2, 31)){
        return Math.pow(-2, 31)
    }else{
        return str
    }
};
