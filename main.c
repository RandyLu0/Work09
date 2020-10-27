#include <stdlib.h>
#include <time.h>
#include "fruits.h"

int main(){
    srand(time(NULL));
    int available = rand() % 50;
    struct fruit *Apple = new_fruit(available, "apple");
    print(Apple);
    purchase(Apple);
    print(Apple);

    free(Apple);

    return 0;
}
