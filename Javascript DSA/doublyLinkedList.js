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
        if(index<0 || index> this.size()){
            console.error("Invalid index");
            return;
        }

        const newNode=new Node(data);
        if(index===0){
            newNode.next=this.head;

            if(this.head){
            this.head.prev=newNode;
            }
            this.head=newNode;
        }

        let currentNode=this.head;
        for(let i=0;i<index-1;i++){
            currentNode=currentNode.next;
        }

        newNode.prev=currentNode.prev;
        newNode.next=currentNode;
        
        if(currentNode.next){
            currentNode.next.prev=newNode;
        }
        currentNode.next=newNode;
    }

    removeAt(index,data){
         if(index<0 || index> this.size()){
            console.error("Invalid index");
            return;
        }

        if(index===0){
            this.head=this.head.next;

            if(this.head){
                this.head.prev=null;
            }
        }

        let currentNode=this.head;
        for(let i=0;i<index-1;i++){
            currentNode=currentNode.next;
        }

        if(currentNode.next){
            currentNode.next=currentNode.next.next;

            if(currentNode.next){
                currentNode.next.prev=currentNode;
            }
        }
        
    }
}

const DLL=new DoublyLinkedList();
DLL.addFirst(5);
DLL.addFirst(3);
DLL.addFirst(8);
DLL.addFirst(89);
DLL.addLast(6);

DLL.removeTop();

// DLL.addAt(2, 10);

DLL.removeLast();
DLL.removeAt(2);

DLL.printDoublyLinkedList();
console.log("size", DLL.size())