
//program check if yers is leap or not 

#include <stdio.h>
int main()
{
    int year ;
    printf("entre the year : ");
    scanf("%d",&year);
    
    if(year %400==0 || (year%4==0 && year != 100))
        printf("year is a leap");
    else
        printf("year is not a leap");
    
}