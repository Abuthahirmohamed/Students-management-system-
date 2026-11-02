#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct std
{
    int roll;
    char name[30];
    float per;
    struct std *next;
}ST;

void std_add(ST **);
void std_del(ST **);
void std_show(ST *);
void std_mod(ST *);
void std_sort(ST *);
void save_file(ST *);
void load_file(ST **);
