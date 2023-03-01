#include <string.h>

int strlen (char s[]) //get the length of a string

char* strcpy (char dest[], char src[]) //Copy source string to destination string

int strcmp (char s1[], char s2[]) -> -1; 0; 1  //compare 2 string

char* strcat (char dest[], char src[]) //Concatenate string src to the end of the dest

char* strupr (char s[]) //Convert a string to uppercase

char* strlwr (char s[]) //Convert a string to lowercase

char* strstr (char src[], char subStr[]) //Find the address of the substring
-> NULL if substr does not exist in the src

char* strrev()// dao nguoc chuoi


strlen(string_name)	tr? v? chi?u dài c?a chu?i string_name.
2.	strcpy(destination, source)	sao chép n?i dung c?a chu?i source t?i chu?i destination.
3.	strcat(first_string, second_string)	n?i chu?i d?u tiên v?i chu?i th? hai. K?t qu? du?c luu vào chu?i d?u tiên.
4.	strcmp(first_string, second_string)	so sánh chu?i d?u tiên v?i chu?i th? hai. N?u c? hai chu?i d?u gi?ng nhau, nó s? tr? v? 0.
5.	strrev(string)	tr? v? chu?i du?c d?o ngu?c.
6.	strlwr(string)	tr? v? chu?i ký t? ch? thu?ng.
7.	strupr(string)	tr? v? chu?i ký t? ch? hoa.
