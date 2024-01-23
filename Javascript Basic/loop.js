const sumOfNum = (n) => {
  //   let sum = 0;
  //   for (let i = 1; i <= n; i++) {
  //     sum += i;
  //   }
  //   return sum;
  return (n * (n + 1)) / 2;
};
// console.log(sumOfNum(5));

const sumOfDigits = (n) => {
  let sum = 0;
  while (n > 0) {
    let rem = n % 10;
    sum += rem;
    n = Math.floor(n / 10);
  }
  return sum;
};
// console.log(sumOfDigits(1287));

const countDogits = (n) => {
  n = Math.abs(n);
  let count = 0,
    temp = n;
  // while(temp>0){
  // temp=Math.floor(temp/10);
  //   count++;
  // }
  do {
    n = Math.floor(n / 10);
    count++;
  } while (n > 0);
  return count;
};
// console.log(countDogits(34252));
// console.log(countDogits(-34252));

const reverseNumber=(n)=>{
    let reverseNum=0,copyNum=n;
   while(copyNum>0){//TLE
    let rem=copyNum%10;
    reverseNum=reverseNum*10+rem;
    copyNum=Math.floor(copyNum/10);
   }
   return reverseNum;
}

const isPalindrome = (n) => {
    let r=reverseNumber(n);
   return r===n;
};
//   console.log(isPalindrome(452));
//   console.log(isPalindrome(121));

var fib = function(n) {
    if(n<2) return n;
    let prev=0,curr=1,next;
    for(let i=2;i<=n;i++){
        next=prev+curr;
        prev=curr;
        curr=next;
    }
    return next;
    
};
//   console.log(fib(3));

var missingNumber = function(nums) {
    let sum=0
    for(let i=0;i<nums.length;i++){
        sum+=nums[i];
    }
    return nums.length*(nums.length+1)/2-sum;
};
  console.log(missingNumber([9,6,4,2,3,5,7,0,1]));
