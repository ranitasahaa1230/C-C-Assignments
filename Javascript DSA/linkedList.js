class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
    constructor(){
        this.head = null;
    }

    addFirst(data){
        const newNode=new Node(data);//node has two things data amd next
        newNode.next=this.head;
        this.head=newNode;
    }

    addLast(data){
        const newNode=new Node(data);//node has two things data amd next

        if(!this.head){
           this.head=newNode;
           return
        }

        let currentNode=this.head
                //gonna traverse the whole node where next is null
        while(currentNode.next){
            currentNode=currentNode.next
        }

        currentNode.next=currentNode;
    }

    size(data){
        let count=0;
        let currentNode=this.head;
        while(currentNode.next){
            count++;
            currentNode=currentNode.next;
        }
        return count;
    }

    addAt(index,data){
        if(index<0 || index>this.size()){
            return "Invalid data";
        }

        const newNode=new Node(data);//node has two things data amd next
        if(index==0){
            newNode.next=this.head;
            this.head=newNode;
            return;
        }

        let currentNode=this.head;
        for(let i=0;i<index-1;i++){
            currentNode=currentNode.next;
        }

        newNode.next=currentNode.next;
        currentNode.next=newNode;

    }

    removeTop(){
        if(!this.head){
            return
        }

        this.head=this.head.next
    }

    removeLast(){
        if(!this.head) return;

         let currentNode=this.head;
         while(currentNode.next.next){
            currentNode=currentNode.next;
         }

         currentNode.next=null;
    }

    removeAt(index,data){
        if(index<0 || index>this.size()){
            return "Invalid data";
        }

        if(index===0){
            this.head=this.head.next;
            return;
        }

        let currentNode=this.head;
        for(let i=0;i<index-1;i++){
            currentNode=currentNode.next;
        }

        if(currentNode.next){
            currentNode.next=currentNode.next.next
        }
    }

    printLinkedList(){
        let currentNode=this.head
        while(currentNode){
            console.log(currentNode.data);
            currentNode=currentNode.next;
        }
    }
}

const linkedList=new LinkedList();

linkedList.addFirst(5);
linkedList.addFirst(780)
linkedList.addFirst(50)
linkedList.addFirst(125)
// linkedList.addLast(30)

linkedList.removeTop()
linkedList.addAt(2,8)
linkedList.removeLast()
linkedList.removeAt(1)


linkedList.printLinkedList();
console.log("size", linkedList.size())//