#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildTree(node* root){
    cout<<"enter the element"<<endl;
    int d;
    cin>>d;
    root = new node(d);

    if(d==-1){
        return NULL;
    }
    cout<<"enter data in left"<<endl;
    root->left = buildTree(root->left);
    cout<<"enter data in right"<<endl;
    root->right = buildTree(root->right);
    return root;
    }

int main(){
    node* root = NULL;
    root = buildTree(root);
    return 0;
}

