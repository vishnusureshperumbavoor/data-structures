#include <iostream>
using namespace std;
template <class T>
class BST{
    class treenode{
        friend class BST;
        int data;
        treenode *left,*right;
        treenode(T d,treenode *l= NULL,treenode *r=NULL){
            data = d;
            left = l;
            right = r;
        }
    }*root;
    public :
    BST();
    void insert(T);
    void delbst(treenode *,T);
    void del(T);
    void preorder();
    void postorder();
    void inorder(treenode *);
    void inord();
    void preorder(treenode *);
    void preord();
    void postorder(treenode *);
    void postord();
    int find(T);
    T findmin(treenode *);
};
template <typename T>
BST<T> :: BST(){
    root= NULL;
}
template <typename T>
void BST<T> :: insert(T value){
    treenode *temp = new treenode(value);
    treenode *p = root, *q;
    while(p!=NULL){
        q=p;
        if(value < p->data)
            p = p->left;
        else
            p = p->right;
    }
    if(root==NULL)
        root = temp;
    else if(value< q->data)
        q->left = temp;
    else
        q->right = temp;
}
template <typename T>
int BST<T> :: find(T value){
    treenode *p = root;
    while(p!=NULL){
        if(value < p->data)
            p = p->left;
        else
            p = p->right;
    }
    if(p)
        return 1;
    else
        return 0;
}
template <typename T>
void BST<T> :: del(T value){
    delbst(root,value);
}
template <typename T>
void BST<T> :: delbst(treenode *temp,T value){
    treenode *q;
    if(find(value)){
        while(temp->data!=value){
        q=temp;
        if(value<temp->data)
            temp=temp->left;
        else
            temp=temp->right;
        }
    
        if(temp->left == NULL && temp->right == NULL){
            if(temp->data < q->data)
                q->left = NULL;
            else
                q->right = NULL;
            delete temp;
        }
        else if(temp->left!=NULL && temp->right == NULL){
            if(temp->data<q->data)
                q->left=temp->left;
            else
                q->right=temp->left;
            delete temp;
        }
        else if(temp->left==NULL && temp->right != NULL){
            if(temp->data<q->data)
                q->left=temp->right;
            else
                q->right=temp->right;
            delete temp;
        }
        else{
            T temp2 = findmin(temp->right);
            temp->data = temp2;
            delbst(temp->right,temp2);
        }
    }
    else{
        cout << "entered value doesnt exist" << endl;
    }
    
}
template <typename T>
T BST<T> :: findmin(treenode *temp){
    if(temp == NULL){
        cout << "error";
        return -1;
    }
    while(temp->left!=NULL)
        temp = temp->left;
    return temp->data;
}
template <typename T>
void BST<T> :: inord(){
    inorder(root);
}
template <typename T>
void BST<T> :: inorder(treenode *temp){
    if(temp){
        inorder(temp->left);
        cout << temp->data << "\t";
        inorder(temp->right);
    }
}
template <typename T>
void BST<T> :: preord(){
    preorder(root);
}
template <typename T>
void BST<T> :: preorder(treenode *temp){
    if(temp){
        cout << temp->data << "\t";
        preorder(temp->left);
        preorder(temp->right);
    }
}
template <typename T>
void BST<T> :: postord(){
    postorder(root);
}
template <typename T>
void BST<T> :: postorder(treenode *temp){
    if(temp){
        postorder(temp->left);
        postorder(temp->right);
        cout << temp->data << "\t";
    }
}
int main(){
    BST<int> b ;
    int num, data;
    while(num!=6){
        // cout << "1.insert\n2.delete\n3.preorder\n4.postorder\n5.inorder\n6.exit" << endl;
        cin >> num;
        switch(num){
            case 1:
                // cout << "enter number to insert" << endl;
                cin >> data;
                b.insert(data);
                break;
            case 2:
                // cout << "enter the data to delete" << endl;
                cin >> data;
                b.del(data);
                break;
            case 3:
                b.preord();
                break;
            case 4:
                b.postord();
                break;
            case 5:
                b.inord();
                break;
        }
    }
    
}