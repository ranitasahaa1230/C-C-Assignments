//Bubble sort

const bubbleSort=(arr)=>{
    for(let i=0;i<arr.length;i++){//0(n)
        for(let j=0;j<arr.length-i-1;j++){//0(n) //0(N/2)=>WHEN elements are randomly distributed
            if(arr[j]>arr[j+1]){
                [arr[j],arr[j+1]]=[arr[j+1],arr[j]];
            }
        }
    }
    return arr;
}
//BCTC:0(N)=>when arr is already sorted
//WCTC:0(N^N)=>0(N^2)=>WHEN Arr is not sorted/reversed
//ACTC=>0(N*(N/2))=>0(N^2)
//SC=>0(1)
// console.log(bubbleSort([29,10,14,37,14]))

//Selection sort
const selectionSort=(arr)=>{
    for(let i=0;i<arr.length-1;i++){//0(n)
        let minIndex=i;
        for(let j=i+1;j<arr.length;j++){//0(N)
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }

        if(minIndex!==i)
        [arr[i],arr[minIndex]]=[arr[minIndex],arr[i]]
    }
       
    return arr;
//TC:0(N^2)
//SC:0(1)
}

// console.log(selectionSort([29,10,14,37,14]))

//INSERTION SORT
const insertionSort=(arr)=>{
    for(let i=1;i<arr.length;i++){//0(n)
        const key=arr[i];
        let j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;
//BCTC:0(N)
//ACTC:0(N^2)
//WCTC:0(N^2)
//SC:0(1)
}

// console.log(insertionSort([29,10,14,37,14,33,8,11]))

const arr=['apple', 'banana', 'mango', 'date' ,'dragon fruit']
// console.log(arr.sort())
const nums=[10,5,18,1,27]
// console.log(nums.sort())//converts to strings and then sort it by taking the first alphabet

const compareFunction = (a, b) => {
    // 1. <0 => a comes first
    // 2. 0  => nothing changes
    // 3. >0 => b comes first
  
    return b - a;
  };
  
//   console.log(nums.sort(compareFunction));
  
  const people = [
    {name: "Piyush", age: 25},
    {name: "Suyash", age: 22},
    {name: "Raj", age: 30},
    {name: "Ishan", age: 27},
  ];
  
  const compareFunctionForObj = (a, b) => {
    // 1. <0 => a comes first
    // 2. 0  => nothing changes
    // 3. >0 => b comes first
  
    return a.age - b.age;
  };
  
//   console.log(people.sort(compareFunctionForObj));

//MERGE SORT:
const  mergeSort = function(arr) {
    if(arr.length<=1) return arr;
    const mid=Math.floor(arr.length/2);

    const left=mergeSort(arr.slice(0,mid))//dividing into=>
    const right=mergeSort(arr.slice(mid))//two part=>0(logn)
    
    return merge(left,right);
};

function merge(left,right){//0(n)
    const sortedArr=[];
    while(left.length && right.length){
        if(left[0]<right[0])
        sortedArr.push(left.shift());
        else{
            sortedArr.push(right.shift())
        }
    }
    return [...sortedArr,...left,...right];
}
//TC:0(nlog n)
//SC::0(n)
//   console.log(mergeSort([8,3,5,4,7,6,1,2]));

//Quick Sort:
function quickSort(arr){
    if(arr.length<=1) return arr;

    const pivot=arr[0];
    const left=[], right=[];
    for(let i=1;i<arr.length;i++){
        if(arr[i]>pivot){
            right.push(arr[i]);
        }else{
            left.push(arr[i]);
        }
    }
    return [...quickSort(left),pivot,...quickSort(right)]
}

console.log(quickSort([8,3,5,4,7,6,1,2]));

