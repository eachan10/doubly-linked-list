typedef struct Node{
    struct Node *before;
    struct Node *after;
    int val;
} node;

void insert_before(node *old, node *new_);
void insert_after(node *old, node *new_);
void remove_node(node *old);