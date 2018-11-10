package lab5;

public class node {
    int val;
    node  left;
    node  right;
    int level;

    public node() {
        this.val = val;
        this.left = left;
        this.right = right;
        this.level = level;
        level = -1;
        left = null;
        right = null;

    }

    private Add(node root, int val){
        node n = new node(x);
        if (root = null)
        {
            root = n;
            root.level = 0;
        }else{
            if(x < root.val){
                if(root.left == null){
                    root.left = n;
                    root.left.level = root.level + 1;
                }else{
                    Add(root.left, x);
                }
            }else if(x > root.val){
                if(root.right == null){
                    root.right = n;
                    root.right.level = root.level + 1;
                }else{
                    add(root.right, x);
                }
            }
        }
        return root;
    }

    int rightmost(node root){
        if(root.right == null) return root.val;
        rightmost(root.right);
    }

    void print(node n){
        if(n == null) return;

        cout << n.val << " "  << n.level;
        print(n->left);
        print(n->right);
    }

}
