Runtime: 212 ms, faster than 42.96% of JavaScript online submissions for LRU Cache.
Memory Usage: 50.6 MB, less than 95.33% of JavaScript online submissions for LRU Cache.

/**
 * @param {number} capacity
 */
var LRUCache = function(capacity) {
    this.limit = capacity
    this.cache = new Map()
    this.order = []
};

/** 
 * @param {number} key
 * @return {number}
 */
LRUCache.prototype.get = function(key) {
  if (this.cache.has(key)) {
    this.order.splice(this.order.indexOf(key), 1);
    this.order.push(key)

    return this.cache.get(key)
  } 

  return -1
};

/** 
 * @param {number} key 
 * @param {number} value
 * @return {void}
 */
LRUCache.prototype.put = function(key, value) {
  if (this.cache.has(key)) {
    this.cache.set(key, value)
    this.order.splice(this.order.indexOf(key), 1);
  } else if (this.order.length === this.limit){ 
    this.cache.delete(this.order[0])
    this.cache.set(key, value)
    this.order.splice(0, 1);
  } else {
    this.cache.set(key, value)
  }
  
  this.order.push(key)
};

/** 
 * Your LRUCache object will be instantiated and called as such:
 * var obj = new LRUCache(capacity)
 * var param_1 = obj.get(key)
 * obj.put(key,value)
 */
