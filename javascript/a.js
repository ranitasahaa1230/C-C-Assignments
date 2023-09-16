// function main(){
//     console.log(a);
//     b=2;
//     console.log(b);
// }

// main();
// var a=1;
// var b=4;
// main();

// main();
// function main(){
//     console.log(helloFn());
// }

// var helloFn=function(){
//     return "Hello";
// }

// var user=null;
// var defaultUser="john";
// var cuser=user ?? defaultUser
// console.log(cuser);

// var user=0;
// var defaultUser=23;
// var cuser=user ?? defaultUser
// console.log(cuser);

// var num=[1,2,3,4,5]
// num.splice(2,0,8);
// console.log(num)


// async function sleep(){
//     return new Promise((resolve,reject)=>{
//         setTimeout(()=>{
//             console.log("sleeping");
//             resolve();
//         },1000);
//     })
// }

// async function main(){
//     console.log(1);
//     sleep();
//     setTimeout(() => {
//         console.log(2);
//     }, 0);
//     Promise.resolve().then(()=>    console.log(3));
//     console.log(4);
//     await sleep();
// }

// main();

//1
//4
//3
//2
//sll
//sl

//nullish coal,hoising,promises,splice, strice
//box model
//essix
//a111
//memory leak
//event loop
//seo
//ssr vs csr

function outer(){
    const name="Ranita";
    function inner(){
        console.log(name);
    }
    return inner;
}

var c=outer()();
// console.log(c);

// function Child =({ demoProp }) => {
//     const varToBePassed;
// demoProp(varToBePassed);
// }

// const Parent = () => {
// const demoProp = (var) => {
//     console.log(var) //displays varToBePassed
// }
// return (
//     <>
//         <Child demoProp={demoProp} />
//     </>
//     )
// }