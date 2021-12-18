#include<stdio.h>
int string_length(char str[])
{
    int i, length = 0; //length is not neccessary to use. Return i;

    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}
int main()
{
    char country[100];
    int length;
    while(1 == scanf("%s", country)){ //or &country
        length = string_length(country);
        printf("Length: %d\n", length);
    }
    return 0;
}
/*
{
    int i;
    for(i = 0; str[i] != '\0'; i++);
        return i;
}
*/
