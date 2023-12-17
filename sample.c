#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int letters = 0, words = 0, sentence = 0;
    printf("Enter your string: \n");
    scanf(" %[^\n]s",str);
    printf("Your string is:%s \n",str);
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'|| str[i] >= 'A' && str[i] <= 'Z'){
            letters++;
        }
        else if(str[i] == ' '){
            words++;
        }
        else if(str[i] == '.'){
            sentence++;
        }
    }
    printf("Number of letters = %d\n",letters);
    printf("Number of words = %d\n",words);
    printf("Number of sentences = %d\n",sentence);
    return 0;
}