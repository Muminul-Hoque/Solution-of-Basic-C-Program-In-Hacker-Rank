#include <stdio.h>
#include<math.h>

void update(int *a,int *b,int *c,int *d) {
    // Complete this function
    (*a)=(*c);
    (*b)=(*d);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("Enter the value of a & b : ");
    scanf("%d %d", &a, &b);
    int c=a+b;
    int d=abs(a-b);
    int *pc=&c, *pd=&d;
    update(pa, pb,pc,pd);
    printf("%d\n%d", a, b);

    return 0;
}
