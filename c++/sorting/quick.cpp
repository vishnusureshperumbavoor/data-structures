#include <iostream>
using namespace std;
template <class T>class sort{
    T arr[5];
    int size,i,j;
    public :
        void enterelements();
        void quicksort(T [],int,int);
        int partition(T [],int,int);
        void swap(T*,T*);
        void sortedlist();
};
template <typename T>void sort<T> :: enterelements(){
    cout << "Enter the number of Elements" << endl;
    cin >> size;
    cout << "Enter the elements" << endl;
    for(i=0;i<size;i++){
        cin >> arr[i];
    }
    quicksort(arr,0,size-1);
}
template <typename T>void sort<T> :: quicksort(T arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
template <typename T>int sort<T> :: partition(T arr[],int low,int high){
    T pivot = arr[high];
    i = low-1;
    for(j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
template <typename T>void sort<T> :: sortedlist(){
    cout << "Sorted List" << endl;
    for(i=0;i<size;i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}
template <typename T>void sort<T> :: swap(T* num1,T* num2){
    T temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main(){
    sort<int> s;
    s.enterelements();
    s.sortedlist();
}