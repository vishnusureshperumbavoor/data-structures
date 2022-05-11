#include <iostream>
using namespace std;
#include "queue.h"
int main(){
    queue <int> q;
    int  num,a;
    while(num!=6){
        cout << "1.push\t2.pop\t3.list\t4.front\t5.rear\t6.exit" << endl;
        cin >> num;
        switch(num){
            case 1:
                if(q.full()){
                    cout << "stack is full" << endl;
                }
                else{
                    cout << "enter the number u want to push" << endl;
                    cin >> a;
                    q.push(a);
                }
                break;
            case 2:
                if(q.empty())
                    cout << "queue is empty" << endl;
                else{
                    cout << "popped out element is " << q.pop() << endl;
                }
                break;
            case 3:
                if(q.empty())
                    cout << "queue is empty" << endl;
                else
                    q.list();
                break;
            case 4:
                cout << "front = " << q.frontStack() << endl;
                break;
            case 5 :
                cout << "rear = " << q.rearStack() << endl;
                break;
            case 6  :
                EXIT_SUCCESS;
            default :
                cout << "enter a valid number" << endl;
                break;
        }
    }
}