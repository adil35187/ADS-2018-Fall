#include <iostream>
using namespace std;
 
struct node{
    node * right;
    node * left;
    node * parent;
    int val;
    int level;
   
    node(int x){
        val = x;
        level = -1;
        left = NULL;
        right = NULL;
    }
};
 
node * add(node * root, int x){
    node * n = new node(x);
   
    if(root == NULL){
        root = n;
        root->level = 0;
    }else{
       
        if(root->val < x){
            if(root->right == NULL){
                root->right = n;
                root->right->level = root->level + 1;
                root->right->parent = root;
            }else{
                add(root->right, x);
            }
        }else if(x < root->val){
            if(root->left == NULL){
                root->left = n;
                root->left->level = root->level + 1;
                root->left->parent = root;
            }else{
                add(root->left, x);
            }
        }
       
    }
    return root;
}
int maxh(node * n, int max){
    if(n == NULL) return max;
    if(n->level > max) max = n->level;
    max = maxh(n->left, max);
    max = maxh(n->right, max);
    return max;
}
 
int main(int argc, const char * argv[]) {
   
    node * root = NULL;
   
    int a;
    while (cin >> a) {
        if(a == 0) break;
        root = add(root, a);
    }
   
   
    cout << maxh(root, -1) + 1;
   
   
   
   
    return 0;
}
