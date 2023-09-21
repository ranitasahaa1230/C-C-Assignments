const arr2 = [1, 2, 3];

const flat=(arr)=>{
    let output=[];
    for (let i = 0; i < arr.length - 1; i++) {
        output.push([arr[i], arr[i + 1]]);
      }
    for(let i=0;i<arr.length-1;i++){
        for(let j=i+2;j<arr.length;j++){
            output.push([arr[i],arr[j]])
        }
    }
    return output
}
console.log(flat(arr2))

let array1 = [1, 0, 2, 3, 4, , 0,1,2];
let array2 = [3, 5, 6, 7, 8, 13];

function sumArr(array1,array2){
    let sum=[];
    let maxL=Math.max(array1.length,array2.length);

    for(let i=0;i<maxL;i++){
        let val=array1[i] || 0
        let var2=array2[i] || 0
        sum.push(val+var2)
    }
    return sum;
}
console.log(sumArr(array1,array2));