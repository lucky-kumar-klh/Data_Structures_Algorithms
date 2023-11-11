#include <stdio.h>
int main(){
    int n, digit, count, dup;
    scanf("%d", &n);
    for (int i = 0; i < 10; i++){
        count = 0;
        dup = n;
        while ( dup ){
            if ( i == dup%10 ) count++;
            dup /= 10;
        }
        printf("%d ", count);
    }
    
    return 0;
}