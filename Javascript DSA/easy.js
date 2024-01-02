//Palindrome No:
const isPalindrome=function(x){
    return x<0 ? false : x===+x.toString().split('').reverse().join('');
}
// console.log(isPalindrome(121));//121=>"121"(convert to string)=>split=>['1','2','1']=>reverse; '+' converts string to a number
// console.log(isPalindrome(10))

//Fibonacci no:
const fib=function(x){
    // const arr=[0,1];
    // for(let i=2;i<=x;i++){
    //     arr.push(arr[i-1]+arr[i-2]);
    // }
    // return arr[x];

    if(x<=1) return x;
    return fib(x-1)+fib(x-2);
}
// console.log(fib(2));//0,1,1
// console.log(fib(4));//0,1,1,2,3

//Anagram no:
const anagram = function (s, t) {
//1.   return s.split('').sort().join('') === t.split("").sort().join("");

//2.Fast and optimized:
if(s.length !==t.length) return false;

let obj1={};
let obj2={};

for(let i=0;i<s.length;i++){
    obj1[s[i]]=(obj1[s[i]]|| 0) + 1; //{r:1,a:1,t:1}
    obj2[t[i]]=(obj2[t[i]]|| 0) + 1;
}

    for(const key in obj1){
        if(obj1[key] !== obj2[key]) return false;//{1===1}
    }
    return true;
};
// console.log(anagram("anagram", "nagaram"));
// console.log(anagram("cat", "rat"));

//anagram=> ['a','n','a',''']=>['a','a','a','g']
//nagaram=>['n','a','g','...]=>['a','a',]

//Two Sum:
const twoSum=function(arr,target){
    //Brute force soln:
//    for(let i=0;i<arr.length;i++){
//     for(let j=i+1;j<arr.length;j++){
//         if(arr[i]+arr[j]===target)
//         return [i,j]
//     }
//    }

   //js objects:
   var obj={};
   for(let i=0;i<arr.length;i++){
    var n=arr[i];//current position

    if(obj[target-n] >=0){//9-2, we are checking if 7 is present inside the object or not, if we get it somore than 0
        return [obj[target-n], i];
   }else{
    obj[n]=i;
  }
}
// nums = [2,7,11,15], target = 26
// {
//     "2":0,  // 26 - 2 = 24
//     "7": 1,
//     "11": 2,  // 26-11 = 15
//     "15":     // 26 - 15 = 11 => [obj[11],[15]] => [2, 3]
// }
};
// console.log(twoSum([2,7,11,15],26));
// console.log(twoSum([3,2,4],6));

//Buy and Sell Stocks
const maxProfit=function(arr){
    //1. Brute force:

    // let globalPofit=0;
    // for(let i=0;i<arr.length-1;i++){
    //     for(let j=i+1;j<arr.length;j++){
    //         const currentProfit=arr[j]-arr[i];
    //         if(currentProfit>globalPofit) globalPofit= currentProfit;
    //     }
    // }
    // return globalPofit;

    //2. Greedy Algo:
        let minPrice=arr[0] || 0;
        let profit=0;

        for(let i=1;i<arr.length;i++){
            if(minPrice>arr[i]){
                minPrice=arr[i];
            }

           let currentProfit = arr[i]-minPrice;
           profit= Math.max(profit,currentProfit)
        }
        return profit;

        //[7,1,5,3,6,4]
        //minPrice: 7=>1
        //profit=>0=>5-1=>4=> 6-1 =>5
}
console.log(maxProfit([7,1,5,3,6,4]));
console.log(maxProfit([7,6,4,3,1]))