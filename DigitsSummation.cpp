#include <iostream>
using namespace std;
int main()
{
long long N, M,last_digit_N,last_digit_M,sum;
cin >> N>>M;
last_digit_N= N%10;
last_digit_M= M%10;
sum = last_digit_N + last_digit_M;
cout<<sum;
}