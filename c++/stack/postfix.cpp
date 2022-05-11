#include <iostream>
#include <ctype.h>
#include "stack.h"
#include "icpisp.h"
using namespace std;
void infixpeekostfix(string infix){
    stack <char> s;
    s.push('(');
    char item;
    cout << "Postfix expression" << endl;
    for(int i=0;infix[i]!='\0';i++){
        item = infix[i];
        if(isalnum(item)){
            cout << item ;
        }
        else if(item == ')'){
            while(s.peek() != '('){
                cout << s.pop();
            }
            s.pop();
        }
        else if(icp(item) > isp(s.peek())){
            s.push(item);
        }
        else if(icp(item) < isp(s.peek())){
            while(icp(item) < isp(s.peek())){
                cout << s.pop();
            }
            s.push(item);
        }
    }
    while(s.peek()!='('){
        cout << s.pop();
    }
    s.pop();
}
int main(){
    string infix;
    cout << "enter an infix operation" << endl;
    cin >> infix;
    infixpeekostfix(infix);
}