#include<stdio.h>
#include<stdlib.h>
int main(){
  char *p = malloc(101);
  int s[26],m=0, a=97;
  for(int i=0; i<26;i++)s[i]=-1;
  scanf("%s", p);
  //모든 입력된 모든 문자에 대해 a~z까지 1:1 비교 로직 -> 비효율적
  while(1){
    if(*(p+m)=='\0')break; // 비교가 끝났을때
    else if(*(p+m)==a){//a~z까지 비교 중 일치할 때
     if(s[a-97]==-1)s[a-97]=m;
      m++;
      a=97;
    }else if(a==122 && *(p+m)!=a){//a~z까지 비교 중 하나도 일치하지 않을때 
      m++;
      a=97;
    }else{//a~z까지 순회할 때
      a++;
    };
  }
  for(int i=0; i<26;i++)printf("%d ",s[i]);
  free(p);
  return 0;
}
// --- AI 질문을 통한 코드 길일 단축
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//   char *p = malloc(101);
//   int s[26],m=0, a=97;
//   for(int i=0; i<26;i++)s[i]=-1;
//   scanf("%s", p);
//   for(m;*(p+m)!='\0';m++){//문자 하나마다 바로 배열에 위치 계산
//     if(s[*(p+m)-97]==-1)s[*(p+m)-97]=m;
//   }
//   for(int i=0; i<26;i++)printf("%d ",s[i]);
//   free(p);
// }
//   return 0;