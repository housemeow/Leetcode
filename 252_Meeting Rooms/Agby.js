// 2021/06/19

var canAttendMeetings = function(intervals) {
    if (intervals.length < 1) return true
  
    const sorted = intervals.sort((a, b) => {return a[0] - b[0]})
    
    for (let index = 0; index < sorted.length - 1; index++) {
      const [lastEnd, current, nextStart] = [sorted[index - 1]?.[1], sorted[index], sorted[index + 1]?.[0]]

      if (current[0] < lastEnd || current[1] > nextStart) return false
    }
    
    return true
};
