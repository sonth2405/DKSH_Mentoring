// No.1122 조건문1

#include <stdio.h>
int main() {
    int i=1, j=2;
    if (1) putchar('a');
    if (-1) putchar('b');
    if (2) putchar ('c');
    if (0) putchar('d');
    if (i<j) putchar('e');
    if (i==j) putchar('f');
    if (i>j) putchar('g');
    putchar('h');
    return 0;
}