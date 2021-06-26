// 2021/06/26 硬幹

var removeNthFromEnd = function(head, n) {
  const cache = []
  
  while (head) {
    cache.push(head)

    head = head.next
  }
  
  const target = cache.length - n
  
  if (target === 0) {
    return cache[1] || null
  }
  
  cache[target - 1].next = cache[target + 1] || null

  return cache[0]
    
};
