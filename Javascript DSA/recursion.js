function multiply(arr){
    if(arr.length<=0) return 1;
    return arr[arr.length-1]* multiply(arr.slice(0,arr.length-1));//slice and splice both works
}

// console.log(multiply([1,2,3,4]));

function factorial(n){
    if(n===0) return 1;
    return n*factorial(n-1);
}
// console.log(factorial(5));

function rangeofN(startNum, endNum){
    if(endNum<startNum) return [];
    else{
        const num=rangeofN(startNum,endNum-1);
        num.push(endNum);
        return num;
    }
}
// console.log(rangeofN(1,5));

function Palindrome(num){
   let strNum=num.toString();
   if(strNum.length<=1) return true;
   if(strNum[0]!==strNum[strNum.length-1]) return false
   else{
     return Palindrome(strNum.slice(1,strNum.length-1));
   }
}
console.log(Palindrome(121));
console.log(Palindrome(10));

function Fibonacci(num){
    const arr=[0,1];
    for(let i=2;i<=num;i++){
        arr.push(arr[i-1]+arr[i-2]);
    }
    return arr[num];

//    if(num<=1) return num;
//     return Fibonacci(num-1)+Fibonacci(num-2);
}
// console.log(Fibonacci(3));
// console.log(Fibonacci(5));

function reverseStr(str){
    // return str.split('').reverse().join('');
    if(str==="") return "";
    return reverseStr(str.substr(1))+str.charAt(0);
}
// console.log(reverseStr("hello"));

//backtracking algorithm
function subsets(nums){
   let result=[];
   let temp=[];

   function recursiveSubsets(nums,i){
    if(i===nums.length){
        return result.push([...temp]);
    }

    temp.push(nums[i]);
    recursiveSubsets(nums,i+1);
    temp.pop();
    recursiveSubsets(nums,i+1);
   };
   recursiveSubsets(nums,0);
   return result;
}
console.log(subsets([1,2,3]));
console.log(subsets([1]));