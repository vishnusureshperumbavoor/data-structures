#include <iostream>
using namespace std;
template <class U>
class test{
    public:
    U display(U,U);
};
template <class T>
T test<T> :: display(T a,T b){
    return a+b;
}
int main(){
    test <int> t;
    int a=10,b=20;
    t.display(a,b);

    test <float> e;
    float c=15.8,d=34.6;
    e.display(c,d);

    test <string> e;
    float c=15.8,d=34.6;
    e.display(c,d);
}