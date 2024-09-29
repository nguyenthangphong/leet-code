#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int height_tree(struct TreeNode *root);
bool is_balanced(struct TreeNode *root);

int height_tree(struct TreeNode *root)
{
    if (!root)
    {
        return 0;
    }

    int height_left = height_tree(root->left);
    int height_right = height_tree(root->right);
    
    return (height_left > height_right) ? (height_left + 1) : (height_right + 1);
}

bool is_balanced(struct TreeNode *root)
{
    if(!root)
    {
        return true;
    }

    int height_left = height_tree(root->left);
    int height_right = height_tree(root->right);

    if (abs(height_left - height_right) <= 1)
    {
        return is_balanced(root->left) && is_balanced(root->right);
    }
    else
    {
        return false;
    }
}

int main(void)
{
    struct TreeNode *root1 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root1->val = 3;

    root1->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root1->left->val = 9;
    root1->left->left = NULL;
    root1->left->right = NULL;

    root1->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root1->right->val = 20;

    root1->right->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root1->right->left->val = 15;
    root1->right->left->left = NULL;
    root1->right->left->right = NULL;

    root1->right->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root1->right->right->val = 7;
    root1->right->right->left = NULL;
    root1->right->right->right = NULL;

    printf("Output: %d\n", is_balanced(root1));

    free(root1->right->right);
    free(root1->right->left);
    free(root1->right);
    free(root1->left);
    free(root1);


    struct TreeNode *root2 = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root2->val = 1;

    root2->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root2->left->val = 2;

    root2->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root2->right->val = 2;
    root2->right->left = NULL;
    root2->right->right = NULL;
    
    root2->left->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root2->left->left->val = 3;

    root2->left->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root2->left->right->val = 3;

    root2->left->left->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root2->left->left->left->val = 4;

    root2->left->left->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root2->left->left->right->val = 4;

    printf("Output: %d\n", is_balanced(root2));

    free(root2->left->left->right);
    free(root2->left->left->left);
    free(root2->left->right);
    free(root2->left->left);
    free(root2->right);
    free(root2->left);
    free(root2);

    return 0;
}