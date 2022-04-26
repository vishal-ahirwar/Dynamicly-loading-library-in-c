#include <dlfcn.h>
#include <stdio.h>
int main(void)
{
    void *handle = 0;
    int (*act)(const int, const int) = 0;
    handle = dlopen("../build/libadd.so", RTLD_LAZY);
    if (!handle)
    {
        printf("failed to load libadd.so library!\n");
        return 1;
    };
    act = dlsym(handle, "cvxcv");
    if (dlerror() != NULL)
    {
        printf("failed to load sum()\n");
    }
    else
    {

        int sum = (*act)(45, 45);
        printf("45+45 = = %d\n", sum);
    };
    void (*say)(const char *) = dlsym(handle, "sayHello");
    if (dlerror() != NULL)
    {
        printf("failed to load sayHello()\n");
        return 1;
    };
    (*say)("Hello, There from dynamicly loaded library!\n");

    dlclose(handle);
    return 0;
}