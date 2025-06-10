#include<stdio.h>
#include<stdlib.h>
int main(){
  char *p= malloc(101);//n을 고려한 최대길이의 +1 길이생성
  int i=0;
  while(scanf("%c",p+i)==1){
    if(*(p+i)=='\n')break;//개행문자가 있을 시 중지
    i++;//추가된 문자의 갯수
  }
  printf("%d",i);
  free(p);//동적할당 제거
  return 0;
}