/**
 * @param {number} x
 * @return {number}
 */
 var reverse = function(x) {
  let neg = false;
  let currnum = 0;
  if(x<0){
      neg = true;
  }
      x=Math.abs(x)
      while(x>0){
          currnum = currnum * 10 + x % 10;
          x = Math.floor(x/10)
      
      }
      if(currnum >Math.pow(2,31) - 1 || currnum < Math.pow(-2,31)){
          return 0
      }
      return neg ? currnum * -1:currnum;
  
};