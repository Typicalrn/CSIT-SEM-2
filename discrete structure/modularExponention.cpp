#include <iostream>
using namespace std;

// Function to calculate (base^exp) % mod
long power(long base,long exp, long mod) {
  long res = 1;
  base %= mod;
  while (exp > 0) {
    if (exp % 2 == 1) res = (res * base) % mod;
    base = (base * base) % mod;
    exp /= 2;
  }
  return res;
}

int main() {
  int roll_no;
  cout<<"This code is run by Aryan Maharjan\n";
  cout << "Enter your roll number: ";
  cin >> roll_no;

  long result = power(roll_no, 20 * roll_no, 29);
  cout << "(" << roll_no << "^(20*" << roll_no << ")) mod 29 = " << result << endl;

  return 0;
}