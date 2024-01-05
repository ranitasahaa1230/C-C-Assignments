//STACK=>LIFO, FIFO
class Stack{
    constructor(){
        this.stack=[];
    }

    push(element){
        this.stack.push(element);
    }
    pop(){
        if(this.isEmpty()) return "stack empty";
        return this.stack.pop()
    }
    peek(){
        if(this.isEmpty()) return "stack empty";
        return this.stack[this.size()-1];
    }
    isEmpty(){
        return this.size() === 0 ;
    }
    size(){
        return this.stack.length
    }
    printStack(){
        for(let i=0;i<this.stack.length;i++){
            console.log(this.stack[i],"stack")
        }
    }
}

const stack=new Stack;
// console.log(stack.size());
stack.push(78);
stack.push(50);
console.log(stack.peek());
console.log(stack.size());
console.log(stack.pop());
console.log(stack.printStack());
console.log(stack.isEmpty());
console.log(stack.pop());
console.log(stack.isEmpty());

function reverseWords(str){
    // return str.split(' ').reverse().join(' ')
    const splitStr=str.split(" ");
    const stack=[];//sc=>0(n)

    for(let i of splitStr){//0(N)
        stack.push(i);
    }

    let finalStr="";
    while(stack.length){//0(N)
        let currentStr=stack.pop();
        if(currentStr){
        finalStr+=" " + currentStr;
        }
    }

    return finalStr.trim();
    //TC:0(2N)=>0(N)
    //SC:0(N)=>creating a new array
}

// console.log(reverseWords("the sky is blue"));
// console.log(reverseWords("hello world"));
// console.log(reverseWords("a good example"));

function validParenthesis(str){
    const stack=[];

    for(let i=0;i<str.length;i++){//0(N)
        const char=str[i];

        if(char==="(" || char==="[" || char==="{"){
            stack.push(char);
        }else if(char===")" || char==="]" || char==="}"){
            if(isEmpty(stack)){
                return false;
            }

            const top=stack.pop();
            if((char===")" && top!=="(") ||
            (char==="]" && top!=="[") ||
            (char==="}" && top!=="{") ){
            return false;
            }
        }
    }
    //TC:0(N)
    //SC:0(N)
    return isEmpty(stack);
}
function isEmpty(stacks){
    return stacks.length===0;
}
// console.log(validParenthesis("()"));
// console.log(validParenthesis("([]{})"));
// console.log(validParenthesis("(]"));

