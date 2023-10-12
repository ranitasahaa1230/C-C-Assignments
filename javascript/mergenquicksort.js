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
console.log(mergeSort(arr))

const mergeInterval=(intervals)=>{
    let startIndex=0;
    let endIndex=1;

    intervals.sort((a,b)=>a[startIndex]-b[startIndex]);

    let mergeInt=[];
    let mergeStart=intervals[0][startIndex];
    let mergeEnd=intervals[0][endIndex];

    for(let i=1;i<intervals.length;i++){
        let 
    }

}

const intervals=[[1,3],[2,6],[8,10],[15,18]]
console.log(mergeInterval(intervals))

