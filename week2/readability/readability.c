#include <cs50.h>

#include <stdio.h>

#include<string.h>

#include<math.h>

#include<ctype.h>

double round(double x);

float count_letters(string text);

int main(void)
{
    string story = get_string("Text : \t"); //getting story from user.
    float count = count_letters(story); //It count the total index by using formula
    int index = round( count); //could be float num,roundingup to the nearest int.
    if (index>16)
    {
        printf("Grade 16+\n"); // if index is greater than 16 it print grade 16+
    }
    else if(index<=1)
    {
        printf("Before Grade 1\n"); ///else Before grade 1 if index less than 1
    }
    else
    {
        printf("Grade %d\n",index); // if index greate than 1 nad less than 16 .
    }
}


float count_letters(string text) //function we mentioned above but writing below
{
        int word = 1;
    int letter = 0;
    int sentence=0;
    for (int i = 0, n = strlen(text);i < n; i++)
    {
        if (isspace(text[i]))
        {
            word++;
        }
        else if(isalpha(text[i])) //check it the text is an Alphabeth
        {
            letter++;
        }
        else if(text[i] == '.' || text[i] == '?' || text[i] == '!') // to check if character in text have '.','!','?'.
        {
            sentence++;
        }
        else
        {
        continue;
        }
    }
    float average_letter = (letter*100)/word;
    float average_sentence=(sentence*100)/word;
    return (0.0588*average_letter)-(0.296*average_sentence)-15.8;
}