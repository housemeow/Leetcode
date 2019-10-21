/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    let str = [];
    let zipzag = true;
    for(let i = 0, index = 0; i < s.length; i++){
        if(!str[index]){
            str[index] = s[i]
        }else{
            str[index] = str[index]+s[i]   
        }
        if(zipzag){
            index++;
        }else{
            index--;
        }
        if(index%(numRows-1) === 0) zipzag = !zipzag;
    }
    return str.join("")
};
