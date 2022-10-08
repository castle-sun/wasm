#include <stdio.h>
#include <math.h>
#include <time.h>

double leibniz(int n)
{
    double s = 0.0;
    for (int i = 0; i<=n; i++) {
        s += pow(-1.0, i) / (2.0 * i + 1.0);
    }
    return s * 4;
}

int main(int argc, char *argv[])
{
    clock_t begin, end;
    begin = clock();

    int n = 100000000;
    double result = leibniz(n);

    end = clock();
    printf("結果[%lf],処理時間[%lf][S]\n",result,difftime(end, begin) / CLOCKS_PER_SEC);
    
    return 0;
}