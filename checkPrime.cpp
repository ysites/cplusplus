#include <iostream>
using namespace std;

/* checkPrime.cpp

Description: This program verifies if a given integer is prime or not.

*/

int main()
{
  int n, i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }

  if (isPrime) // if isPrime = true 
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}
