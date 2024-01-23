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
//   console.log(missingNumber([9,6,4,2,3,5,7,0,1]));

const employees = [
    { name: 'John', age: 32 },
    { name: 'Sarah', age: 28 },
    { name: 'Michael', age: 40 },
];
const employeesName=employees.map((i)=>i.name);
// console.log(employeesName)

const products = [
    { name: 'iPhone', price: 999, inStock: true },
    { name: 'Samsung Galaxy', price: 899, inStock: false },
    { name: 'Google Pixel', price: 799, inStock: true },
];
const inStockProd=products.filter((i)=>i.inStock);
// console.log(inStockProd)

const orders = [
    { product: 'iPhone', price: 999, quantity: 2 },
    { product: 'Samsung Galaxy', price: 899, quantity: 1 },
    { product: 'Google Pixel', price: 799, quantity: 3 },
];
const sum=orders.reduce((acc,cval)=>acc+cval.price*cval.quantity,0);
// console.log(sum)

const words = ['apple', 'banana', 'cherry', 'dragonfruit', 'elderberry'];
const longWord=words.reduce((longestWord,word)=>word.length> longestWord.length ? word : longestWord ,"");
// console.log(longWord.length);
// console.log(longWord);

const numbers = [5, 2, 8, 4, 3];
const largestNumFact=numbers.reduce((great,num)=>num>great ? num : great,0);
console.log(largestNumFact)

const students = [
    { name: 'John', score: 85 },
    { name: 'Sarah', score: 92 },
    { name: 'Michael', score: 88 },
    { name: 'Emma', score: 95 },
    { name: 'Daniel', score: 90 },
];
const filterStu=students.filter((s)=>s.score>90).reduce((acc,cval)=>(acc+cval.score)/2,0);
console.log(filterStu)

