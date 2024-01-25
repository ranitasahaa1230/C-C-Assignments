//Linear Search
const linearSearch=(arr,target)=>{
    for(let i=0;i<arr.length;i++){
        if(arr[i]===target) return i;
    }
    return -1;
}
// console.log(linearSearch([1,2,6,9,0,-5],8))

const binarySearch=(arr,target)=>{
    let start=0,end=arr.length-1;
    while(start<=end){
        let mid=Math.floor((start+end)/2);

        if(arr[mid]===target) return mid;
        else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
console.log(binarySearch([1,2,6,9,0,-5],8))