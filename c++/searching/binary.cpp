#include <iostream>
using namespace std;
template <class T>
class binary{
    int data,size,i,mid;
    T arr[10];
    public:
        void enterelement();
        void search();
        void searchelement(int,int,int);
};
template <typename T>
void binary<T> :: enterelement(){
    cout << "Enter the number of elements" << endl;
    cin >> size;
    cout << "Enter the elements" << endl;
    for(i=0;i<size;i++){
        cin >> arr[i];
    }
}
template <typename T>
void binary<T> :: search(){
    cout << "Search Element" << endl;
    cin >> data;
    searchelement(0,size-1,data);
}
template <typename T>
void binary<T> :: searchelement(int low,int high,int data){
    mid = (low+high)/2;
    if(low>high){
        cout << data << " does not found" << endl;
    }
    else if(data==arr[mid]){
        cout << "Element found in position " << mid+1 << endl;
    }
    else if(data<arr[mid]){
        searchelement(low,mid-1,data);
    }
    else{
        searchelement(mid+1,high,data);
    }
}
int main(){
    binary <int> b;
    b.enterelement();
    b.search();
}