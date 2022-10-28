/*

A subsequence of a string is a new string that is formed from the original string
by deleting some (can be none) of the characters without disturbing the relative positions
 of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

* @param {string} s
 * @param {string} t
 * @return {boolean}
 */
let isSubsequence = function(s, t) {
  let i = 0,
    j = 0;
  while (i < s.length) {
    if (s[i] === t[j]) {
      i++;
    }
    if (j === t.length) {
      return false;
    }
    j++;
  }
  return true;
};
