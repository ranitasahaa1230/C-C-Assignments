//stack=>LIFO,FIFO
//push(),pop(),peek()=>topmost Element,isEmpty(),//true or false,size()

const reverseWords=(str)=>{
    let stack=[];
    const split=str.split(" ");
    for(let i of split){
        stack.push(i);
    }

    let finalStr="";

    while(stack.length){
        let current=stack.pop();

        if(current){
        finalStr+=" "+current;
        }
    }
    return finalStr.trim();
}
//TC:O(2N)=>0(N)
//SC=>0(2N)=>O(N)

// console.log(reverseWords("the sky is blue"));
// console.log(reverseWords("the great  example"));

const brackets=(str)=>{
    let stack=[];
    //([])
    //1.([
        //2.])
        //3.pop=>]
        //4.pop=>)
    for(let i=0;i<str.length;i++){
        let char=str[i];

        if(char==="(" || char==="[" || char==="{"){
            stack.push(char);
        }else if(char===")" || char==="]" || char==="}"){
            if(isEmpty(stack)){
                return false;
            }
            const topEl=stack.pop();
            if(
                (char===")" && topEl !=="(") ||
                (char==="]" && topEl !=="[") ||
                (char==="}" && topEl !=="{")
            ){
                return false;
            }
        }
    }
            return isEmpty(stack);
}
function isEmpty(arr){
        return arr.length===0
};
//TC:=>0(n)
//SC:=>0(n)

console.log(brackets("([]{})"));
console.log(brackets("[}]"))

