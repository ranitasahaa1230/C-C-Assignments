//merge sort
//very efficient and imp
//1.divide the arr into 2 parts
//2. compares them and merge them
const mergeSort=(arr)=>{//0(log n)//dividing the arr everytime into 2parts
    if(arr.length<=1) return arr;
    let mid=Math.floor((arr.length)/2); //mid is index of middle element in array

    let left=mergeSort(arr.slice(0,mid));
    let right=mergeSort(arr.slice(mid));

    return merge(left,right);
}

function merge(left,right){//0(n)=>compring every single element
    let sortedArr=[];
    while (left.length && right.length ){
        if(left[0]<right[0]){
            sortedArr.push(left.shift());
        }else{
            sortedArr.push(right.shift());
        }
    }

    return [...sortedArr,...left,...right];
}
//TC:0(nlogn)
//SC:0(N)=>created one arr
const arr=[8,3,4,5,7,6,1,2]
// console.log(mergeSort(arr))

const mergeInterval=(intervals)=>{
    let startIndex=0;
    let endIndex=1;

    intervals.sort((a,b)=>a[startIndex]-b[startIndex]);

    let mergeInt=[];
    let mergeStart=intervals[0][startIndex];
    let mergeEnd=intervals[0][endIndex];//[1,3]

    for(let i=1;i<intervals.length;i++){
        const subsequentIntervals=intervals[i] 
// console.log(subsequentIntervals[startIndex])
        if(subsequentIntervals[startIndex]<=mergeEnd){
            mergeEnd=Math.max(mergeEnd,subsequentIntervals[endIndex])
        }else{
            mergeInt.push([mergeStart,mergeEnd]);
            console.log(mergeInt)

            mergeStart=subsequentIntervals[startIndex];
            mergeEnd=subsequentIntervals[endIndex]
        }
    }

    mergeInt.push([mergeStart,mergeEnd]);
    return mergeInt

}

const intervals=[[1,3],[2,6],[8,10],[15,18]]
// console.log(mergeInterval(intervals))

//quicksort
//daytodywork, fast and saves memory

const quicksort=(arr)=>{
    if(arr.length<=1) return arr;

    let pivot=arr[0];//DIVIND ARR INTO 2 PARTS
    let leftArr=[];
    let rightArr=[];

    for(let i=1;i<arr.length;i++){//O(N)
        if(arr[i]<pivot){
            leftArr.push(arr[i]);
        }else{
            rightArr.push(arr[i]);
        }
    }

    return [...quicksort(leftArr),pivot,...quicksort(rightArr)];
}

//TC: BC=>O(NLOGN)
//AC:0(NLOGN)
//WC:0(N^2)
//SC: AC=>0(LOGN)=>since using recursion so uses an auxillary space
//WC=>0(N)

console.log(quicksort(arr))