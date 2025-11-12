#include <stdio.h>
struct Frame{
int n; char s,d,a;
int st;
};
struct Frame s[50], t=-1;
void push (struct Frame f){ s[++t] = f ;}
struct Frame pop(){ return s[t--];}
void hanoi (int n, char s, char d, char a) {
struct Frame f= {n,s,d,a, 0};
push(f);
while (t!=-1){
f= pop();
if (f.n == 1){
printf(" Move disk %d from %c to %c\n", f.n, f.s,f.d);
continue;
}
if (f.st == 0){
f.st = 1; push ((struct Frame) { f.n-1, f.s, f.a,f.d, 0});
}
else{
printf ("Move disk %d from %c to %c\n", f.n,f.s, f.d);
push((struct Frame) { f.n-1, f.a,f.d,f.s,0});
}
}
}
int main(){
int n;
printf("Enter disks :");
scanf("%d",&n);
hanoi (n, 'A', 'C','B');
return 0;
}