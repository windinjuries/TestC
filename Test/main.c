#define _GNU_SOURCE
#include "inc/main.h"
#include "inc/sub.h"
#include <pthread.h>
#include <bits/pthreadtypes.h>
#include <syslog.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
typedef int inta;
typedef int intb;
typedef int intc;
int main(int argc, char *argv[])
{
    //assert(argc == 2);
    int a[2][3] = {{0, 1, 2}, {3, 4, 5}};
    int(*p)[3] = a;
    printf("%d\n", **p);
    printf("%d\n", **(p + 1));
}
