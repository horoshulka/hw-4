class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def preorder_traversal(root):
    if root is None:
        return
    print(root.data, end=' ')
    preorder_traversal(root.left)
    preorder_traversal(root.right)

def inorder_traversal(root):
    if root is None:
        return
    inorder_traversal(root.left)
    print(root.data, end=' ')
    inorder_traversal(root.right)

def postorder_traversal(root):
    if root is None:
        return
    postorder_traversal(root.left)
    postorder_traversal(root.right)
    print(root.data, end=' ')

# Пример использования
if __name__ == "__main__":
    # Создание дерева: 1 -> 2, 3; 2 -> 4, 5
    root = TreeNode(1)
    root.left = TreeNode(2)
    root.right = TreeNode(3)
    root.left.left = TreeNode(4)
    root.left.right = TreeNode(5)

    print("Прямой обход (Preorder):")
    preorder_traversal(root)  # 1 2 4 5 3
    print("\nСимметричный обход (Inorder):")
    inorder_traversal(root)   # 4 2 5 1 3
    print("\nОбратный обход (Postorder):")
    postorder_traversal(root) # 4 5 2 3 1
# вывод программы
   def fibonacci(n, memo={}):
       if n in memo:
           return memo[n]
       if n <= 1:
           return n
       memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo)
       return memo[n]
