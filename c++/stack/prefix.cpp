#include <iostream>
#include <ctype.h>
#include "stack.h"
#include "icpisp.h"
using namespace std;
void infixpeekrefix(string infix){
    stack <char> s;
    s.push('(');
    char item;
    string rev, postfix, prefix;
    cout << "prefix expression" << endl;
    for(int i=infix.length()-1;i>=0;i--){
        if(infix[i]=='(')
            rev += ')';
        else if(infix[i]==')')
            rev += '(';
        else
            rev += infix[i];
    }

    for(int i=0;rev[i]!='\0';i++){
        item = rev[i];
        if(isalnum(item)){
            postfix += item ;
        }
        else if(item == ')'){
            while(s.peek() != '('){
                postfix += s.pop();
            }
            s.pop();
        }
        else if(icp(item) > isp(s.peek())){
            s.push(item);
        }
        else if(icp(item) < isp(s.peek())){
            while(icp(item) < isp(s.peek())){
                postfix += s.pop();
            }
            s.push(item);
        }
    }
    while(s.peek()!='('){
        postfix += s.pop();
    }
    s.pop();
    
    for(int i=postfix.length()-1;i>=0;i--){
        prefix += postfix[i];
    }
    cout  << prefix << endl;
}
int main(){
    string infix;
    cout << "enter an infix operation" << endl;
    cin >> infix;
    infixpeekrefix(infix);
}