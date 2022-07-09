#include <iostream>
using namespace std;
class test{
    public:
    void display(int a,int b){
        cout << a+b << endl;
    }
    void display(float a,float b){
        cout << a+b << endl;
    }
};
int main(){
    test t;
    int a=10,b=20;
    t.display(a,b);

    float c=15.8,d=38.8;
    t.display(c,d);
}