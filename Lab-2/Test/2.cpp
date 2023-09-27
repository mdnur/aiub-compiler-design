#include <iostream>
using namespace std;
/** write a program that will list out all the operator in bracket wr */
void isOperator(string val)
{
	string arr="+-*/%=";

	for (int i = 0; i < arr.length(); i++)
    {
        for (int j = 0; j < val.length(); j++)
        {
            if (arr[i]==val[j])
                {
                    cout << "\nOperator: "<< arr[i];
                }
        }
    }
}

int main()
{
    cout << "Enter Value :";
    string val;
    cin>>val;

    isOperator(val);

}
