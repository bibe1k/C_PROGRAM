#include <stdio.h>
int main()
{
    char weekend;
    printf("Enter the character between (a-g) OR (A-G): ");
    scanf("%c", &weekend);
    switch (weekend)
    {
        // if ((weekend >= 'a' && weekend <= 'g') || (weekend >= 'A' && weekend <= 'G'))
        // {

    case ('a'):
    case ('A'):
        printf("The day is Sunday");
        break;
    case ('b'):
    case ('B'):
        printf("The day is Monday");
        break;

    case ('c'):
    case ('C'):
        printf("The day is Tuesday");
        break;

    case ('d'):
    case ('D'):
        printf("The day is Wednesday");
        break;
    case ('e'):
    case ('E'):
        printf("The day is Thursday");
        break;
    case ('f'):
    case ('F'):
        printf("The day is Friday");
        break;
    case ('g'):
    case ('G'):
        printf("The day is Satuday");
        break;
    default:
        printf("You entered the invalid character");
        break; }
}