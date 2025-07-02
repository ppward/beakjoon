#include<stdio.h>

int main(){
  int m, sum, max=0;
  scanf("%d",&m);
  int a[m];//배열 정의
  for(int i=0;i<m;i++){
    scanf("%d",a+i);
    sum+=*(a+i);//입력받는 동시에 합 계산
    if(max==0)max=*(a+i);//최대값이 없는경우 실행(맨 처음 실행)
    else if(max<*(a+i)) max=*(a+i);//최대값 변화 -> 현재 값으로 변경
    
  };
  printf("%.2f",(float)sum/max*100/m);// 현재점수합/최대값*100/과목수 = 변경된 평균값
}