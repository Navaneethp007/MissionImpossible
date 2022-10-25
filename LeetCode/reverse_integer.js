/*
Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range
[-231, 231 - 1], then return 0.
 * @param {number} x
 * @return {number}
 */
let reverse = function (x) {
  let neg = false;
  let currnum = 0;
  if (x < 0) {
    neg = true;
  }
  x = Math.abs(x);
  while (x > 0) {
    currnum = currnum * 10 + (x % 10);
    x = Math.floor(x / 10);
  }
  if (currnum > Math.pow(2, 31) - 1 || currnum < Math.pow(-2, 31)) {
    return 0;
  }
  return neg ? currnum * -1 : currnum;
};
