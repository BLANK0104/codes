#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
        return root;
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

Node* findMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int data) {
    if (root == NULL) {
        return root;
    }
    else if (data < root->data) {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        else {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

bool search(Node* root, int data) {
    if (root == NULL) {
        return false;
    }
    else if (root->data == data) {
        return true;
    }
    else if (data < root->data) {
        return search(root->left, data);
    }
    else {
        return search(root->right, data);
    }
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Inorder traversal of the binary search tree: ";
    inorder(root);
    cout << endl;

    int key = 60;
    if (search(root, key)) {
        cout << key << " is present in the binary search tree." << endl;
    }
    else {
        cout << key << " is not present in the binary search tree." << endl;
    }

    root = deleteNode(root, 20);
    cout << "Inorder traversal of the binary search tree after deleting 20: ";
    inorder(root);
    cout << endl;

    root = deleteNode(root, 30);
    cout << "Inorder traversal of the binary search tree after deleting 30: ";
    inorder(root);
    cout << endl;

    root = deleteNode(root, 50);
    cout << "Inorder traversal of the binary search tree after deleting 50: ";
    inorder(root);
    cout << endl;

    return 0;
}