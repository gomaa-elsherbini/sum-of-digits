#include <iostream>
#include <string>
using namespace std;


int readNumber()
{
	int num;
		cout << "please enter number?\n";
		cin >> num;
	return num;
}

int getLength(string str)
{
	int i = 0;
	int length = 0;

	while (str[i])
	{
		if (str[i] == '-')
		{
			i++;
			continue;
		}
		length += 1;
		i++;
	}
	return length;
}

int sumReversedOrderDigits(int num)
{
	int sum = 0;

	string str = to_string(num);

	int length = getLength(str);

	for (int i =0; i <length; i++)
	{
		sum += str[i] - '0';
	}

	return sum;
}

int sumNumberDigits(int num)
{
	int sum = 0;

	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	cout << sumReversedOrderDigits(readNumber()) << endl;

	return 0;
}