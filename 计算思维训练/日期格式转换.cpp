#include <stdio.h>
#include <stdlib.h>
int main() {
    int year, month, day;
    while(scanf("%d-%d-%d", &year, &month, &day)!=EOF)
    {
        if (month < 10)
            printf("0%d/", month);
        else
            printf("%d/", month);
        if (day < 10)
            printf("0%d/", day);
        else
            printf("%d/", day);
        if(year<1000)
            printf("0%d\n",year);
        else printf("%d\n",year);
    }
    return 0;
}