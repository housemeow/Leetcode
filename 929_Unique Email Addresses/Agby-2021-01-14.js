Runtime: 80 ms, faster than 99.67% of JavaScript online submissions for Unique Email Addresses.
Memory Usage: 43.2 MB, less than 84.53% of JavaScript online submissions for Unique Email Addresses.

var numUniqueEmails = function(emails) {
  const res = new Map()
  const process = emails.map(email => {
    if(email.length > 0) {
      const em = email.split('@')
      const newem = em[0].split('+')[0].replace(/\./g, "") +"@"+ em[1]
      res.set(newem)
    }
  })
  return res.size
};
