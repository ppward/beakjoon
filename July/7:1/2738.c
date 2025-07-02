#include<stdio.h>
void scanArray(int fir, int sec, int arr[fir][sec]){
  int count=0;
  for(int i=0;i<sec;i++){
    if(count==fir) break;
    scanf("%d",&arr[count][i]);
    if(count<fir&&i==sec-1){
      count++;
      i=-1;
    }
  }
}
void addPrintArray(int fir, int sec, int arr1[fir][sec],int arr2[fir][sec]){
  int count=0;
  for(int i=0;i<sec;i++){
    if(count==fir) break;
    printf("%d ",arr1[count][i]+arr2[count][i]);
    if(count<fir&&i==sec-1){
      count++;
      i=-1;
      printf("\n");
    }
  }
}
int main (){
  int o,p;
  scanf("%d %d",&o, &p);
  int m[o][p], n[o][p];
  int s=0;
  scanArray(o,p,m);
  scanArray(o,p,n);
  
  addPrintArray(o,p,m,n);
  return 0;
}
