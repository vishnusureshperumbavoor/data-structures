public class Queue {
    static class Node{
        int data;
        Node next;
        public Node(int data){
            this.data = data;
        }
    }
    public Node front;
    public Node rear;
    public void enqueue(int data){
        Node newNode = new Node(data);
        if(rear == null){
            front = rear = newNode;
        }else{
            rear.next = newNode;
            rear = newNode;
        }       
    }    
    public void dequeue(){
        if(front==null){
            System.out.println("queue underflow");
            return ;
        }
        front = front.next;
        if(front==null){
            rear = null;
        }
    }
    public void display(){
        Node current = front;
        if(current==null){
            System.out.println("queue underflow");
            return ;
        }
        while(current!=null){
            System.out.println(current.data);
            current = current.next;
        }
    }
    public static void main(String[] args) {
        Queue s = new Queue();
        s.enqueue(20);
        s.enqueue(34);
        s.enqueue(66);
        s.display();
        System.out.println();
        s.dequeue();
        s.display();
    }
}
