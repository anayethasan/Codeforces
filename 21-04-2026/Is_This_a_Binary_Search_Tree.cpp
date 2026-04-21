#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_binary_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root)
        q.push(root);

    while (!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* child_l, *child_r;
        if(l == -1) child_l = NULL;
        else child_l = new Node(l);
        if(r == -1) child_r = NULL;
        else child_r = new Node(r);
        parent->left = child_l;
        parent->right = child_r;

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);    
    }
     return root;   
}

void print_level_order(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);    
    }
    cout << endl;
}

void inser_in_BST(Node* &root, int val)
{
    if(root == NULL)
        root = new Node(val);

    if(root->val > val)
    {
        if(root->left == NULL)
            root->left = new Node(val);
        else
            inser_in_BST(root->left, val);    
    }   
    else
    {
        if(root->right == NULL)
            root->right = new Node(val);
        else
            inser_in_BST(root->right, val);    
    } 
}

bool isBST(Node* &root, long long mn, long long mx)
{
    if(root == NULL)
        return true;
    
    if(root->val<= mn || root->val >= mx)
        return false;
    
    int l = isBST(root->left, mn, root->val);
    int r = isBST(root->right, root->val, mx);
    
    return l && r;
}

bool checkBST(Node* root) {
    return isBST(root, LLONG_MIN, LLONG_MAX);
}

int main()
{
    Node* root = input_binary_tree();
    int val;
    cin >> val;
    inser_in_BST(root, val);
    // print_level_order(root);

    bool ok = checkBST(root);

    cout << (ok ? "YES" : "NO") << '\n';
 
    return 0;
}