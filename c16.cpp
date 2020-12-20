
// entre how many numbre you have and numbre then program calculate summary of numbres 

#include <stdio.h>

int main()
{

int sum ;
int i ;
int n ;
int num ;
printf ("entre n :");
scanf ("%d", &n);


for ( i=0 ; i < n; i++){
printf("entre numbre %d : ",i+1);
scanf ("%d", &num);

if (num <0)
continue ;
sum += num;

}
printf ("sum = %d" , sum);


    return 0;
}
