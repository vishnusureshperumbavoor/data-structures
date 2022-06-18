#include <iostream>
using namespace std;
template <class T>
class linkedlist{
    class node{
        friend class linkedlist;
        T data;
        node *next;
        node(T d,node *n=NULL){
            data = d;
            next = n;
        }
    }*head,*tail;
    public :
    linkedlist();
    void insert(T);
    void delqueue();
    void list();
};
template <typename T>
linkedlist<T> :: linkedlist(){
    head = NULL;
    tail = NULL;
}
template <typename T>
void linkedlist<T> :: insert(T data){
    if(head==NULL){
        head = new node(data);
        tail=head;
    }
    else{
        node *temp = tail;
        tail = new node(data);
        temp->next=tail;
    }
}
template <typename T>
void linkedlist<T> :: delqueue(){
    node *temp = head;
    head = head->next;
    cout << temp->data << endl;
    delete temp;
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
        cin >> num;
        switch(num){
        case 1:
            cin >> data;
            l.insert(data);
            break;
        case 2:
            l.delqueue();
            break;
        case 3:
            l.list();
            break;
            
    }
    }
}
