#include <iostream>
using namespace std;
template <class T>
class linkedlist{
    class node{
        friend class linkedlist;
        T data;
        node *next;
        public :
        node(T d,node *n){
            data = d;
            next = n;
        }
    }*head;
    public:
    linkedlist();
    void push(T);
    T pop();
    void list();
};
template <typename T>
linkedlist<T> :: linkedlist(){
    head = NULL;
}
template <typename T>
void linkedlist<T> :: push(T data){
    head = new node(data,head);
}
template <typename T>
T linkedlist<T> :: pop(){
    node *temp = head;
    T data = temp->data;
    head = head->next;
    delete temp;
    return data;
}

template <typename T>
void linkedlist<T> :: list(){
    node *temp = head;
    while(temp!=NULL){
        cout << temp->data << "\t";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    linkedlist<int> l;
    int num,data;
    while(num!=4){
        // cout << "1.PUSH\n2.POP\n3.List\n4.Exit" << endl;
        cin >> num;
        switch(num){
            case 1:
                cout << "enter the data to push" << endl;
                cin >> data;
                l.push(data);
                break;
            case 2:
                cout << l.pop() << endl;
                break;
            case 3:
                l.list();
                break;
        }
    }
}