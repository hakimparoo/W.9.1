#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int anagram(char[], char[]);
int main()
{
    char str1[50], str2[50];
    int check;
    printf("Enter first string : ");
    gets_s(str1);
    printf("Enter second string : ");
    gets_s(str2);
    check = anagram(str1, str2);
    if (check == 1)
        printf("\"%s\" and \"%s\" are Anagrams.", str1, str2);
    else
        printf("\"%s\" and \"%s\" are not Anagrams.", str1, str2);
}
int anagram(char s1[], char s2[])
{
    int first_str[256] = { 0 }; 
    int second_str[256] = { 0 };
 
    int i = 0;


    while (s1[i] != '\0')
    {
        first_str[s1[i]]++;  
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        second_str[s2[i]]++; 
        i++;
    }
    for (i = 0; i < 256; i++)
    {
        if (first_str[i] != second_str[i])
            return 0;
    }
    return 1;
}