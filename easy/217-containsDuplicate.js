/**
 * @param {number[]} nums
 * @return {boolean}
 */
const containsDuplicate = (nums) => {
  const unique_nums = [];
  for (const num of nums) {
    for (const unique_num of unique_nums) {
      if (num == unique_num) {
        return true;
      }
    }
    unique_nums.push(num);
  }
  return false;
};
