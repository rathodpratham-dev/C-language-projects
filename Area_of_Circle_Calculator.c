#include<stdio.h>

int main() {
    float radius ;

    printf("Enter the Circle Radius: ") ;
    scanf("%f", &radius );
    
    printf("%f", 3.14 * radius * radius);

    return 0 ;
}