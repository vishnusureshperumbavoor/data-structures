#include <iostream>
using namespace std;
template <class T>
class BST{
    class treenode{
        friend class BST;
        T data;
        treenode *lchild,*rchild;
        treenode(T d,treenode *l,treenode *r){
            data = d;
            lchild = l;
            rchild = r;
        }
    }*root;
    pubic :
    BST();
    void insert(T);
    void delbst();
    void preorder();
    void postorder();
    void inorder();
};
template <typename T>
BST<T> :: BST(){
    root= NULL;
}
template <typename T>
void BST<T> :: insert(T value){
    node *temp = new node(value);
    treenode *p=root,*q;
    while(p!=NULL){
        q=p;
        if(value<p->data)
            p = p->left;
        else
            p = p->right;
    }  
    if(root==NULL)
        root = temp;
    else if(value < q->data)
        q->left = temp;
    else 
        q->right = temp;
}
template <typename T>
void BST<T> :: delbst(T data){
    
}
template <typename T>
void BST<T> :: inorder(T data){
    
}
template <typename T>
void BST<T> :: preorder(T data){
    
}
template <typename T>
void BST<T> :: postorder(T data){
    
}
int main(){
    BST<int> b ;
    int num, data;
    while(num!=6){
        cout << "1.insert\n2.delete\n3.preorder\n4.postorder\n5.inorder\n6.exit" << endl;
        cin >> num;
        switch(num){
            case 1:
                cout << "enter number to insert" << endl;
                cin >> data;
                b.insert(data);
                break;
            case 2:
                b.delbst();
                break;
            case 3:
                b.preorder();
                break;
            case 4:
                b.postorder();
                break;
            case 5:
                b.inorder();
                break;
        }
    }
    
}