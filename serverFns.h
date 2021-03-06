#ifndef _SERVER_FUNCTIONS_HEADER_
#define _SERVER_FUNCTIONS_HEADER_
#include "server.h"

/* creates a new server object listening on the given port */
Server * makeServer(unsigned short port);

int startServer(Server * srv);

int stopServer(Server * srv);

void delServer(Server * srv);

#endif /* _SERVER_FUNCTIONS_HEADER_ */
