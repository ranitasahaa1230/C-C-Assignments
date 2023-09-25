//queue=>FIFO
//enqueue(elem)=>responsible for adding elements inside a queue
//dequeue()=>responsible for taking out the elements from the queue=>FIFO
//peek()=>At the front of the queue
//isEmpty()=>queue is empty or not
//size()=>size of the queue

//Front and rear of the circular queue are at the same place
//circular queue have a fixed size
//rear()=>checks the last element
//isFull()=>if the circle is full or not

//622LC

var MyCircularQueue = function(k) {
    this.queue=[];
    this.size=k;
};

MyCircularQueue.prototype.enQueue = function(value) {
    if(this.queue.length===this.size) return false;
    this.queue.push(value);
    return true;
};

MyCircularQueue.prototype.deQueue = function() {
    if(this.queue.length ===0) return false;
    this.queue.shift();
    return true;
};


MyCircularQueue.prototype.Front = function() {
    if(this.queue.length ===0) return -1;
    return this.queue[0]
};

MyCircularQueue.prototype.Rear = function() {
    if(this.queue.length ===0) return -1;
    return this.queue[this.queue.length-1]
};

MyCircularQueue.prototype.isEmpty = function() {
    return this.queue.length === 0;

};

MyCircularQueue.prototype.isFull = function() {
    return this.queue.length === this.size;
};

//  var obj = new MyCircularQueue(3)
//  let param_1 = obj.enQueue(23)
//  let param_ = obj.enQueue(234)
//  let param_2 = obj.deQueue()
//  let param_3 = obj.Front()
//  let param_4 = obj.Rear()
//  let param_5 = obj.isEmpty()
//  let param_6 = obj.isFull()

 //Implement stack using queues
 //implement LIFO stack using only two queues
 //the stack should support all functions of a stack(push,pop,top,empty)

 var MyStack = function() {
    this.q1=[];
    this.q2=[];
 };
//8
 //1.q1=[2,3,4]
 //q2=[]
 //2.q1=[8,2,3,4]
 //q2=[]

 
 MyStack.prototype.push = function(x) {
    while(this.q1.length!==0){
     this.q2.push(this.q1.shift());
    }
    this.q1.push(x);
    while(this.q2.length!==0){
        this.q1.push(this.q2.shift())
    }
 };

 //q1=[2,3,4]
 
 MyStack.prototype.pop = function() {
       return this.q1.shift();
 };
 
 MyStack.prototype.top = function() {
    return this.q1[0]
 };
 
 MyStack.prototype.empty = function() {
     return this.q1.length===0
 };
 
  var obj = new MyStack()
//   obj.push(x)
  var param_2 = obj.pop()
  var param_3 = obj.top()
  var param_4 = obj.empty()

  //Implement queue using stack
  //implement FIFO stack using only two Stacks
  //the queue should support all functions of a queue(enque,front,dequeue,empty)
 
  var MyQueue = function() {
     this.stack1=[];
     this.stack2=[];
  }; 
  
  MyQueue.prototype.enQueue = function(x) {
     this.stack1.push(x)
  }
   //stack=>
   //stack1=[5,7,2]=>2
   //queue=>[5,7,2]=>5
   //1.stack1=[5,7,2]
   //stack2=[2,7,5]=>5
  MyQueue.prototype.deQueue = function() {
        if(this.stack2.length===0){
            while(this.stack1.length>0){
             this.stack2.push(this.stack1.pop());
            }
        }

        return this.stack2.pop()
  };
  
  MyQueue.prototype.Front = function() {
     if(this.stack2.length===0){
        while(this.stack1.length>0){
            this.stack2.push(this.stack1.pop())
        }
     }
     return this.stack2[this.stack2.length-1]
  };
  
  MyQueue.prototype.empty = function() {
      return this.stack1.length===0 && this.stack2.length===0
  };
  
   var obj1 = new MyQueue()
   obj1.enQueue(3)
   obj1.enQueue(223)
   obj1.enQueue(23)
   obj1.deQueue()
//    console.log(obj1.Front());
 
//Sliding window max()

// const resultNaive=(arr,k)=>{
//     let result=[];
//     let n=arr.length;
//     for(let i=0;i<=n-k;i++){//n-k=>5//o(n-k)=>0(n)
//         let max=arr[i];//1
//         for(let j=1;j<k;j++){//3<3//0(1 to k)=>0(k)
//             if(max<arr[i+j]){//0<3
//                 max=arr[i+j]//
//             }
//         }
//         result.push(max)
//     }
//     return result;
// }
//Tc:=>o(n*k)=>o(n^2)
//sc=>o(n)


//dequeue=>
const result=(arr,k)=>{
    let result=[];
    for(let i=0;i<arr.length;i++){
        
    }
}
let input=[1,3,-1,-3,5,3,6,7];
let k=3;
console.log(result(input,k))