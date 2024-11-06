#include<stdio.h>
int main(){
int x=15;
printf("%d\n",x);// 15  15
printf("%d\n",--x);// 14  14
printf("%d\n",x--);// 14    13
printf("%d\n",x); //  13    13
return 0;
}
