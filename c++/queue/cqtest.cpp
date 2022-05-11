#include <iostream>
using namespace std;
#include "circular.h"
int main(){
    queue <int> q;
    int  num,a;
    while(num!=6){
        cout << "1.enqueue\t2.dequeue\t3.list\t4.front\t5.rear\t6.exit" << endl;
        cin >> num;
        switch(num){
            case 1:
                if(q.full()){
                    cout << "stack is full" << endl;
                }
                else{
                    cout << "enter the number to enqueue" << endl;
                    cin >> a;
                    q.enQueue(a);
                }
                break;
            case 2:
                if(q.empty())
                    cout << "queue is empty" << endl;
                else{
                    cout << "dequeued element is " << q.deQueue() << endl;
                }
                break;
            case 3:
                if(q.empty())
                    cout << "queue is empty" << endl;
                else
                    q.list();
                break;
            case 4:
                if(q.empty())
                    cout << "queue is empty" << endl;
                else
                    cout << "front = " << q.frontStack() << endl;
                break;
            case 5 :
                if(q.empty())
                    cout << "queue is empty" << endl;
                else
                    cout << "rear = " << q.rearStack() << endl;
                break;
            case 6 :
                EXIT_SUCCESS;
            default :
                cout << "enter valid number" << endl;
                break;
        }
    }
}