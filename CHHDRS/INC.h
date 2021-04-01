#pragma once

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <time.h>
#include <fcntl.h>
#include <sys/epoll.h>
#include <errno.h>
#include <pthread.h>
#include <signal.h>
#include <ctype.h>
#include <arpa/inet.h>
#include <dirent.h>
#include <linux/limits.h>

#define STDIN 0
#define STDOUT 1
#define STDERR 2

#define INET_ADDR(o1,o2,o3,o4) (htonl((o1 << 24) | (o2 << 16) | (o3 << 8) | (o4 << 0)))
typedef uint32_t ipv4_t;
ipv4_t LOCAL_ADDR;

#define AXISY ""W"["R"+"W"]"
#define AXISN ""W"["R"-"W"]"
#define R "\x1b[38;5;129m"
#define W "\x1b[38;5;124m"
#define Y "\x1b[1;95m"
