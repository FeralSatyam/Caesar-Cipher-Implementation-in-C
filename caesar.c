#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc != 2 || (strcmp(argv[1], "0")) == 0)
    {
        printf("Usage: ./caesar key\n");
        exit(1);
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            exit(1);
        }
    }
    string text = get_string("Text: ");
    int enText[strlen(text)], c = 0, p;
    int k = atoi(argv[1]);
    char encript[strlen(text) + 1];
    for (int i = 0; i < strlen(text); i++)
    {
        enText[i] = (int) text[i];
        if (isupper(enText[i]))
        {
            c = (text[i] + k - 'A') % 26 + 'A';
            encript[i] = c;
        }
        else if (islower(enText[i]))
        {
            c = (text[i] + k - 'a') % 26 + 'a';
            encript[i] = c;
        }
        else
        {
            encript[i] = text[i];
        }
    }
    encript[strlen(text)] = '\0';
    printf("ciphertext: %s\n", encript);
}
