#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter the word: \n");
    char word[100];
    scanf("%s", word);
    int i = 0;
    int len = strlen(word) - 1;
    while (i < len)
    {
        if (word[i] != word[len])
        {
            printf("%s is not a palindrome\n", word);
            return 0;
        }
        i++;
        len--;
    }
    printf("%s is a palindrome\n", word);
    return 0;
}
