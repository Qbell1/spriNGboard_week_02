#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int fib(int N)
{
    int x[N+1], y;
    
    x[1]=x[2]=1;
    if (N<=1){
        return N;
    }
    else{
    for (y=3;y<=N;y++){
        x[y]=x[y-1]+x[y-2];
        
    }
     return x[N];
}
}

int main()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}
