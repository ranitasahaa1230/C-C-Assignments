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
