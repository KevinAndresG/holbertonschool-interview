<h3>Data structures</h3>

<p>Please use the following data structures and types for binary trees. Don&rsquo;t forget to include them in your header file.</p>

<h4>Basic Binary Tree</h4>

<pre><code>/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
</code></pre>

<h4>Max Binary Heap</h4>

<pre><code>typedef struct binary_tree_s heap_t;
</code></pre>

<h3>Print function</h3>

<p>To match the examples in the tasks, you are given <a href="https://github.com/holbertonschool/0x1C.c" title="this function" target="_blank">this function</a></p>

<p>This function is used only for visualisation purpose. You don&rsquo;t have to push it to your repo. It may not be used during the correction</p>
