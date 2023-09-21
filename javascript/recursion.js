// const fact=(n)=>{
//     if(n<=1) return 1;
//     return n*fact(n-1);
// }
// console.log(fact(8))

// const sumArray=(array)=>{
//     if(array.length===0) return 0;
//     // return array[array.length-1]+sumArray(array.slice(0,array.length-1))

//     let lastEl=array.pop();
//     return lastEl+sumArray(array)

// }
// console.log(sumArray([1,2,3,4,5]))

const sumOfArray=(array,n)=>{
    if(array.length===n) return 0;
    return array[n]+sumOfArray(array,n+1)
}
// console.log(sumOfArray([1,2,3,4,5],0))

const fib=(n)=>{
    if(n===0 || n===1) return n;
    return fib(n-1)+fib(n-2);
}

// console.log(fib(5))

const prod=(arr,n)=>{
    // if(arr.length==0) return 1;
    // return arr[arr.length-1]*prod(arr.slice(arr,arr.length-1))
    if(arr.length===n) return 1;
    return arr[n]*prod(arr,n+1);
}
// console.log(prod([1,2,3,4,5],0))

function sod (num){//12
    if(num<=0) return 0;
    let rem=(num%10);
    return rem+sod(Math.floor(num/10))
}
// console.log(sod(453));

function cod (num){
    let count;
    if(num<1) return 0;
    return count+cod(num%10)
}
// console.log(cod(453));

const nums = [34, 2, 48, 91, 12, 32];
const numss=(arr)=>arr.some((n=>n<100))
// console.log(numss(nums))

var object = {"0":5,"1":7,"2":4,"3":6,"4":7,"5":8,"6":12,"7":11,"8":2}  
var covert  = Object.keys(object).map(function(key)  
 {  
  return Number(key);  
});  
  
// console.log(covert);  

const sampleArray = [  
    ['one', 1],  
    ['two', 2],  
  ];  
    
//   console.log(Object.fromEntries(sampleArray))
let arr=[5,25,9,10,10];

const arrsum=(arr)=>{
    let secondLargest=0,largest=arr[0];
    for(let i=0;i<arr.length;i++){
        if(largest<arr[i]){
            secondLargest=largest;
            largest=arr[i]
        }else if(arr[i]>secondLargest)
        secondLargest=arr[i]
    }
    return secondLargest;
}

console.log(arrsum(arr));