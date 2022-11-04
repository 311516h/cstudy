#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;

	cout << fixed;
	cout.precision(9);
	cout << (double)A / B;

	return 0;
	
	/*fixed 함수를 사용하여 소수점 자릿수 고정
	precision 함수를 사용하여 오차 범위 지정
	(fixed 함수를 사용 안하면 큰 값부터 범위가 지정됨)*/

}

