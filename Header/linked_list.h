//
// Created by realdypson on 3/13/20.
//

#ifndef IRCSERVER_LINKED_LIST_H
#define IRCSERVER_LINKED_LIST_H
struct linked_list_node{
    struct linked_list_node *next;
    void *data;
};

struct channel_node{
    struct channel *channel_data;
    struct channel_node *next;
};

void linked_list_addNode(struct linked_list_node **head, void *data);
struct linked_list_node* linked_list_getNext(struct linked_list_node *node);
struct linked_list_node* linked_list_getNode( struct linked_list_node *head, void *data);
void linked_list_deleteNode(struct linked_list_node *head, struct linked_list_node *node);
int linked_list_size(struct linked_list_node *head);
#endif //IRCSERVER_LINKED_LIST_H
