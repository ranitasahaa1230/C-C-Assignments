let arr=[5,25,9,10,10];
// let min=arr[0], max=arr[0];
// for(let i=0;i<arr.length;i++){
//     if(min>arr[i]) min=arr[i];
//     if(max<arr[i]) max=arr[i];
// }
// console.log(max-min);

// let findEl=10;
// let index=-1;
// for(let i=0;i<arr.length;i++){
//     if(arr[i]===findEl){
//         index=i;
//         break;
//     }
// }
// console.log(index);

//rsc

// var isPalindrome = function(x) {
//     if(x < 0) return false;
//     return x === +x.toString().split("").reverse().join("");
// };

// console.log(isPalindrome(121));
// console.log(isPalindrome(10));

// const isFibo=(num)=>{
//     let arr=[0,1];
//     for(let i=2;i<=num;i++){
//         arr.push(arr[i-1]+arr[i-2]);
//     }
//     return arr[num];

// }

// console.log(isFibo(3))

// const isFibo=(num)=>{
//     if(num<=1) return num;
//     return isFibo(num-1)+isFibo(num-2);
// }

// console.log(isFibo(3))

// const isAnagram=(str,rev)=>{
//     let string=str.split("").sort().join("");
//     let revStr=rev.split("").sort().join("");
//     return (string===revStr) 
// }

// const isAnagram=(str,rev)=>{
//     if(str.length !==rev.length) return false;

//     let obj1={};
//     let obj2={};
//     for(let i=0;i<str.length;i++){
//         obj1[str[i]]=(obj1[str[i]] || 0) +1;//{a:3,n:1}
//         obj2[rev[i]]=(obj2[rev[i]] || 0) +1;
//     }

//     for(const key in obj1){
//         if(obj1[key] !== obj2[key]) return false;
//     }
//     return true;
// }

// console.log(isAnagram("anagram","nagaram"));
// console.log(isAnagram("rat","car"));


// const twoSum=(nums,target)=>{
//     for(let i=0;i<nums.length;i++){
//         for(let j=i+1;j<=nums.length;j++){
//             let sum=nums[i]+nums[j];
//             if(sum=== target) return [i,j];
//         }
//     }
// }

const twoSum=(nums,target)=>{
    var obj={};
    for(let i=0;i<nums.length;i++){
        let number=nums[i];
        
        if(obj[target-number]>=0){
            return [obj[target-number],i];
        }else{
          obj[number]=i;
        }
    }
}

let nums=[2,7,11,15]
//let nums=[3,2,4]
//console.log(twoSum(nums,26))

// function maxProfit(arr){
//     let globalProfit=0;
//     for(let i=0;i<arr.length-1;i++){
//         for(let j=i+1;j<arr.length;j++){
//             const currentProfit=arr[j]-arr[i];
//             if(currentProfit>globalProfit) globalProfit=currentProfit;
//         }
//     }
//     return globalProfit;
// }

//greedy algo
// function maxProfit(arr){
//     let minProfit=arr[0] || 0;
//     let profit=0;

//     for(let i=0;i<arr.length;i++){
//         if(arr[i]<minProfit){
//             minProfit=arr[i];
//         }
//         profit=Math.max(arr[i]-minProfit,profit);
//     }

//     return profit;
    
// }
// console.log(maxProfit([7,1,5,3,6,4]));
// console.log(maxProfit([7,6,4,3,1]));

const btn=document.querySelector('.button');
const btnP=document.querySelector(".increment-pressed");
const btnT=document.querySelector(".increment-count");
const btnTH=document.querySelector(".increment-counts");

let Pressedcount=0,triggerCount=0,thC=0;
const count=()=>{
    btnT.innerHTML=++triggerCount;
}

const countTh=()=>{
    btnTH.innerHTML=++thC;
}

const debounce=(func,delay)=>{
    let timer;
    return function(){
        clearTimeout(timer);
        timer=setTimeout(()=>{
            func();
        },delay)
    }
}

const throttle=(func,limit)=>{
    let flag=true;
    return function(){
        if(flag){
            func();
            flag=false;
        setTimeout(()=>(flag=true),limit)
        }
    }
}

const debouneSearch=debounce(count,800)
const ThrottleSearch=throttle(countTh,800)


btn.addEventListener("click",()=>{
    btnP.innerHTML=++Pressedcount;
    debouneSearch();
    ThrottleSearch()
});
