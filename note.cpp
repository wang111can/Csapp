//  & ^ | + << >> ! ~

#include <stdio.h>
int isTmax(int x) {
  int y = ~x;
  int j = 1 << 31;
  int z = ~0;
  return !(x & y) & !((x | y) ^ z) & !(!(x + j));  // 
}
int main() {
    printf("%lld", -1e20 + (-1e20 + 1));
}