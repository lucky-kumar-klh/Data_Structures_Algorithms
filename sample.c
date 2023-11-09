#include <stdio.h>
int main(){
    int arr[6] = {1,0,1000,3,-3,-3};
    int found = 0;
    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 6; j++)
            if ( arr[i] == arr[j] ) found = 1;
    }
    if ( found ) printf("Exist");
    else printf("Not Found");
    return 0;
}