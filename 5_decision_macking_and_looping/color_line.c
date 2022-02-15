#include<stdio.h>

int main()
{
    /*black  ->\033[0;30m*/
    /*red    ->\033[0;31m*/
    /*greem  ->\033[0;32m*/
    /*yellow ->\033[0;33m*/
    /*blue   ->\033[0;34m*/  
    /*purple ->\033[0;35m*/
    /*cyan   ->\033[0;36m*/
    /*white  ->\033[0;37m*/
    printf("\033[0;31m");
    printf("       hello world!\n_________________________________");
    printf("\033[0m");  /*to rest default ->\033[om*/
    return 0;
}