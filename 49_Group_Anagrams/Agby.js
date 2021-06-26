// 2021/06/26
var groupAnagrams = function(strs) {
    const record = new Map()
    
    for (str of strs) {
      const sortedStr = [...str].sort().join()
      
      if (record.has(sortedStr)) {
        record.get(sortedStr).push(str)
      } else {
        record.set(sortedStr, [str])
      }
    }

    return [...record.values()]
};
