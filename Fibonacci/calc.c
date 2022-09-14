#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fib(int n)
{
    if (n < 2) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main(int argc, char *argv[])
{
    clock_t begin, end;

    int n = 39;

    begin = clock();
    int result = fib(n);
    end = clock();

    printf("結果[%d],処理時間[%lf][S]\n",result,difftime(end, begin) / CLOCKS_PER_SEC);
    
    return 0;
}