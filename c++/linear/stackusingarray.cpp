#include <iostream>
using namespace std;
template <class T> 
class stack{
    T arr[100],top;
    public : 
        stack();
        void push(T);
        void pop();
        void list();
};
template <class T> 
stack <T> :: stack(){
    top = -1;
}
template <class T> 
void stack <T> :: push(T ele){
        top++;
        arr[top] = ele;
}
template <class T> 
void stack <T> :: pop(){ 
    if(top==-1)
        cout << "Stack is Empty" << endl;
    else{
        cout << "POP element is " << arr[top] << endl;
        top--;
    }
}
template <class T> 
void stack <T> :: list(){
    cout << "Elements in the stack - " << endl;
    int i;
    for(i=0;i<=top;i++){
        cout << arr[i] << endl;
    }
}
int main(){
    stack <int> s;
    int ch,elem;
    while(ch!=4){
        cout << "1. PUSH\n2. POP\n3. List\n4. Exit" << endl;
        cout << "Enter the choice " << endl;
        cin >> ch;
        switch(ch){
            case 1:
                    cout << "Enter the element to push " << endl;
                    cin >> elem;
                    s.push(elem);
                    break;
                
            case 2:
                s.pop();
                break;
                
            case 3:
                s.list();
                break;
        }
    }
}