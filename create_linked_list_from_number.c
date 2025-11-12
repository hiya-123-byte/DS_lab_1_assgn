#include <stdio.h>
#include<stdlib.h>
struct node {int data; struct node *next;};
struct node * create (long n) {
struct node *h= NULL, *t = NULL, *p;
int d[20],c=0;
while(n) {d[c++]=n%10;n/=10;}
for (int i = c-1; i>=0;i--){
p = malloc(sizeof(*p));
p->data=d[i];p->next = NULL;
if (!h) h=t=p; else t->next = p;t=p;
}
return h;
}
void show(struct node *h) {
while(h){ printf("%d",h->data);h=h->next;}
printf("\n");
}
int main(){
long n;
printf("Enter a number: ");
scanf("%ld", &n);
show (create (n));
return 0;
}