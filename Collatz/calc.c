#include <stdio.h>
#include <time.h>

int collatz(long long i){
  long long cnt = 0;
  while( i != 1){
    cnt++;
    if (i % 2 == 0){
      i /= 2;
    }else{
      i *= 3;
      i ++;
    }
  }
  return cnt;
}

int main() {
  clock_t begin, end;
  begin = clock();
  long n = 1000000;
  long long acc = 0;
  for (long i = 1 ; i <= n ; i++){
    acc += collatz(i);
  }
  end = clock();
  printf("結果[%lld],処理時間[%lf][s]\n",acc,difftime(end, begin) / CLOCKS_PER_SEC);

}



