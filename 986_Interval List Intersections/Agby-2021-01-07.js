// 2021/06/21

var intervalIntersection = function(firstList, secondList) {
  let firstIndex = 0
  let secondIndex = 0
  const res = []
  
  while (firstIndex < firstList.length && secondIndex < secondList.length) {
    const currFirst = firstList[firstIndex]
    const currSecond = secondList[secondIndex]    
    const start = currSecond[0] > currFirst[0] ? currSecond[0] : currFirst[0]
    const end = currSecond[1] < currFirst[1] ? currSecond[1] : currFirst[1]
    
    if (start <= end) {
      res.push([start, end])
    }
    
    currSecond[1] < currFirst[1] ? secondIndex ++ : firstIndex ++
  }
  
  return res
};





// 2021/01/17
Runtime: 96 ms, faster than 96.30% of JavaScript online submissions for Interval List Intersections.
Memory Usage: 45.4 MB, less than 59.26% of JavaScript online submissions for Interval List Intersections.

var intervalIntersection = function (A, B) {
  if (A.length < 1 || B.length < 1) return [];

  let posA = 0;
  let posB = 0;
  const res = [];

  while (posA <= A.length - 1 && posB <= B.length - 1) {
    const Ax = A[posA][0];
    const Ay = A[posA][1];
    const Bx = B[posB][0];
    const By = B[posB][1];
    
    if (Ay < Bx) {
      posA++;
    } else if (By < Ax) {
      posB++;
    } else if (Ax <= Bx && Ay >= By) {
      res.push([Bx, By]);
      posB++;
    } else if (Ax > Bx && Ay < By) {
      res.push([Ax, Ay]);
      posA++;
    } else if (Ax <= Bx && Ay < By) {
      res.push([Bx, Ay]);
      posA++;
    } else if (Ax > Bx && Ay >= By) {
      res.push([Ax, By]);
      posB++;
    } else if (Ax === By) {
      res.push([Ax, Ax]);
      posB++;
    } else if (Ay === Bx) {
      res.push([Ay, Ay]);
      posA++;
    }
  }

  return res;
};
