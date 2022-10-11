
 var isPalindrome = function(x) {
   
  let str = x.toString()
  let rev = str.split("").reverse().join("")
  if(str === rev){
      return true
  }
    
  return false
  
};