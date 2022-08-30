#include "linkedlist.h"


void insert_before(node *old, node *new_) {
    node *temp;
    temp = old->before;
    old->before = new_;
    new_->after = old;
    new_->before = temp;
    if (temp != 0) {
        temp->after = new_;
    }
}

void insert_after(node *old, node *new_) {
    node *temp;
    temp = old->after;
    old->after = new_;
    new_->before = old;
    new_->after = temp;
    if (temp != 0) {
        temp->before = new_;
    }
}

void remove_node(node *old) {
    if (old->before != 0) {
        old->before->after = old->after;
    }
    if (old->after != 0) {
        old->after->before = old->before;
    }
}