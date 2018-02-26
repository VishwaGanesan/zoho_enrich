#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  int rotate,i,len;
  scanf("%s%d",str,&rotate);
  len=strlen(str);
  if(rotate>len)
  {
  	rotate=rotate%len;
  }
  for(i=rotate;str[i]!='\0';i++){
      printf("%c",str[i]);
  }
  for(i=0;i<rotate;i++){
      printf("%c",str[i]);
  }
  return 0;
}
