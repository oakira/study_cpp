#include<iostream>
using namespace std;

void getInput();


int main()
{
	while (true)
	{
		getInput();
	}
	return 0;
}

void getInput() {
	char c;
	cin >> c;
	cout << "input Character is " << c << endl;
}
