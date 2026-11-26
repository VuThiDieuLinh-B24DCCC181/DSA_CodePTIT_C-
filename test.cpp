// Nơi để code test linh tinh của Linh



#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

int search(int *M, int n, int x) {
    for(int i = 0; i < n; i++) {
        if(M[i] == x) return i;
    }
    return -1;
}

// Buoc 1: Dung cay tu Inorder va Preorder
Node* Create(int *M, int n, int *N) {
    if(n == 0) return NULL;

    int x = search(M, n, N[0]);

    Node* root = new Node;
    root->data = N[0];

    root->left = Create(M, x, N + 1);
    root->right = Create(M + x + 1, n - x - 1, N + x + 1);

    return root;
}

// Buoc 2: Duyet Postorder
void Postorder(Node* root) {
    if(root == NULL) return;

    Postorder(root->left);
    Postorder(root->right);

    cout << root->data << " ";
}

// Giai phong bo nho
void DeleteTree(Node* root) {
    if(root == NULL) return;

    DeleteTree(root->left);
    DeleteTree(root->right);

    delete root;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int M[1000], N[1000];

        for(int i = 0; i < n; i++)
            cin >> M[i];

        for(int i = 0; i < n; i++)
            cin >> N[i];

        Node* root = Create(M, n, N);

        Postorder(root);
        cout << "\n";

        DeleteTree(root);
    }

    return 0;
}
