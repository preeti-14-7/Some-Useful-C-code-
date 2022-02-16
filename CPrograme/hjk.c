#include <stdio.h>

extern void _exit(register int);

int _start(){
    printf("hello world\n");
    _exit(0);
}
