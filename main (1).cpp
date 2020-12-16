
/*bmi calculator Calculate Your Body Mass Index Body mass index (BMI) is a measure of body fat based on height and weight that applies to adult men and women. 
Enter your weight and height using standard or metric measures. Select "Compute BMI" and your BMI will appear below.*/


#include <iostream>
using namespace std;
int main(){
    float weight ;
    float height ;
    float bmi ;
    
    /* 
    in c lang type like this
    printf(" entr patient wieght: ");
    scanf("%f",&weight);
    printf("%f",weight);
    */
    
    // in c++
    
    cout << "entr patient weight " ;
    cin >> weight ;
    
    /* 
    in c lang type like this
    printf(" entr patient hieght: ");
    scanf("%f",&height);
    printf("%f",height);
    */
   
    //in c++
   
   
    cout << "entr patient height " ;
    cin >> height;
    
    /*
    printf(" your bmi is : ");
    printf("%f",bmi);
    printf("\n");
    printf("bmi guid : >25 means overweight & 18.5 - 25.9 means normal");
    */
    
    bmi = weight / (height*height); 
    cout << "your bmi is : " ;
    cout << bmi ;
    cout << "\n" ;
    cout << "bmi guid : >25 means overweight & 18.5 - 25.9 means normal" ;
    
    
    
    
    
}
