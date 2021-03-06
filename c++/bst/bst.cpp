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
    public:
    BST();
    void insert(T);
    void del(T);
    void delbst(treenode *,T);
    void preord();
    void inord();
    void postord();
    void inorder(treenode *);
    void preorder(treenode *);
    void postorder(treenode *);
    int find(T);
    T findmin(treenode *);
};
template <typename T>
BST<T> :: BST(){
    root= NULL;
}
template <typename T>
void BST<T> :: insert(T value){
    treenode *p = root, *parent;
    while(p!=NULL){
        parent=p;
        if(value < p->data)
            p = p->left;
        else
            p = p->right;
    }
    if(root==NULL)
        root = new treenode(value);
    else if(value < parent->data)
        parent->left = new treenode(value);
    else
        parent->right = new treenode(value);
}
template <typename T>
int BST<T> :: find(T value){
    treenode *p = root;
    while(p!=NULL){
        if(value < p->data)
            p = p->left;
        else if(value > p->data)
            p = p->right;
        else
            break;
    }
    if(p!=NULL)
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
    if(find(value)){
        
        treenode *parent;
        while(temp->data!=value){
            parent = temp;
            if(value < temp->data)
                temp = temp->left;
            else
                temp = temp->right;
        }   
        if(temp->left == NULL && temp->right == NULL){
            if(temp==root){
                delete root;
                root = NULL;
            }
            else{
                if(temp->data < parent->data)
                    parent->left = NULL;
                else
                    parent->right = NULL;
                delete temp;
            }
        }
        else if(temp->left!=NULL && temp->right == NULL){
            if(temp==root)
                root = temp->left;
            else{
                if(temp->data<parent->data)
                    parent->left = temp->left;
                else
                    parent->right = temp->left;
            }
            delete temp;
        }
        else if(temp->left==NULL && temp->right != NULL){
            if(temp==root)
                root = temp->right;
            else{
                if(temp->data<parent->data)
                    parent->left = temp->right;
                else
                    parent->right = temp->right;
            }
            delete temp;
        }
        else{
            T temp2 = findmin(temp->right);
            delbst(temp,temp2);
            temp->data = temp2;
        }
    }
    else
        cout << "entered value doesnt exist" << endl;
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
    if(root==NULL)
        cout << "BST is empty" << endl;
    else
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
    if(root==NULL)
        cout << "BST is empty" << endl;
    else
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
    if(root==NULL)
        cout << "BST is empty" << endl;
    else
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
        cout << "\n1.insert\t2.delete\t3.preorder\t4.postorder\t5.inorder\t6.exit\t7.find" << endl;
        cin >> num;
        switch(num){
            case 1:
                cout << "enter number to insert" << endl;
                cin >> data;
                b.insert(data);
                break;
            case 2:
                cout << "enter the data to delete" << endl;
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
            case 7:
                cout << "enter the number to find" << endl;
                cin >> data;
                if(b.find(data))
                    cout << data << " exists" << endl;
                else 
                    cout << data << " doesn't exists" << endl;
                break;
        }
    }
    
}