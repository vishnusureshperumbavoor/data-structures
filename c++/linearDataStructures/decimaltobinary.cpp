#include <iostream>
using namespace std;
#include "stack.h"
void dectobin(int decimal){
    stack <int> s;
    while(decimal!=0){
        s.push(decimal%2);
        decimal /= 2;
    }
    cout << "Binary number is " ;
    while(!s.isEmpty()){
        cout << s.pop();
    }
}
int main(){
    int decimal;
    cout << "Enter the decimal number" << endl;
    cin >> decimal;
    dectobin(decimal);
}