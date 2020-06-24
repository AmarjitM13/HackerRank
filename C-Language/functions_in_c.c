#include <stdio.h>

int max_of_four(int num1, int num2);
int num1(int a,int b);
int num2(int c,int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(num1(a, b),num2(c, d));
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int num1, int num2){
    if (num1>=num2){return (num1);
    }
    else {
    return (num2);
    }
}

int num1(int a,int b){
    if (a>=b) {
        return (a);
    }
    else {
        return (b);
    }
}

int num2(int c,int d){
    if (c>=d) {
        return (c);
    }
    else {
        return (d);
    }
}

