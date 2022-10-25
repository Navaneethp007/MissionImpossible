/*The Tribonacci sequence Tn is defined as follows:
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
Given n, return the value of Tn.

 * @param {number} n
 * @return {number}
 */
let tribonacci = function (n) {
  let num1 = 0,
    num2 = 1,
    num3 = 1;
  if (n < 2) {
    return n;
  }
  for (let i = 3; i <= n; i++) {
    let temp = num1 + num2 + num3;
    num1 = num2;
    num2 = num3;
    num3 = temp;
  }
  return num3;
};
