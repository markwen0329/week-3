#include <stdio.h>
using namespace std;
int main() {
    int a, b, product;
    printf("Please input two numbers : ");
    scanf("%d", &a);
    scanf("%d", &b);
 
    if(a > b ){
        printf(" a > b\n ");
    }else if (a < b) {
        printf(" a < b\n ");
    }else{
      printf("a = b a=%d\n", a);
    }   
    
     return 0;
}
