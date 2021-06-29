// 2021/06/29

var isAnagram = function(s, t) {
  if (s.length !== t.length) return false
  
  const sMap = buildMap(s)
  const tMap = buildMap(t)
 
  for (key of sMap.keys()) {
    if (sMap.get(key) !== tMap.get(key)) return false
  }

  return true
  
  
};

const buildMap = (str) => {
  const hashMap = new Map()
  
  for (val of str) {
    hashMap.set(val, (hashMap.get(val) || 0) + 1)
  }
  
  return hashMap
}
