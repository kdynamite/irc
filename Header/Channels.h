//
// Created by realdypson on 3/13/20.
//

#ifndef IRCSERVER_CHANNELS_H
#define IRCSERVER_CHANNELS_H
struct channel{
    char *name;
    char *topic;
    struct linked_list *operators;
    struct linked_list *users;
};
#endif //IRCSERVER_CHANNELS_H
