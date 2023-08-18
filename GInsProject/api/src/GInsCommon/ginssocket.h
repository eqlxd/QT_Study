#ifndef _GINSSOCKET_H_
#define _GINSSOCKET_H_

#include <arpa/inet.h>

#define SOCKADDR_VALIDLEN           8 /* (sizeof(SOCKADDR_IN) - sizeof(Sender->sin_zero)) */
#define INVALID_SOCKET              -1
#define SOCKET_ERROR                -1

typedef int SOCKET;
typedef struct sockaddr SOCKADDR;
typedef struct sockaddr *PSOCKADDR;
typedef struct sockaddr *LPSOCKADDR;

typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr_in *PSOCKADDR_IN;
typedef struct sockaddr_in *LPSOCKADDR_IN;

#endif // #ifndef _GINSSOCKET_H_
