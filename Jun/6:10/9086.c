#include<stdio.h>
#include<stdlib.h>
int main(){
  int i=0,t,co=0;
  scanf("%d",&t);// 진행할 문자열의 수
  getchar();// scanf를 처리하고 남은 개행문자 제거
  while(co!=t){
    char *p = malloc(1001); // \n을 고려한 최대길이의 +1
    while(scanf("%c",p+i)==1){
      if(*(p+i)=='\n') break;//\n 기준으로 문자열 하나씩 파싱
      i++;
    };
    printf("%c%c\n",*p,*(p+i-1));//첫문자, 마지막 문자(\n을 고려한 길이-1)
    co++;
    i=0;
    free(p);//동적할당 제거
  }
return 0;
}