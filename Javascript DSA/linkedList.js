//Linked List
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

    addAt(index,data){
        if(index<0 || index>this.size()){
            return "Invalid data";
        }

        const newNode=new Node(data);//node has two things data amd next
        if(index===0){
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

    removeAt(index){
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

const linkedlist=new LinkedList();
linkedlist.addFirst(5);
linkedlist.addFirst(3);
linkedlist.addFirst(8);
linkedlist.addFirst(89);
linkedlist.addLast(6);

linkedlist.removeTop();

linkedlist.addAt(2, 10);

linkedlist.removeLast();
linkedlist.removeAt(2);

// linkedlist.printLinkedList();
// console.log("size", linkedlist.size())

//Palindrome Linked List

const isPalindrome=(head)=>{
    let string1=string2="";
    let currentNode=head;

    while(currentNode!==null){
        string1=`${string1}${currentNode.val}`;
        string2=`${currentNode.val}${string2}`;
        currentNode=currentNode.next
    }
    return string1===string2;
}

// console.log(isPalindrome([[1,2,2,1]]))
// console.log(isPalindrome([[1,2]]))

const reverseList=(head)=>{
    let prev=null;
    let currentNode=head;

    while(currentNode !== null){
        const nextNode=currentNode.next;
        currentNode.next=prev;
        prev=currentNode;
        currentNode=nextNode;
    }
    return prev;
}

// console.log(reverseList([[1,2,3,4,5]]))
// console.log(reverseList([[1,2]]))

const deleteList=(head)=>{
    node.val=node.next.val; //4=>5=>1=>9=> 4=>1>1>9
    node.next=node.next.next
}

// console.log(deleteList([[1,2,3,4,5]]))
// console.log(deleteList([[1,2]]))

const removeNthFromEnd=(head,n)=>{
    let slow=head;
    let fast=head;

    for(let i=0;i<n;i++){
        fast=fast.next; //fast is at the nth place
    }

    if(!fast){
        return head.next
    }

    while(fast.next){
        fast=fast.next;
        slow=slow.next;
    }

    slow.next=slow.next.next;
    return head;
}

// console.log(removeNthFromEnd([[1,2,3,4,5]]))
// console.log(removeNthFromEnd([[1,2]]))

var addTwoNumbers = function(l1, l2) {
    var dummy=new ListNode(0);
    var current=dummy;
    var carry=0;

    while(l1!==null||l2!==null||carry>0){
        var val1=l1? l1.val :0;
        var val2=l2? l2.val :0;

        var sum=val1+val2+carry;
        carry=Math.floor(sum/10)//14/10=>1
        sum%=10;//14%10=4

        current.next=new ListNode(sum);
        current=current.next;

        if(l1) l1=l1.next;
        if(l2) l2=l2.next
    }
    return dummy.next;//1st node was 0
};