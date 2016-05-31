#include <iostream>
#include <cmath>
 
using namespace std;
long factorial(long n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
int main()
{
    long n;
    cin >> n;
    cout << (int)(factorial(n) +pow(2,n) -n);
    return 0;
}