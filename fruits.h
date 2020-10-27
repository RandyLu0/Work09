#ifndef FRUITS_H
#define FRUITS_H

struct fruit {
    int stock;
    char name[25];
};

void print(struct fruit *f);

struct fruit * new_fruit(int quantity, char * type);

void purchase(struct fruit *f);

#endif