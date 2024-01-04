//Max subarray(Kadane's Algo:)
//1:
function maxSubArray(num) {
  let maxSum = num[0];//5
  let strtIdx=0,endIdx=0;

  for (let i = 0; i < num.length; i++) {//0(N)//0<4
    let currentSum = 0;
    for (let j = i; j < num.length; j++) {//0(N)//j=0;
      currentSum = currentSum + num[j];//0+0=0;1;
      if (maxSum < currentSum) {//5<0
        maxSum = currentSum;//0
        strtIdx=i;
        endIdx=j;
      }
    }
  }
  return {sum:maxSum, subArr:num.slice(strtIdx,endIdx+1)};
}
//TC:0(N^2)
//SC:0(1)

//2:Kadane's Algo:
function maxSubArr(num) {
    let sum=0;
    let max=num[0];

    for(let i=0;i<num.length;i++){//0(N)
        sum+=num[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return max;//0(1)
    //TC:0(N)
    //SC:0(1)
}
// console.log(maxSubArr([5, 4, -1, 7, 8]));
// console.log(maxSubArr([-2, 1, -3, 4, -1, 2, 1, -5, 4]));

const secondLargestNo=(arr)=>{
    //1:
    // const newUniqueElement= Array.from(new Set(arr));//0(N)
    // const sortElements= newUniqueElement.sort((a,b)=>b-a)//0(NLOGN)
    // if(sortElements.length>=2) return sortElements[1];
    // else return -1
    //TC: O(NLOGN)=>Will always take the worst complexity

    //2.
    let largest=Number.NEGATIVE_INFINITY;
    let secondLargest=Number.NEGATIVE_INFINITY;

    for(let i=0;i<arr.length;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }else if(arr[i]!==largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
    //TC:0(N)
    //SC:0(1)
}

// console.log(secondLargestNo([12,35,1,10,34,1]));
// console.log(secondLargestNo([10,5,10]));

const rotateArr=(arr,k)=>{
    //1.
    // let size=arr.length;//7
    // if(k>size){
    //     k=k%size;
    // }

    // const rotateArray=arr.splice(size-k,size)//7-3=>4=>[4,7]=>[5,6,7] //0(N)
    // arr.unshift(...rotateArray);//0(N)

    // return arr;
    //TC:0(N)

    //2.
    let size=arr.length;//7
    if(k>size){
        k=k%size;
    }
}

console.log(rotateArr([1,2,3,4,5,6,7],3));
console.log(rotateArr([-1,-100,3,99],2))