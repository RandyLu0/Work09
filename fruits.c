#include "fruits.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fruit * new_fruit(int quantity, char * type){
    struct fruit *nf;
    nf = malloc(sizeof(struct fruit));
    strncpy(nf->name,type,sizeof(nf->name)-1);
    nf->stock = quantity;
    return nf;
}

void print(struct fruit *f){
    printf("%s: %d\n",f->name,f->stock);
}

void purchase(struct fruit *f){
    if(f->stock){
        f->stock--;
    }    
}


