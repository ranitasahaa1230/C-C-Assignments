const factorial=(n)=>{
    if(n===0) return 1;
    return n*factorial(n-1);
}
//TC:0(N)
//SC:0(N)
// console.log(factorial(8));

const sumArray=(arr)=>{
    if(arr.length===0) return 0;
    // return arr[arr.length-1]+sumArray(arr.slice(0,arr.length-1));

    const lastEl=arr.pop();
    return lastEl+sumArray(arr);
}
// console.log(sumArray([1,2,3,4,5]));

const sumArraysN=(arr,n)=>{
    if(n===0) return 0;

    return arr[n-1]+sumArraysN(arr,n-1);
}
// console.log(sumArraysN([1,2,3,4,5],5));

const fibo=(n)=>{
    if(n===0 || n===1) return n;
    return fibo(n-1)+fibo(n-2);
}
// console.log(fibo(5));

const prodN=(arr,n)=>{
    if(n===0) return 1;
    return arr[n-1]*prodN(arr,n-1);
}
// console.log(prodN([1,2,3,4,5],5));
