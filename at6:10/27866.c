#include<stdio.h>
#include<stdlib.h>

int main(){
  char *p = malloc(1001);// \n을 고려한 최대길이의 +1
  int n;
  scanf("%s\n%d",p, &n);// 문자열과, 출력할 문자의 위치 스캔
  printf("%c",*(p+n-1));// 문자의 위치 출력
  free(p);//동적할당 제거
  return 0;
}