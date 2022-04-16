/* Singly Linked List

let linkedList = {
    head: {
        value : 20,
        next : {
            value : 30,
            next : {
                value : 40,
                next : null
            }
        }
    }
}
*/

class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class LinkedList {
    constructor(value) {
        this.head = {
            value : value,
            next : null
        }
        this.tail = this.head;
        this.length = 1;
    }

    append(value) {
        const newNode = new Node(value);
        this.tail.next = newNode;
        this.tail = newNode;
        this.length++;
        return this;
    }

    prepend(value){
        const newNode = new Node(value);
        newNode.next = this.head;
        this.head = newNode;
        this.length++;
        return this;
    }

    printList() {
        const arr = [];
        let currentNode = this.head;
        while(currentNode !== null) {
            arr.push(currentNode.value);
            currentNode = currentNode.next;
        }
        console.log(arr);
    }
    insert(index, value) {
        if (index === 0) {
            return this.prepend(value);
        }
        // If index does not exist
        if(index >= this.length) {
            return this.append(value);
        }
        const newNode = new Node(value);
        const leader = this.traverseToIndex(index - 1);
        const holdingPointer = leader.next;
        leader.next = newNode;
        newNode.next = holdingPointer;
        this.length++;
        return this;
    }
    remove(index) {
        // Nothing to delete if index does not exist
        if(index >= this.length) {
            return this;
        }
        if(index === 0) {
            this.head = this.head.next;
            return this;
        }
        let currentNode = this.traverseToIndex(index - 1);
        let deleteNode = currentNode.next;
        currentNode.next = deleteNode.next;
        this.length--;
        return this;
    }
    traverseToIndex(index) {
        let counter = 0;
        let currentNode = this.head;
        while(counter !== index) {
            currentNode = currentNode.next;
            counter++;
        }
        return currentNode;
    }
}

let myLinkedList = new LinkedList(10);
myLinkedList.append(5);
myLinkedList.append(16);
myLinkedList.prepend(2);
myLinkedList.printList();
myLinkedList.insert(2, 100);
myLinkedList.insert(2, 101);

myLinkedList.printList();
myLinkedList.remove(1);
myLinkedList.printList();