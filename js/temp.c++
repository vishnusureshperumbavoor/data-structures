#include <iostream>
using namespace std;
class temp{
    public:
    temp(){
        cout << "1st temp" << endl;
    }
};
class temp2 : public temp {
    public :
    temp2(){
        cout << "2nd temp" << endl;
    }
};
class temp3 : public temp2{
    public :
    temp3(){
        cout << "3rd temp" << endl;
    }
};
int main(){
    temp3 t;
}