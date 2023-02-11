#include <iostream>
using namespace std;

void bruh(int n)
{
if ( (n%3==0) || (n%5==0) ){
    if (n%3==0) {
    cout << " fizz ";
   }
     if (n%5==0){
        cout << " buzz ";
     }
        if ((n%3==0) && (n%5==0)){
            cout << " fizzbuzz ";
     }
}
    else {
         cout << " " << n;
         }  
}
int main ()
   {
    for (int n=1; n<=50; ++n)
     {
       bruh(n);
     }
   }
   

