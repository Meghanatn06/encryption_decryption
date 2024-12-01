#include <stdio.h>
#include <string.h>
int main()
{
    char array[100];
    char ch;
    int i, j, k;
    printf("Enter a string:");
    fgets(array, 100, stdin);
    array[strcspn(array, "\n")] = '\0';
    printf("1.Encryption\n");
    printf("2.Decryption\n");
    printf("Enter your choice:");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '1':
        for (i = 0; i < 100 && array[i] != '\0'; i++)
        {
            if (array[i] != ' ')
            {
                array[i] = array[i] + (i+1); // Change space to an offset character
            }
        }
        printf("%s", array);
        break;

    case '2':
        for (j = 0; j < 100 && array[j] != '\0'; j++)
        {
            if (array[j] != ' ')
            {                            // Check against the encoded value
                array[j] = array[j] - (j+1); // Convert back to space
            }
        }
        printf("%s", array);
        break;

    default:
        printf("error");
    }

    return 0;
}
