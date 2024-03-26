# binary_trees

A binary tree is a tree data structure in which each parent node can have at most two children. Each node of a binary tree consists of three items:

- data item

- address of left child

- address of right child

![logo](https://cdn.programiz.com/sites/tutorial2program/files/binary_tree_1.png)

## Binary Tree Representation
A node of a binary tree is represented by a structure containing a data part and two pointers to other structures of the same type.

```
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
```
![logo_2](https://cdn.programiz.com/sites/tutorial2program/files/binary-tree-representation_0.png)
