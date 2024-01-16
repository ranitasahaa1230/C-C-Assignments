//Doubly Linked List
class Node{
    constructor(data){
        this.data=data;
        this.prev=null;
        this.next=null;
    }
}

class DoublyLinkedList{
    constructor(){
        this.head=null;
    }

    addFirst(data){
        const newNode=new Node(data);

        newNode.next=this.head;
        if(this.head){
            this.head.prev=newNode;
        }
        this.head=newNode;
    }

    addLast(data){
        const newNode=new Node(data);

        if(!this.head){
            this.head=newNode;
            return;
        }

        let currentNode=this.head;
        while(currentNode.next){
            currentNode=currentNode.next;
        }

        newNode.prev=currentNode;
        currentNode.next=newNode;
    }

    size(){
        let count=0;

        let currentNode=this.head;
        while(currentNode){
            count++;
            currentNode=currentNode.next;
        }
        return count;
    }

    removeTop(){
        if(!this.head) return;

        this.head=this.head.next;

        if(this.head){
            this.head.prev=null;
        }
    }

    removeLast(){
        if(!this.head) return;

        if(!this.head.next){
            this.head=null;
            return;
        }

        let currentNode=this.head;
        while(currentNode.next.next){
            currentNode=currentNode.next;
        }

        currentNode.next=null;
    }

    printDoublyLinkedList(){
        let currentNode=this.head;
        while(currentNode){
            console.log(currentNode.data);
            currentNode=currentNode.next;
        }
    }

    addAt(index,data){

    }

    removeAt(index,data){
        
    }
}