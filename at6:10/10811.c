#include <stdio.h>
int main(){
  int l,m ,a,b;
  scanf("%d %d",&l, &m);
  int n[l];
  for(int i=0;i<l;i++) *(n+i) = i+1;//배열에 숫자 채움
  while(scanf("%d %d", &a, &b)!= EOF){//교체할 범위 스캔
    while(a<b){//문자의 위치를 기반으로 역순 교체완료 시점
      int tmp = n[a-1];
      n[a-1]=n[b-1];
      n[b-1]= tmp;
      a++;//첫 문자의 위치 -> 한칸 뒤로
      b--;//뒷 문자의 위치 -> 한칸 앞으로
    }
  }
  for(int i=0;i<l;i++){
    printf("%d ",*(n+i));//문자열 출력
  }
  return 0;
}