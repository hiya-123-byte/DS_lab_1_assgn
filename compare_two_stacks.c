#include <stdio.h>
# define N 5
int s1[N], s2[N], t1=-1, t2=-1;
void push (int s[], int *t, int v){s[++*t]=v;}
int eq(){
if (t1!=t2) return 0;
for(int i=0; i<=t1;i++){
if (s1[i]!= s2[i])
return 0;
}
return 1;
}
int main (){
push (s1,&t1,10);
push (s1,&t1,20);
push (s1,&t1,30);
push (s2,&t2,10);
push (s2,&t2,20);
push (s2,&t2,30);
printf(eq()?" Stacks equal \n" : " Stacks not equal \n");
return 0;
}