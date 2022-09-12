#include <stdio.h>
#include <chrono>

int collatz(long i){
      long cnt = 0;
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
  std::chrono::system_clock::time_point  start, end; // 型は auto で可
  start = std::chrono::system_clock::now(); // 計測開始時間
  long n = 100000;
  long acc = 0;
    for (long i = 1 ; i < n ; i++){
      acc += collatz(i);
      acc %= 1000000007;
    }
   end = std::chrono::system_clock::now();  // 計測終了時間
   double elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count(); //処理に要した時間をミリ秒に変換

   printf("結果[%ld],処理時間[%f]\n",acc,elapsed);

}



