#include <iostream>
#include <string>
using namespace std;

string bruh(int n){
    if (n%3==0) {
    return  " fizz ";
   }
     if (n%5==0){
        return  " buzz ";
     }
        if ((n%3==0) && (n%5==0)){
            return " fizzbuzz ";
     }
    else {
         return to_string(n);
         }  
}
int main ()
   {
    for (int n=1; n<=50; ++n)
     {
       cout << " " << bruh(n);
     }
   }
   

