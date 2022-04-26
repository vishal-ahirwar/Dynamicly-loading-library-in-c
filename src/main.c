#include "add.h"
int main()
{
    action = add;

    printf("sum(5,5) = = %d\n", action(5, 5));

    action = sub;

    printf("sub(5,5) = = %d\n", action(5, 5));

    sayHello("hello, World !\n");

    return 0;
}
