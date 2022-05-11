#include <iostream>
#include "stack.h"
#include <ctype.h>
using namespace std;

void postfixtoinfix(string postfix){
    stack <string> s;
    char item;
    string x,y;
    cout << endl << "infix expression" << endl;
    for(int i=0;postfix[i]!='\0';i++){
        item = postfix[i];
        if(isalnum(item)){
            s.push(string(1,item));
        }
        else{
            x = s.pop();
            y = s.pop();
            s.push("("+y+postfix[i]+x+")");
        }
    }
    cout << s.pop() << endl;
}
int main(){
    string postfix;
    cout << "enter postfix expression" << endl;
    cin >> postfix;
    postfixtoinfix(postfix);
}