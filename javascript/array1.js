// const secondLargest=(arr)=>{//optimsied
//     let secondLargest=0,largest=arr[0];
//     for(let i=0;i<arr.length-1;i++){
//         if(largest<arr[i]){
//             secondLargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]>secondLargest){
//             secondLargest=arr[i];
//         }
//     }
//     return secondLargest;
// }
//TC:0(n)
//sc:0(1)=>bcoz jusr calculating one value(memory size)

// const secondLargest=(arr)=>{
//     const uniqueEl=new Set(arr);
//     const covertArr=Array.from(uniqueEl);//o(n)
//     const sortArr=covertArr.sort((a,b)=>b-a);//o(n log n)

//     if(sortArr.length>=2) return sortArr[1];
//     return -1
// }

//TC:o(nlogn)

// let array=[12,34,35,1,2];
// let array2=[5,10,5]
// console.log(secondLargest(array2))


// const rotateArr=(arr,k)=>{
//     let size=arr.length
//     if(k>size)
//      k=k%size;

//      const rotateArr=arr.splice(size-k,size)//4,7//O(N)
//     arr.unshift(...rotateArr);//0(N)
//      return arr;
// }
//TC:O(N)//=>O(N)+0(N)

function rotateArr(arr,k){
    reverse(arr,0,arr.length-1);//O(N)
    reverse(arr,0,k-1);//O(K)
    reverse(arr,k,arr.length-1);//0(N-K)
    return arr;
}

function reverse(arr,left,right){
    while(left<right){
        const temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right--;
    }
}

//[1,2,3,4,5,7,8]=>[8,7,5,4,3,2,1]=>[5,7,8,4,3,2,1]=>[5,7,8,1,2,3,4]

//tc:o(n)
//SC:0(1)//NO NEW ARR Created

// let arr=[1,2,3,4,5,7,8]
// let arr2=[-100,-1,3,99]
// console.log(rotateArr(arr2,2));


// const removeDuplicated=(arr)=>{
//     for(let i=0;i<arr.length-1;i++){//o(n)
//         if(arr[i]===arr[i+1]){
//             arr.splice(i+1,1);//o(1)
//             i--;
//         }
//     }
//     return arr.length;
// }

//tc:0(n)
//sc:0(1)

//two pointer approach
// const removeDuplicated=(arr)=>{
//     if(arr.length===0) return 0;
//     let i=0;

//     for(let j=1;j<arr.length;j++){//o(n)
//         if(arr[i]!==arr[j]){
//             i++;
//             arr[i]=arr[j];
//         }
//     }
//     return i+1;
// }

// //tc:0(n)
// //sc:0(1)
// let arr=[1,1,2];
// let arr2=[0,0,1,1,2,2,3,3,4,5,5];
// console.log(removeDuplicated(arr))


//create subarray
// const maxSubArr=(nums)=>{
//     let maxSum=nums[0];
//     let startIdx=0,endIdx=0;

//     for(let i=0;i<nums.length;i++){//o(n)
//         let currenTSum=0;
//         for(let j=i;j<nums.length;j++){//n,n-1,n-2
//             currenTSum=currenTSum+nums[j];
//             if(currenTSum>maxSum){
//                 maxSum=currenTSum;
//                 startIdx=i;
//                 endIdx=j;
//             }
//         }
//     }
//     return {sum:maxSum, subArr:nums.slice(startIdx,endIdx+1)};
// }

//TC:0(N*N)=>O(N*2)
//SC:O(1)

//create subarray using kadane's algo
const maxSubArr=(arr)=>{
    let sum=0,max=arr[0];
    for(let i=0;i<arr.length;i++){
        sum+=arr[i];
        if(sum>max){
            max=sum;
        }else if(sum<0){
            sum=0;
        }
    }
    return max;
}

//TC:0(N)
//SC:0(1)

let arr=[-2,1,-3,4,-1,2,1,-5,4];
let arr2=[5,4,-1,7,8];
// console.log(maxSubArr(arr2))


function multiplay(arr){
    if(arr.length<=0) return 1;
    // return arr[arr.length-1]*multiplay(arr.slice(0,arr.length-1))
    return arr[0]*multiplay(arr.slice(1,arr.length+1))
}

// console.log(multiplay([1,2,3,4]));

function factorial(n){
    if(n<=1) return 1;
    return n*factorial(n-1);
}

// console.log(factorial(5));

function rangeNos(start,end){
    if(end<start) return [];
    else{
        const nos= rangeNos(start,end-1);
        nos.push(end);
        return nos;
    }
}
// console.log(rangeNos(1,5));


function Palin(isNo){
    if(isNo<=0) return false;
    else{

    } 
}
// console.log(Palin(121));

// function Fibonacci(n){
// if(n<=1) return n;
// return Fibonacci(n-1)+Fibonacci(n-2);
// }

function Fibonacci(n){
    // let n1=0,n2=1;
    // let nextTerm;
    // for(let i=2;i<=n;i++){
    //     nextTerm=n1+n2;
    //     n1=n2
    //     n2=nextTerm;
    // }
    // return nextTerm;

    let arr=[0,1];
    for(let i=2;i<=n;i++){
        arr.push(arr[i-2]+arr[i-1])
    }
    return arr[n]
}

// console.log(Fibonacci(3));

function reverStr(str){
    // const str1=str.split('').reverse().join('');
    // return str1

    // for(let i=str.length;i>=0;i--){
    //     console.log(str[i]);
    // }
    if(str==="") return "";
    return reverStr(str.substring(1))+str.charAt(0);
}

// console.log(reverStr("hello"));

//backtracking algo using recursion=>subsets

function subsets(num){
    let result=[];
    let temp=[];

    function recursiveSubset(num,i){
        if(i===num.length)
            return result.push([...temp]);

        temp.push(num[i]);
        recursiveSubset(num,i+1);
        temp.pop();
        recursiveSubset(num,i+1)
    }
        
    recursiveSubset(num,0)
    return result;
}

const arr4=[1,2,3]
const arr3=[0]
// console.log(subsets(arr3));

function Natural(n){
    // let sum=0;
    // for(let i=0;i<=n;i++)
    // sum+=i;
    // return sum;

    if(n<=0) return 0;
    return n+Natural(n-1);
}

// console.log(Natural(5))

function SOD(num){
    let temp=num,sum=0;
    while(temp!=0){
        let rem=temp%10
        sum=sum+rem;
        temp=Math.floor(temp/10);
    }
    return sum;
}
// console.log(SOD(1287))

function COD(num){
    num=Math.abs(num)
    let count=0;
    do {
        num=Math.floor(num/10);
        count++;
    } while (num>0);
    // while(num!==0){
    //     num=Math.floor(num/10);
    //     count++;
    // }
    return count;
}
// console.log(COD(-3457))

function Palin(num){
    let temp=num;
    let rev=0;
        while(num!==0){
            let rem=num%10;//2
            rev=rev*10+rem;//32
            num=Math.floor(num/10);//12//1
        }
        if(rev===temp) return true;
    return false;
}

// console.log(Palin(12));

function misiingNo(nums){
    let sum=0;
    for(let i=0;i<nums.length;i++ ){
        sum+=nums[i]
    }
    return nums.length*(nums.length+1)/2-sum
}

console.log(misiingNo([3,0]))