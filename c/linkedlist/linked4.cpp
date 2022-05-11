#include 
class node{
    public:
        int key;       
        int data;
        node* next;
        node(){
            key = 0;
            data =0;
            next = NULL;
        }
        node(int k,int d){
            key = k;
            data = d;
            next = NULL;
        }
}
int main(){
    node n1(1,10);
    node n2(2,20);
    
}