#include <cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main (int argc, string argv[])
{
if (argc==2)
{

int i = atoi(argv[1]);

string p = get_string("plaintext: ");
    printf("ciphertext: ");
for ( int j = 0, n = strlen(p); j<n ;j++)
{
    if (isalpha(p[j]) ) 
    { 

    if (isupper(p[j]) )
    { 
    int x = (int)p[j] - 65;
    int c = (x+i)%26;
    int y = (65+c);
    printf("%c" , y);
    }

        else {
    if (islower(p[j]) )
    {

    int x = (int)p[j] - 97;
    int c = (x+i)%26;
    int y = (97+c);
    printf("%c" , y);
    }
    }
    }
    else {
          printf("%c" , p[j]);
    }

}
    printf("\n");
}
else {
    printf("Error\n");
    return 1;
}
}