#include <stdio.h>
#include <string.h>
# define N 100
char s[N]; int t=-1;
void push(char c) { if (t<N-1) s[++t]=c;}
char pop() { return t ==-1?'\0': s[t--];}
int main (){
char str [N];
printf("Enter string: ");
fgets (str, N, stdin);
str[ strcspn (str, "\n")]=0;
for (int i=0; str[i]; i++) {push(str[i]);}
printf("Reversed: ");
while (t != -1) {printf("%c", pop());}
printf("\n");
return 0;
}