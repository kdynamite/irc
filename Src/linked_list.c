//
//Created by realdypson on 3/13/20.
//
#include "../Header/linked_list.h"
#include <stdlib.h>
 void linked_list_addNode(struct linked_list_node **head, void *data){
    struct linked_list_node* node = malloc(sizeof(struct linked_list_node));
    node->next=*head;
    node->data=data;
    *head=node;
}

struct linked_list_node* linked_list_getNext(struct linked_list_node *node){
    return node->next;
}

struct linked_list_node* linked_list_getnode (struct linked_list_getnode *head, void *data) {
    struct linked_list_node *node = head;
    while (node->data != data && node != NULL) {
        node = node->next;
    }
}

void linked_list_deleteNode(struct linked_list_node *head, struct linked_list_node *node) {
        struct linked_list_node *ptr = head;
        while (ptr->next != node && ptr != NULL) {
            ptr = ptr->next;
        }
        if (ptr != NULL) {
            ptr->next = node->next;
            free(node);
        }
}
int linked_list_size(struct linked_list_node *head){
    int size=0;
    struct linked_list_node *ptr = head;
    while (ptr!=NULL){
        ptr=ptr->next;
        size++;
    }
    return size;
}
