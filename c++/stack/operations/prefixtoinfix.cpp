#include <iostream>
#include "stack.h"
#include <ctype.h>
using namespace std;

void prefixtoinfix(string prefix){
    stack <string> s;
    char item;
    string x,y,rev,temp,infix;
    cout << endl << "infix expression" << endl;
    for(int i=prefix.length()-1;i>=0;i--){
        rev += prefix[i];
    }
    for(int i=0;rev[i]!='\0';i++){
        item = rev[i];
        if(isalnum(item)){
            s.push(string(1,item));
        }
        else{
            x = s.pop();
            y = s.pop();
            s.push(")"+y+rev[i]+x+"(");
        }
    }
    temp = s.pop();
    for(int i=temp.length()-1;i>=0;i--){
        infix += temp[i];
    }
    cout << infix << endl;
}
int main(){
    string prefix;
    cout << "enter prefix expression" << endl;
    cin >> prefix;
    prefixtoinfix(prefix);
}