

//simple withdraw money



#include <iostream>
using namespace std;
#define da1 200
#define da2 100
#define da3 50
#define da4 10
#define da5 5
#define da6 1

int main()
{

  int amount ;
  int mb1 ;
  int mb2 ;
  int mb3 ;
  int mb4 ;
  int mb5 ;
  int mb6 ;
  int bk1 ;
  int bk2 ;
  int bk3 ;
  int bk4 ;
  int bk5 ;
  int bk6 ;
  
  
   cout << "entre you amount : ";
   cin >> amount ;
  

   mb1 = amount / da1 ;
   bk1 = amount - (mb1*da1);
   
   mb2 = bk1/da2;
   bk2 = bk1-(da2*mb2);
   
   mb3 = bk2/da3;
   bk3 = bk2-(da3*mb3);

   mb4 = bk3/da4;
   bk4 = bk3-(da4*mb4);
    
   mb5 = bk4/da5;
   bk5 = bk4-(da5*mb5);
       
   mb6 = bk5/da6;
   bk6 = bk5-(da6*mb6);
    
    
    
    
    
    
    cout << "da200*";
    cout << mb1 ;
    cout << "\n";
    
    
    
    cout <<"da100*";
    cout << mb2 ;
    cout << "\n";
    
    
    
    
    cout <<"da50*";
    cout << mb3 ;
    cout << "\n";
    
    
    
    
    cout << "da10*";
    cout << mb4 ;
    cout << "\n";
    
    
    
    
    cout <<"da5*";
    cout << mb5 ;
    cout << "\n";
    
    cout << "da1*" ;
    cout << mb6 ;
    
    
    
    
    
    
    
}
