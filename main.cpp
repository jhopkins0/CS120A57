#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	int N;

	cin >> n1 >> n2;
	cin >> N;

	cout << n1 << "\t" << n2;
	
	while (i < N-2){
		n3 = n1 + n2;
		cout << n3 << "\t";
		n1 = n2;
		n2 = n3;
	}
}
