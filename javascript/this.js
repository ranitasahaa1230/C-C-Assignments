// let lm=new Array();
// let lm2=[];
// let m=null;
// let obj=new Object();

// console.log(typeof lm, typeof obj, typeof lm2, typeof m)

let array = [1, 3,3, 4, 5, 6, 7, 8, 9];
let findIn=array.findIndex((ar)=>ar===3);
let finn=array.find((ar)=>ar>7);
let IndexOf=array.indexOf(3)

// console.log(findIn, IndexOf, finn)

const arr=["app","bosss"];

// const arr2=arr.reduce((acc,maxL)=>{
//     const currentLength=maxL.length;
//     if(currentLength>acc) return currentLength;
// },0)

// const arr2=arr.reduce((acc,maxL)=>{
//    return acc>maxL.length ? acc : maxL
// },"")

// console.log(arr2)

const arr3=[5,2,8,4,3]

const arr4=arr3.reduce((acc,cval)=>{
    // let fact=cval;
    // for(let i=1;i<cval;i++){
    //     fact=fact*i
    // }
    // return fact > acc ? fact : acc

    let currFact=Array.from({length:cval}).map((_,index)=>index+1)
    .reduce((fact,val)=>fact*val)
    return currFact > acc ? currFact : acc
},1)
console.log(arr4)

const books=[
    {title:"BOOK1", year:1998},
    {title:"BOOK2", year:2003},
    {title:"BOOK3", year:1995},
    {title:"BOOK4", year:2005},
]

const af=books.filter((acc)=>acc.year>2000).map((m)=>m.title)
// console.log(af)

const mk=["hello wo","i am openai","welcome to js"];
const capitalise=(m)=>{
    return m.split(' ')
    .map(wo=>wo.charAt(0).toUpperCase()+wo.substring(1))
    .join(' ')
}
const m=mk.map((ml)=>capitalise(ml))
// console.log(m)


