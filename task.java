class TreeNode {
    int data;
    TreeNode left;
    TreeNode right;

    TreeNode(int val) {
        data = val;
        left = null;
        right = null;
    }
}

public class TreeTraversal {

    // Прямой обход (Preorder): узел → левое поддерево → правое поддерево
    public static void preorderTraversal(TreeNode root) {
        if (root == null) return;
        System.out.print(root.data + " ");
        preorderTraversal(root.left);
        preorderTraversal(root.right);
    }

    // Симметричный обход (Inorder): левое поддерево → узел → правое поддерево
    public static void inorderTraversal(TreeNode root) {
        if (root == null) return;
        inorderTraversal(root.left);
        System.out.print(root.data + " ");
        inorderTraversal(root.right);
    }

    // Обратный обход (Postorder): левое поддерево → правое поддерево → узел
    public static void postorderTraversal(TreeNode root) {
        if (root == null) return;
        postorderTraversal(root.left);
        postorderTraversal(root.right);
        System.out.print(root.data + " ");
    }

    public static void main(String[] args) {
        // Создание дерева: 1 -> 2, 3; 2 -> 4, 5
        TreeNode root = new TreeNode(1);
        root.left = new TreeNode(2);
        root.right = new TreeNode(3);
        root.left.left = new TreeNode(4);
        root.left.right = new TreeNode(5);

        System.out.println("Прямой обход (Preorder):");
        preorderTraversal(root);  // 1 2 4 5 3
        System.out.println("\nСимметричный обход (Inorder):");
        inorderTraversal(root);   // 4 2 5 1 3
        System.out.println("\nОбратный обход (Postorder):");
        postorderTraversal(root); // 4 5 2 3 1
    }
}
// Вывод программы:
Прямой обход (Preorder):
1 2 4 5 3
Симметричный обход (Inorder):
4 2 5 1 3
Обратный обход (Postorder):
4 5 2 3 1
