#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define and &&
#define or ||


int main(){
    int a, b; 
    while(scanf("%d%d", &a, &b) != EOF) printf(a <= 100 and b <= 100 ? "inside\n" : "outside\n");
}
