#include <stdio.h>
# define N 100
char s[N]; int t = -1;
void push (char c) { s[++t] = c;}
char pop() { return t ==-1?'\0': s[t--];}
int bal (char e[]){
for (int i = 0; e[i]; i++){
char c=e[i];
if (c == '('||c=='[') push(c);
else if (c== ')'||c==']'||c=='}'){
if (t ==-1) return 0;
char x = pop();
if ((c == ')' &&x!= '(')||(c == ']'&&x!= '[')||(c=='}'&&x!= '{')) return 0;
}
}
return t==-1;
}
int main(){
char e[N];
printf( "Enter exp: ");
scanf ("%s", e);
printf (bal (e)?" Balanced \n" : "Not balanced \n");
return 0;
}