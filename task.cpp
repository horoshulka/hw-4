#include <iostream>
using namespace std;

// Структура узла дерева
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Прямой обход (Preorder): узел → левое поддерево → правое поддерево
void preorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Симметричный обход (Inorder): левое поддерево → узел → правое поддерево
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

// Обратный обход (Postorder): левое поддерево → правое поддерево → узел
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

// Функция для освобождения памяти (удаления дерева)
void deleteTree(TreeNode* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    // Создание дерева: 1 -> 2, 3; 2 -> 4, 5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Прямой обход (Preorder): ";
    preorderTraversal(root);  // 1 2 4 5 3
    cout << "\nСимметричный обход (Inorder): ";
    inorderTraversal(root);   // 4 2 5 1 3
    cout << "\nОбратный обход (Postorder): ";
    postorderTraversal(root); // 4 5 2 3 1
    cout << endl;

    // Освобождение памяти
    deleteTree(root);

    return 0;
}
// Вывод программы
Прямой обход (Preorder): 1 2 4 5 3
Симметричный обход (Inorder): 4 2 5 1 3
Обратный обход (Postorder): 4 5 2 3 1
