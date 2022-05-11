public class singly{
    class Node{
        int data;
        Node next;
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
        }
        tail = newNode;
        System.out.println("new node added");
    }

    public void display(){
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
    public void removeDuplicates(){
        Node current = head;
        while(current!=null){
            Node next = current.next;
            while(next!=null && next.data == current.data){
                next = next.next;
            }
            current.next = next;
            if(next == tail && current.data == next.data){
                tail = current;
                tail.next = null;
            }
            current = next;
        }
    }
    public static void main(String[] args) {
        singly l = new singly();
        l.addNode(10);
        l.addNode(20);
        l.addNode(20);
        l.addNode(20);
        l.addNode(50);
        l.addNode(50);
        l.display();
        System.out.println("\n");
        l.removeDuplicates();
        l.display();
        // l.removeNode(10);
        // l.display();
        // System.out.println("\n");
        // l.insertAfter(20,99);
        // l.insertAfter(99,100);
        // l.display();
    }
}
