function truncate(str,maxlength){
    if(str.length>maxlength){
        return str.slice(0,maxlength)+"..."
        // return str.slice(0,maxlength).concat("...")
    }
    return str;
}
// console.log(truncate("Subscribe to",9))

function palindrome(num){
   return num<0 ? false : num===+num.toString().split("").reverse().join("")
}
// console.log(palindrome(121))
// console.log(palindrome(10))

// function hammingDistance(x,y){
//     if(x.length!==y.length)
//     throw new Error("not same length");

//     let distance=0;
//     for(let i=0;i<x.length;i++){
//         if(x[i]!==y[i]){
//             distance++;
//         }
//     }
//     return distance;
// }
//  console.log(hammingDistance("hello","hwllr"))

function hammingBinaryDistance(x,y){
    x=x.toString(2);
    y=y.toString(2);

    if(x.length<y.length){
        while(x.length!==y.length) x="0"+x
    }else{
        while(x.length!==y.length) y="0"+y
    }

    let distance=0;
    for(let i=0;i<x.length;i++){
        if(x[i]!==y[i]){
            distance++;
        }
    }
    return distance;
}
//  console.log(hammingBinaryDistance(1,4))
//  console.log(hammingBinaryDistance(2,9))

function anagram(x,y){
//    x=x.split("").sort().join("");
//    y=y.split("").sort().join("");
//     return x===y

    if(x.length!==y.length) return false;
    let obj1={};
    let obj2={};

    for(let i=0;i<x.length;i++){
        obj1[x[i]]=(obj1[x[i]] ||0)+1;
        obj2[y[i]]=(obj2[y[i]] ||0)+ 1;
    }

    for(const key in obj1){
        if(obj1[key]!==obj2[key]) return false;
    }
    return true;
}

console.log(anagram("anagram","nagaram"))
console.log(anagram("cat","rat"))