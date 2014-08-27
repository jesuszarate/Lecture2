#include <stdio.h>
#include <stdlib.h>

char * binaryString(int v){
  char * buffer = malloc(33);
  for (int j=31;j>=0;j--){
    int byte = v & (1<<j);
    byte >>= j;
    buffer[31-j] = byte ? '1' : '0';
  }
  buffer[32] = 0;
  return buffer;
}

int main() {

  int x = 0xAA;
  int y = 0x56;

  printf("int x = 0x%X; // %s\n", x, binaryString(x)+24 );
  printf("int y = 0x%X; // %s\n\n", y, binaryString(y)+24 );

  printf("x & y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x & y, binaryString(x & y)+24 );

  getc(stdin);
  printf("x && y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x && y, binaryString(x && y)+24 );

  getc(stdin);
  printf("x | y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x | y, binaryString(x | y)+24 );

  getc(stdin);
  printf("x ^ y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x ^ y, binaryString(x ^ y)+24 );

  getc(stdin);
  printf("x || y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x || y, binaryString(x || y)+24 );

  getc(stdin);
  printf("~x = ");
  getc(stdin);
  printf("0x%X (%s)\n", ~x, binaryString(~x)+24 );

  getc(stdin);
  printf("~y = ");
  getc(stdin);
  printf("0x%X (%s)\n", ~y, binaryString(~y)+24 );

  getc(stdin);
  printf("!x = ");
  getc(stdin);
  printf("0x%X (%s)\n", !x, binaryString(!x)+24 );

  getc(stdin);
  printf("!y = ");
  getc(stdin);
  printf("0x%X (%s)\n", !y, binaryString(!y)+24 );

  getc(stdin);
  printf("x << 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", x << 2, binaryString(x << 2)+24 );

  getc(stdin);
  printf("y << 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", y << 2, binaryString(y << 2)+24 );

  getc(stdin);
  printf("x >> 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", x >> 2, binaryString(x >> 2)+24 );

  getc(stdin);
  printf("y >> 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", y >> 2, binaryString(y >> 2)+24 );

}
#include <stdio.h>
#include <stdlib.h>

char * binaryString(int v){
  char * buffer = malloc(33);
  for (int j=31;j>=0;j--){
    int byte = v & (1<<j);
    byte >>= j;
    buffer[31-j] = byte ? '1' : '0';
  }
  buffer[32] = 0;
  return buffer;
}

int main() {

  int x = 0xAA;
  int y = 0x56;

  printf("int x = 0x%X; // %s\n", x, binaryString(x)+24 );
  printf("int y = 0x%X; // %s\n\n", y, binaryString(y)+24 );

  printf("x & y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x & y, binaryString(x & y)+24 );

  getc(stdin);
  printf("x && y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x && y, binaryString(x && y)+24 );

  getc(stdin);
  printf("x | y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x | y, binaryString(x | y)+24 );

  getc(stdin);
  printf("x ^ y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x ^ y, binaryString(x ^ y)+24 );

  getc(stdin);
  printf("x || y = ");
  getc(stdin);
  printf("0x%X (%s)\n", x || y, binaryString(x || y)+24 );

  getc(stdin);
  printf("~x = ");
  getc(stdin);
  printf("0x%X (%s)\n", ~x, binaryString(~x)+24 );

  getc(stdin);
  printf("~y = ");
  getc(stdin);
  printf("0x%X (%s)\n", ~y, binaryString(~y)+24 );

  getc(stdin);
  printf("!x = ");
  getc(stdin);
  printf("0x%X (%s)\n", !x, binaryString(!x)+24 );

  getc(stdin);
  printf("!y = ");
  getc(stdin);
  printf("0x%X (%s)\n", !y, binaryString(!y)+24 );

  getc(stdin);
  printf("x << 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", x << 2, binaryString(x << 2)+24 );

  getc(stdin);
  printf("y << 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", y << 2, binaryString(y << 2)+24 );

  getc(stdin);
  printf("x >> 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", x >> 2, binaryString(x >> 2)+24 );

  getc(stdin);
  printf("y >> 2 = ");
  getc(stdin);
  printf("0x%X (%s)\n", y >> 2, binaryString(y >> 2)+24 );

}
