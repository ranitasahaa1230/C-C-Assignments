// function truncate(str,length){
//     if(length>str.length) return str;
//     return str.slice(0,length)+"..."
// }

// let str1="Subscribe to Roadside"
// maxL=9
// console.log(truncate(str1,maxL))

function palindrome(num){
   return (num>0) ? num===+num.toString().split("").reverse().join('') : false
}

let str1=121
let str2=10
// console.log(palindrome(10))

// function Hamming(str1,str2){
//     if(str1.length !==str2.length) throw new Error("string must be of same length");

//     let distance=0;
//     for(let i=0;i<str1.length;i++){
//         if(str1[i] !== str2[i]){
//             distance++;
//         }
//     }
//     return distance;
// }

function Hamming(str1,str2){
    str1=str1.toString(2);
    str2=str2.toString(2);

    if(str1.length < str2.length) {
        while(str1.length!=str2.length) 
        str1="0"+str1
    }else{
        while(str2.length != str1.length )
        str2="0"+str2
    }

    let distance=0;
    for(let i=0;i<str1.length;i++){
        if(str1[i] !== str2[i]){
            distance++;
        }
    }
    return distance;
}

let str3="hello"
let str4="hwllr"
// console.log(Hamming(2,9))

function anagram(str1,str2){
    // if(str1.length !== str2.length) throw new Error("not an anagram");
    // return str1.split("").sort().join("")===str2.split("").sort().join("");

    if(str1.length !== str2.length) return false;

    let obj1={};
    let obj2={};

    for(let i=0;i<str1.length;i++){
        obj1[str1[i]]= (obj1[str1[i]] || 0)+1;
        obj2[str2[i]]= (obj2[str2[i]] || 0)+1;
    }

    for(const key in obj1){
        if(obj1[key]!==obj2[key]) return false;
    }
        return true;
}

// console.log(anagram("anagram","nagaram"));
// console.log(anagram("rat","car"));

const str="kello"
// console.log(str.toLowerCase(),str.toLocaleLowerCase())
// console.log(str.toLocaleUpperCase(),str.toLocaleUpperCase())

var strStr = function(haystack, needle) {
    // if(haystack.includes(needle))
    //     return haystack.indexOf(needle)
    // else return -1;
    for(let i=0;i<haystack.length;i++){
        if(haystack[i]===needle[i])
            return true
    }
};

console.log(strStr("butsad","sad"))

var isAnagram = function(s, t) {
    if(s.length!==t.length) return "not anagram";

    // return s.split('').sort().join("")===t.split("").sort().join("")
    let obj1={};
    let obj2={};

    for(let i=0;i<s.length;i++){
        obj1[s[i]]=(obj1[s[i]]|| 0)+1;
        obj2[t[i]]=(obj2[t[i]]|| 0)+1
    }

    for(let key in obj1){
        if(obj1[key] !== obj2[key]) return false;
    }
        return true
    
};
// console.log(isAnagram("rat","car"))

var reverseString = function(s) {
    let left=0, right=s.length-1,temp;
    while(left<right){
        temp=s[left];
        s[left++]=s[right];
        s[right--]=temp;
    }
    return s;
};

// console.log(reverseString(["h","e","l","l","o"]))

var mergeAlternately = function(word1, word2) {
    let max=Math.max(word1.length,word2.length)
    let ans="";

    for(let i=0;i<max;i++){
        if(i<word1.length){
            ans+=word1[i]
        }
        if(i<word2.length)
        ans+=word2[i];
    }
    return ans;
};

// console.log(mergeAlternately("abcd","pqr"))

var lengthOfLastWord = function(s) {
    // return res=s.trim("  ").split(" ").at(-1).length;
    
    for (let index = 0; index < s.length; index++) {
        const element = array[index];
        
    }
};
console.log(lengthOfLastWord("Hello World  "))


