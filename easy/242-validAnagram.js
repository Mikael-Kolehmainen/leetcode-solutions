/**
 * @param {string} s
 * @param {string} t
 * @returns {boolean}
 */
const isAnagram = (s, t) => {
  let sLowerCase = s.toLowerCase();
  let tLowerCase = t.toLowerCase();

  if (sLowerCase.length != tLowerCase.length) {
    return false;
  }

  let commonCharfound;
  for (let i = 0; i < sLowerCase.length; i++) {
    commonCharfound = false;
    for (let j = 0; j < tLowerCase.length; j++) {
      if (sLowerCase[i] == tLowerCase[j]) {
        commonCharfound = true;
        sLowerCase = sLowerCase.slice(0, i) + sLowerCase.slice(i + 1);
        tLowerCase = tLowerCase.slice(0, j) + tLowerCase.slice(j + 1);
        i = -1;
        break;
      }
    }
    if (!commonCharfound) {
      return false;
    }
  }
  return true;
};
