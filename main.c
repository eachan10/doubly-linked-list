#include <stdio.h>
#include "linkedlist.h"


#define INIT_NODE(n) {0, 0, n}
void print_list(node *head);

int main() {
    node node1 = INIT_NODE(1);
    node node2 = INIT_NODE(2);
    node node3 = INIT_NODE(3);
    node node4 = INIT_NODE(4);

    insert_after(&node1, &node2);
    insert_before(&node2, &node3);
    insert_after(&node2, &node4);

    print_list(&node1);

    remove_node(&node2);

    print_list(&node1);
}

void print_list(node *head) {
    node *current = head;
    while (current != 0) {
        printf("%d ", current->val);
        current = current->after;
    }
    putc('\n', stdout);
}