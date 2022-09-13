#include<stdio.h>
int main(){
  int i, n,m;
 
  printf("Enter the n and m values: ");
  scanf("%d%d", &n,&m);
 
  for(i=0;i<=m;i++)
  { 
  printf("%d x %d= %d\n", i,n, i*n);
}
  return 0;
}
