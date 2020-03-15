//
// Created by realdypson on 3/13/20.
//

#ifndef IRCSERVER_CLIENT_H
#define IRCSERVER_CLIENT_H

#include <netinet/in.h>

struct Channel{
    int *client_fd;
    struct sockaddr_in client_address;
    socklen_t client_length;
    char *nickName;
    char *fullName;
    char *ipAddress;
    char *hostName;
    char processing; //boolean
};


struct Client* client_getClientConnection(int);

struct linked_list_node *client_list_head;
struct pollfd *client_connections;
pthread_mutex_t client_connections_mutex;
pthread_cond_t clientPoll_cond;
int client_connections_num;
int client_connections_processing;
pthread_mutex_t client_connections_processing_mutex;
#endif //IRCSERVER_CLIENT_H
