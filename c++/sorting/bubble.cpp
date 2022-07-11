#include <iostream>
using namespace std;
template <class T>
class bubble{
    int arr[5],num,i,j;
    public:
        void enterelement();
        void bubblesort();
};
template <typename T>
void bubble<T> :: enterelement(){
    cout << "Enter the number of elements" << endl;
    cin >> num;
    cout << "Enter the elements" << endl;
    for(i=0;i<num;i++){
        cin >> arr[i];
    }
}
template <typename T>
void bubble<T> :: bubblesort(){
    for(i=0;i<num-1;i++){
        bool flag=false;
        for(j=0;j<num-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag=true;
            }
        }
        if(flag==false){
            break;
        }
    }
    cout << "Sorted List" << endl;
    for(i=0;i<num;i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}
int main(){
    bubble<int>b;
    b.enterelement();
    b.bubblesort();
}