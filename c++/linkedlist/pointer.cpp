#include <iostream>
using namespace std;
class test{
    public:
    void display(){
        cout << "happy coding" << endl;
    }
};
class fuck : public test{
    
};
int main(){
    fuck f;
    test t*;
    t = &f;
    t->display();
}