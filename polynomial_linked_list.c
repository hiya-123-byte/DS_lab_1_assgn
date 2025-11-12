#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node {int c,p; struct node *next;};
struct node * create (int n){
struct node * h = NULL, *t = NULL, *p;
for (int i=0; i<n;i++){
p = malloc(sizeof(struct node *p));
printf("Enter coeff & pow: ");
scanf("%d %d", &p->c, &p->p);
p->next = NULL;
if (!h)h=t=p; else {t->next = p; t = p;}
}
return h;
}
void show (struct node *h) {
while(h) { printf ("%dx^%d", h->c, h->p); if (h->next) printf(" +");h=h->next;}
printf("\n");
}
float eval (struct node*h, float x){
float s=0; while(h){ s+=h->c * pow(x,h->p); h = h->next; } return s;
}
int main(){
int n; float x;
printf ("Terms: ");
scanf("%d", &n);
struct node *h = create(n);
printf("Poly: "); show(h);
printf("x: "); scanf("%f", &x);
printf ("Value: %.2f\n", eval(h, x));
return 0;
}