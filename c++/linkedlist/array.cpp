#include <iostream>
#include "arrayh.h"
using namespace std;
int main()
{
    int num,a,b,k;
    list <int> l;
    while (num != 8)
    {
        cout << "1.find\t2.makeEmpty\t3.printList\t4.findKth\t5.insert\t6.Delete Postion\t7.Delete Number\t8.exit" << endl;
        cin >> num;
        switch(num){
            case 1:
                cout << "enter the number u want to search" << endl;
                cin >> a;
                l.find(a);
                break;
            case 2:
                l.makeEmpty();
                break;
            case 3 :
                l.printList();
                break;
            case 4:
                cout << "enter positioin K " << endl;
                cin >> k;
                l.findKth(k);
                break;
            case 5:
                l.insert();
                break;
            case 6:
                l.deleteposition();
                break;
            case 7:
                l.deletenumber();
                break;
            case 8:
                EXIT_SUCCESS;
            default:
                cout << "enter a valid number" << endl;
                break;
        }
    }
}