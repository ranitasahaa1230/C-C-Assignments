//Palindrome No:
// const isPalindrome=function(x){
//     return x<0 ? false : x===+x.toString().split('').reverse().join('');
// }
// console.log(isPalindrome(121));//121=>"121"(convert to string)=>split=>['1','2','1']=>reverse; '+' converts string to a number
// console.log(isPalindrome(10))

//Fibonacci no:
// const fib=function(x){
//     // const arr=[0,1];
//     // for(let i=2;i<=x;i++){
//     //     arr.push(arr[i-1]+arr[i-2]);
//     // }
//     // return arr[x];

//     if(x<=1) return x;
//     return fib(x-1)+fib(x-2);
// }
// console.log(fib(2));//0,1,1
// console.log(fib(4));//0,1,1,2,3

//Anagram no:
const anagram = function (s, t) {
//1.   return s.split('').sort().join('') === t.split("").sort().join("");

//2.Fast and optimized:
if(s.length !==t.length) return false;

let obj1={};
let obj2={};

for(let i=0;i<s.length;i++){
    obj1[s[i]]=(obj1[s[i]]|| 0) + 1; //{r:1,a:1,t:1}
    obj2[t[i]]=(obj2[t[i]]|| 0) + 1;
}

    for(const key in obj1){
        if(obj1[key] !== obj2[key]) return false;//{1===1}
    }
    return true;
};
// console.log(anagram("anagram", "nagaram"));
// console.log(anagram("cat", "rat"));

//anagram=> ['a','n','a',''']=>['a','a','a','g']
//nagaram=>['n','a','g','...]=>['a','a',]

