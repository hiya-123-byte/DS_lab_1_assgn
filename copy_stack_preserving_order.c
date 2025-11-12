#include <stdio.h>
# define N 5
int s1[N],s2 [N], t[N], t1 = -1, t2 = -1, tt = -1;
void push (int s[], int *tp, int v) {s[++*tp] = v;}
int pop (int s[], int*tp) { return s[(*tp)--];}
void copy(){
while (t1!=-1) push(t, &tt, pop(s1,&t1));
while (tt!= -1) { int v=pop(t, &tt); push(s1,&t1, v); push(s2,&t2, v);}
}
void disp(int s[], int tp) {
for (int i=tp; i>= 0; i--) {
printf("%d\n", s[i]);
}
}
int main(){
push(s1,&t1,10);
push(s1,&t1,20);
printf("Original: \n");
disp( s1, t1);
copy();
printf( "\n Copied: \n");
disp (s2,t2);
return 0;
}