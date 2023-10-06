//linear search=>in one direction
const linear=(arr,target)=>{
    for(let i=0;i<arr.length;i++){
        if(arr[i]===target)
            return i;
    }
    return -1;
}
//TC:0(N)
//sc:0(1)

const globallinear=(arr,target)=>{
    const res=[];
    for(let i=0;i<arr.length;i++){
        if(arr[i]===target)
            res.push(i);
    }
    if(res.length===0) return -1;
    return res;
}
//TC:0(N)
//SC:0(N)

//bINARY search
//it has to be sorted in ascending/descending order
//much more performant than linear search
//write with TC O(log n)=>much more performant than O(n)

const bINARY=(arr,target)=>{
    let start=0;
    let end=arr.length-1;
    while(start<=end){
        let middle=Math.floor((start+end)/2);
        if(target===arr[middle]) return middle;
        else if(arr[middle]<target) {
            start=middle+1;
        }
        else end=middle-1;
    }
    return -1;
}
//TC:0(log n)=>Exponential deduction
//SC=>0(1)
let arr=[4,0,3,0,1,7]
let arr2=[-1,0,3,5,9,12];

// console.log(bINARY(arr2,9));
// console.log(bINARY(arr2,8))

//kth missing positive
var findKthPositive = function(arr, k) {
    let count=0;
    //0=>2<=5;=>1<=2
    //1=>3<=6;=>2<=3
    //2=>4<=7;=>3<=4
    //3=>7<=8;=>4<=5
    //4=>11<=9;=>5<=6
    //5;=>6<=7
    for(let i=0;i<arr.length;i++){
        if(arr[i]<=k+count)
        count++;
    }
    return k+count;
};
//tc:o(n)
let arr3=[2,3,4,7,11];
let arr4=[1,2,3,4]
// console.log(findKthPositive(arr3,5));
// console.log(findKthPositive(arr4,2))

var maximumCount = function(nums) {
    return  Math.max(higherBound(nums),lowerBound(nums))
};

//lb=>2
//low=0,4;high=6,5,5
//mid=>3,5,5
//0>0,1>0,
//7-4=>3
function lowerBound(nums){
    let low=0,high=nums.length-1;
    while(low<high){
        let middle=Math.floor((low+high)/2);
            if(nums[middle]>0) high=middle;
            else low=middle+1
    }
    return nums[nums.length-1]<=0 ? 0 : nums.length-low
}

//hb=>3
//low=>0,2;high=>6,5,2
//mid=>3,2,3
//0<0,-1<0
//-3>=0:3
function higherBound(nums){
    let low=0,high=nums.length-1;
    while(low<high){
        let middle=Math.ceil((low+high)/2);
        if(nums[middle]<0) low=middle;
        else high=middle-1
    }

    return nums[0]>=0 ? 0 : low+1;
}

let arr5=[-2,-1,-1,1,2,3];
let array5=[-3,-2,-1,0,0,1,2]

console.log(lowerBound(array5));
console.log(higherBound(array5))