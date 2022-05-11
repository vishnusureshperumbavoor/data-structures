#include <iostream>
using namespace std;
template <typename T>
class list{
    public :
    int i,flag=0,lim,arr[100],position,element,delpos,delnum,j;
        list();
        void find(T);
        void makeEmpty();
        void printList();
        void findKth(T);
        void insert();
        void deleteposition();
        void deletenumber();
};
template <typename T>
list<T> :: list(){
    cout << "enter limit of the array" << endl;
    cin >> lim;
    cout << "enter " << lim << " numbers" << endl;
    for (i = 0; i < lim; i++)
    {
        cin >> arr[i];
    }
}
template <typename T>
void list<T> :: find(T ele){
    for(i=0;i<lim;i++){
        if(arr[i]==ele){
            flag++;
            break;
        }
    }
    if(flag){
        cout << "entered element found at postion " << i+1 << endl;
        flag--;
    }
    else
        cout << "entered element not found" << endl;
}
template <typename T>
void list<T> :: makeEmpty(){
    fill_n(arr,lim,0);
    cout << "array emptied successfully" << endl;
}
template <typename T>
void list<T> :: printList(){
    for(i=0;i<lim;i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}
template <typename T>
void list<T> :: findKth(T ele){
    if(ele>lim)
        cout << "entered positon doesnt exits" << endl;
    else
        cout << "element at postion " << ele << " is " << arr[ele-1] << endl;
}
template <typename T>
void list<T> :: insert(){
    cout << "enter the position u want to insert" << endl;
    cin >> position;
    cout << "enter the element u want to insert" << endl;
    cin >> element;
    for(i=lim-1;i>=position-1;i--){
        arr[i+1] = arr[i];
    }
    arr[position-1] = element;
    lim++;
    cout << element << " inserted successfully" << endl;
}
template <typename T>
void list<T> :: deleteposition(){
    cout << "enter the postion u want to delete" << endl;
    cin >> delpos;
    for(i=delpos;i<lim;i++){
        arr[i-1] = arr[i];
    }
    lim--;
    cout << "element at postion " << delpos << " is deleted" << endl;
}
template <typename T>
void list<T> :: deletenumber(){
    cout << "enter the number u want to delete" << endl;
    cin >> delnum;
    for(i=0;i<lim;i++){
        if(arr[i]==delnum){
            flag++;
            break;
        }
    }
    if(flag){
        for(j=i+1;j<lim;j++){
            arr[j-1] = arr[j];
        }
        flag--;
        lim--;
    }
    else{
        cout << "entered number does not exist in the array" << endl;
    }
    cout << delnum << " is deleted " << endl;
}