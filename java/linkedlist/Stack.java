public class Stack {
    static class Node{
        int data;
        Node next;
        public Node(int data){
            this.data = data;
        }
    }
    public Node top;
    public void push(int data){
        Node newNode = new Node(data);
        if(top==null){
            top = newNode;
        }else{
            newNode.next = top;
            top = newNode;
        }
    }
    public void pop(){
        if(top==null){
            System.out.println("stack underflow");
            return ;
        }
        top = top.next;
    }
    public void display(){
        Node current = top;
        while(current!=null){
            System.out.println(current.data);
            current = current.next;
        }
    }
    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(20);
        s.push(34);
        s.push(66);
        s.display();
        System.out.println("\n");
        s.pop();
        s.display();
    }
}
