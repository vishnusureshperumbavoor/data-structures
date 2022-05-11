package nonlineards.tree;
public class binarysearchtree {
    static class Node{
        int data;
        Node left,right;
        public Node(int data){
            this.data = data;
        }
    }
    Node root;
    public void insert(int data){
        Node currentNode = root;
        if(currentNode == null){
            root = new Node(data);
            return ;
        }
        while(true){
            if(data < currentNode.data){
                if(currentNode.left == null){
                    currentNode.left = new Node(data);
                    break;
                }else{
                    currentNode = currentNode.left;
                }
            }else{
                if(currentNode.right == null){
                    currentNode.right = new Node(data);
                    break;
                }else{
                    currentNode = currentNode.right;
                }
            }
        }
    }

    public boolean contains(int data){
        Node currentNode = root;
        while(currentNode != null){
            if(data < currentNode.data){
                currentNode = currentNode.left;
            }
            else if(data > currentNode.data){
                currentNode = currentNode.right;
            }
            else{
                return true;
            }
        }
        return false;
    }

    public void remove(int data){
        removeHelper(data,root,null);
    }
    public void removeHelper(int data,Node currentNode,Node parentNode){
        while(currentNode != null){
            if(data < currentNode.data){
                parentNode = currentNode;
                parentNode = currentNode.left;
            }
            else if (data>currentNode.data){
                parentNode = currentNode;
                currentNode = currentNode.right;
            }
            else{
               if(currentNode.left != null && currentNode.right != null){
                   currentNode.data = getMinValue(currentNode.right);
                   removeHelper(currentNode.data,currentNode.right,currentNode);
               } 
               else{
                   if(parentNode == null){
                       if(currentNode.right == null){
                           root = currentNode.left;
                       }
                       else{
                           root = currentNode.right;
                       }
                   }
                   else{
                       if(parentNode.left == currentNode){
                           if(currentNode.right == null){
                               parentNode.left = currentNode.left;
                           }
                           else{
                               parentNode.left = currentNode.right;
                           }
                       }
                       else{
                        if(currentNode.right == null){
                            parentNode.right = currentNode.left;
                        }
                        else{
                            parentNode.right = currentNode.right;
                        }
                       }
                   }
               }
               break;
            }
            
        }
    }
    public int getMinValue(Node currentNode){
        if(currentNode.left == null){
            return currentNode.data;
        }
        else{
            return getMinValue(currentNode.left);
        }
    }
    public static void main(String[] args) {
        binarysearchtree bst = new binarysearchtree();
        bst.insert(10);
        bst.insert(8);
        bst.insert(11);
        bst.remove(8);
        System.out.println(bst.contains(8));
    }

}
