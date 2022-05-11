public class doubly{
    class Node{
        int data;
        Node next;
        Node prev;
        Node(int data){
            this.data = data;
        }
    }

    public Node head = null;
    public Node tail = null;

    public void addNode(int data){
        Node newNode = new Node(data);
        if(head == null){
            head = newNode;
        }else{
            tail.next = newNode;
            newNode.prev = tail;
        }
        tail = newNode;
        System.out.println("new node added");
    }
    public void displayForward(){
        Node temp = head;
        if(temp == null){
            System.out.println("empty");
            return ;
        }
        while(temp != null){
            System.out.println(temp.data);
            temp = temp.next;
        }
    }
    public void displayReverse(){
        Node temp = tail;
        if(temp == null){
            System.out.println("empty");
            return ;
        }
        while(temp != null){
            System.out.println(temp.data);
            temp = temp.prev;
        }
    }
    public void removeNode(int data){
        Node temp = head, prev = null;
        if(temp==null){
            System.out.println("linked list is empty");
            return ;
        }
        if(temp != null && temp.data == data){
            head = temp.next;
            return ;
        }
        if(temp == tail){
            tail = prev;
            tail.next = null;
            return ;
        }
        while(temp != null && temp.data != data ){
            prev = temp;
            temp = temp.next;
        }
        prev.next = temp.next;
    }
    public void insertAfter(int nextTo,int data){
        Node newNode = new Node(data);
        Node temp = head;
        while(temp!=null && temp.data != nextTo){
            temp = temp.next;

        }
        if(temp==null){
            return ;
        }
        if(temp==tail){
            tail.next = newNode;
            tail = newNode;
            return ;
        }
        newNode.next = temp.next;
        temp.next = newNode;
    }
    public void insertBefore(int Before,int data){
        Node newNode = new Node(data);
        Node temp = head;
        while(temp!=null && temp.data != Before){
            temp = temp.prev;
        }
        if(temp==null){
            return ;
        }
        if(temp==tail){
            tail.prev = newNode;
            tail = newNode;
            return ;
        }
        newNode.next = temp.next;
        temp.next = newNode;
    }
    public static void main(String[] args) {
        doubly l = new doubly();
        l.addNode(10);
        l.addNode(20);
        l.addNode(50);
        l.displayForward();
        System.out.println("\n");
        l.displayReverse();
        System.out.println("\n");
        l.removeNode(10);
        l.displayForward();
        System.out.println("\n");
        l.insertAfter(20,99);
        l.displayForward();
        System.out.println("\n");

        l.insertBefore(99,100);
        l.displayForward();
    }
}