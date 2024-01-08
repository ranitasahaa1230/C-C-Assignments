const linearSearch = (arr, target) => {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i;
    }
  }
  return -1;
  //TC:0(N)
  //SC:0(1)
};

// console.log(linearSearch([4, 5, 6, 7, 0, 1, 2], 0));
// console.log(linearSearch([4, 5, 6, 7, 0, 1, 2], 3));

const globalLinearSearch = (arr, target) => {
  let res = [];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      res.push(i);
    }
  }
  if (res.length === 0) return -1;
  return res;
  //TC:0(N)
  //SC:0(n)
};

// console.log(globalLinearSearch([4, 0, 6, 7, 0, 1, 2], 0));
// console.log(globalLinearSearch([4, 5, 6, 7, 0, 1, 2], 3));

const binarySearch = (arr, target) => {
  let start = 0;
  let end = arr.length - 1;

  while (start <= end) {
    let middle = Math.floor((start + end) / 2);

    if (arr[middle] === target) {
      return middle;
    } else if (arr[middle] < target) {
      start = middle + 1;
    } else {
      end = middle - 1;
    }
  }
  return -1;
  //TC:0(logn)=>exponential deduction=>breaking into 2 parts
  //SC:0(1)
};

// console.log(binarySearch([-1, 0, 3, 5, 9, 12], 9));
// console.log(binarySearch([-1, 0, 3, 5, 9, 12], 69));

const findKthPositive = (arr, k) => {
    let count=0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]<=k+count)
        count++;
    }
    return k+count;
};

console.log(findKthPositive([2,3,4,7,11], 5));
console.log(findKthPositive([1,2,3,4], 2));