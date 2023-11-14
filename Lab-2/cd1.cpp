#include <iostream>
using namespace std;

bool isNumeric(string val)
{
	bool isNumeric = false;
	int count = 0;
	for (int i = 0; i < val.length(); i++)
	{
		if (val[i] == '.' && count == 0)
		{
			count++;
			continue;
		}
		if (val[i] == '0' || val[i] == '1' || val[i] == '2' || val[i] == '3' || val[i] == '4' || val[i] == '5' || val[i] == '6' || val[i] == '7' || val[i] == '8' || val[i] == '9')
		{
			isNumeric = true;
		}
		else
		{
			isNumeric = false;
			return false;
		}
	}
	return true;

}

int main()
{
	string val;
	cin >> val;
	
	if (isNumeric(val))
	{
		cout << "Numeric";
	}
	else
	{
		cout << "Not Numeric";
	}
}
