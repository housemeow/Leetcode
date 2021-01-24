Runtime: 232 ms, faster than 91.37% of JavaScript online submissions for Design Underground System.
Memory Usage: 54.4 MB, less than 56.12% of JavaScript online submissions for Design Underground System.

var UndergroundSystem = function() {
    this.history = {}
    this.dist = {}
};

/** 
 * @param {number} id 
 * @param {string} stationName 
 * @param {number} t
 * @return {void}
 */
UndergroundSystem.prototype.checkIn = function(id, checkInStation, checkInTime) { 
  this.history[id] = {checkInStation, checkInTime}
};

/** 
 * @param {number} id 
 * @param {string} stationName 
 * @param {number} t
 * @return {void}
 */
UndergroundSystem.prototype.checkOut = function(id, checkOutStation, t) {
  const key = `${this.history[id].checkInStation}-${checkOutStation}`
  const cal = t - this.history[id].checkInTime
  
  if (this.dist[key]) {
    this.dist[key].time += cal
    this.dist[key].count++
  } else {
    this.dist[key] = {time: cal, count: 1 }
  }
  
};

/** 
 * @param {string} startStation 
 * @param {string} endStation
 * @return {number}
 */
UndergroundSystem.prototype.getAverageTime = function(startStation, endStation) {
  const key = `${startStation}-${endStation}`
  
  return this.dist[key].time / this.dist[key].count
};

/** 
 * Your UndergroundSystem object will be instantiated and called as such:
 * var obj = new UndergroundSystem()
 * obj.checkIn(id,stationName,t)
 * obj.checkOut(id,stationName,t)
 * var param_3 = obj.getAverageTime(startStation,endStation)
 */
