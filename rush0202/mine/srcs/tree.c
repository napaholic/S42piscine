#include "tree.h"

t_tree* tree_insert(t_tree** root, char* key, char* value) {
    int c;
    t_tree** temp = root;

    while (*temp != 0) {
        c = strcmp((*temp)->key, key);
        if (c == 0)
            return *temp;  //이미 있으면 해당 노드 반환
        else if (c > 0)
            temp = &((*temp)->left);
        else
            temp = &((*temp)->right);
    }

    *temp = (t_tree*)malloc(sizeof(t_tree));
    strcpy((*temp)->key, key);
    strcpy((*temp)->value, value);
    (*temp)->left = 0;
    (*temp)->right = 0;

    return *temp;
}

t_tree* tree_search(t_tree* root, char* key) {
    int c;
    t_tree* temp = root;

    while (temp != 0) {
        c = strcmp(temp->key, key);
        if (c == 0)
            return temp;
        else if (c > 0)
            temp = temp->left;
        else
            temp = temp->right;
    }

    return 0;
}

void show_tree(t_tree* root) {
    if (root != 0) {
        show_tree(root->left);
        printf(" * tree[%p]: %s:%s\n", root, root->key, root->value);
        printf("\n");
        show_tree(root->right);
    }
}

void delete_tree(t_tree* root) {
    if (root != 0) {
        delete_tree(root->left);
        delete_tree(root->right);
        free(root);
    }
}
