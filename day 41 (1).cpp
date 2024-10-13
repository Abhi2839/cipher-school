using namespace std;
#include <iostream>
int sum_of_digit(int n) {
	if (n == 0) {
		return 0;
	}
	return (n % 10) +sum_of_digit(n / 10);
}
int main()
{
	cout<<sum_of_digit(1234);

	return 0;
}