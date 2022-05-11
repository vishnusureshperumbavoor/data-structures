template <typename T>
class queue{
    int front,rear,max;
    T arr[100];
    public :
        queue();
        void enQueue(T);
        T deQueue();
        bool empty();
        bool full();
        T frontStack();
        T rearStack();
        void list();
};
template <typename T>
queue<T> :: queue(){
    front = rear = -1;
    max = 4;
}
template <typename T>
bool queue<T> :: empty(){
    if(front == -1)
        return true;
    else
        return false;
}
template <typename T>
bool queue<T> :: full(){
    if((rear+1)%max == front)
        return true;
    else 
        return false;
}
template <typename T>
void queue<T> :: enQueue(T ele){
    if(front == -1){
        front++;
    }
    rear = (rear+1)%max;
    arr[rear] = ele;
}
template <typename T>
T queue<T> :: deQueue(){
    T x = arr[front];
    if(front == rear)
        front = rear = -1;
    else
        front = (front+1)%max;
    return x;
}
template <typename T>
T queue<T> :: frontStack(){
    return arr[front];
}
template <typename T>
T queue<T> :: rearStack(){
    return arr[rear];
}
template <typename T>
void queue<T> :: list(){
    int i;
    for(i=front;i!=rear;i=(i+1)%max){
        cout << arr[i] << "\t" ;
    }
    cout << endl;
}
// template <typename T>
// void queue<T> :: list(){
//     int i;
//     if(front<=rear){
//         for(int i=front;i<=rear;i++){
//             cout << arr[i] << "\t" ;
//         }
//     }
//     else{
//         for(i=front;i!=rear;i=(i+1)%max){
            //     cout << arr[i] << "\t" ;
            // }
            // cout << arr[i];
//     }
//     cout << endl;
// }
