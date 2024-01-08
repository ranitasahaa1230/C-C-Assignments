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
    //2=>5+0=>3=>6=>4=>7;7=>8;11=>9
    //count=>0=>1=>2;3;
};

// console.log(findKthPositive([2,3,4,7,11], 5));
// console.log(findKthPositive([1,2,3,4], 2));

var maximumCount = function(nums) {
    return Math.max(upperBound(nums),lowerBound(nums));
};

function upperBound(nums){
    let low=0;
    let high=nums.length-1;

    while(low<high){
        let mid=Math.ceil((low+high)/2);

        if(nums[mid]<0) low=mid;
        else high=mid-1;
    }
    return nums[0] >= 0 ? 0 : low+1;
}

function lowerBound(nums){
    let low=0;
    let high=nums.length-1;

    while(low<high){
        let mid=Math.floor((low+high)/2);

        if(nums[mid]>0) high=mid;
        else low=mid+1;
    }
    return nums[nums.length-1] <= 0 ? 0 : nums.length-low;
}

console.log(maximumCount( [-2,-1,-1,1,2,3]));
console.log(maximumCount([-3,-2,-1,0,0,1,2]));