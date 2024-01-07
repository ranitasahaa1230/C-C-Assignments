//QUEUE=>FIFO

class Queue{
    constructor(){
        this.queue=[];
    }

    enqueue(element){
       this.queue.push(element);
    }

    dequeue(){
        if(this.isEmpty()) return "khali";
        return this.queue.shift();
    }

    peek(){
        if(this.isEmpty()) return "khali";
        return this.queue[0];
    }

    isEmpty(){
        this.size()===0;
    }

    size(){
      return this.queue.length;
    }

    printQueue(){
        let queueStr="";
        for(let i=0;i<this.size();i++){
            queueStr+=this.queue[i] + ", "
        }
        console.log("Queue :" + queueStr)
    }
}

const queues=new Queue;
queues.enqueue(123);
queues.enqueue(45);
queues.enqueue(96);

// console.log(queues.printQueue());
// console.log(queues.size());
// console.log(queues.dequeue());
// console.log(queues.peek());
// console.log(queues.dequeue());
// console.log(queues.size());

// queues.dequeue();
// queues.dequeue();

// console.log(queues.isEmpty());
// console.log(queues.dequeue());


// Circular queue:
var MyCircularQueue = function(k) {
    this.queue=[];
    this.size=k;
};

MyCircularQueue.prototype.enQueue = function(value) {
  if(this.size===this.queue.length) return false;
   this.queue.push(value);
   return true;
};

MyCircularQueue.prototype.deQueue = function() {
    if(this.queue.length===0) return false;
  this.queue.shift();
  return true;
};


MyCircularQueue.prototype.Front = function() {
    if(this.queue.length===0) return -1;
    return this.queue[0];
};

MyCircularQueue.prototype.Rear = function() {
    if(this.queue.length===0) return -1;
    return this.queue[this.queue.length-1];
};

MyCircularQueue.prototype.isEmpty = function() {
    return this.queue.length===0
};

MyCircularQueue.prototype.isFull = function() {
    return this.queue.length===this.size
};

//implement stack using queues;
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
    this.q2.push(this.q1.shift())
   }
   this.q1.push(x);
   while(this.q2.length!==0){
    this.q1.push(this.q2.shift());
   }

 };

 //q1=[2,3,4]
 
 MyStack.prototype.pop = function() {
    return this.q1.shift();
 };
 
 MyStack.prototype.top = function() {
   return this.q1[0];
 };
 
 MyStack.prototype.empty = function() {
   return this.q1.length===0;
};

//implement queues using stacks;
var MyQueue = function() {
    this.s1=[];
    this.s2=[];
};

MyQueue.prototype.push = function(x) {
    return this.s1.push(x);
};

MyQueue.prototype.pop = function() {
    if(this.s2.length===0){
        while(this.s1.length!==0){
            this.s2.push(this.s1.pop())//puts s2 in reverse order
        }
    }
    return this.s2.pop();
};

MyQueue.prototype.peek = function() {
    if(this.s2.length===0){
        while(this.s1.length!==0){
            this.s2.push(this.s1.pop())//puts s2 in reverse order
        }
    }
    return this.s2[this.s2.length-1];
};

MyQueue.prototype.empty = function() {
    return this.s1.length ===0 && this.s2.length===0;
};

//Sliding window maximum:
const slidingWindow=function(nums,k){
    const arr=[];
    let n=nums.length;

    for(let i=0;i<=n-k;i++){//0(N-K)=>0(N)
        let max=nums[i];
        for(let j=1;j<k;j++){//0(K)
            if(nums[i+j]>max){
                max=nums[i+j];
            }
        }
        arr.push(max);
    }
    return arr;
    //TC:0(N^K)=>K is constant=>0(n*2)//EXPONNETIAL TC=>v.bad TC
    //SC:0(N)
}

console.log(slidingWindow([1,3,-1,-3,5,3,6,7],3))