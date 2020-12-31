//暴力解 沒啥好說的

var maxArea = function(map) {
 let res = 0
 for (positionA=0; positionA < map.length - 1; positionA++) {
   for (positionB=positionA+1; positionB < map.length; positionB++ ) {
     const calced = calcMaxAreaOfWater(map, positionA, positionB)
     if (calced > res) {
      res = calced
     }
   }
 }
  return res
};
 
const calcMaxAreaOfWater = (map, positionA, positionB) => {
  const length = Math.abs(positionA - positionB)
  const width = Math.min(map[positionA], map[positionB])
  
  return length * width
}
