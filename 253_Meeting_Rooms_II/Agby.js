//2021/06/28

var minMeetingRooms = function(intervals) {
  const meetingQueus = []
  const startsAt = intervals.sort(([aStart, aEnd], [bStart, bEnd]) => aStart - bStart)
  const endsAt= intervals.concat().sort(([aStart, aEnd], [bStart, bEnd]) => aEnd - bEnd)
  let endIndex = 0
  let meeting = 0
  let maxMeetingCount = 0

  for ([startTime, foo] of startsAt) {
    while (endsAt[endIndex][1] <= startTime) {
      endIndex++
      meeting--
    } 
    
    meeting++
    if(meeting > maxMeetingCount) maxMeetingCount = meeting
  }
  
	return maxMeetingCount
};
