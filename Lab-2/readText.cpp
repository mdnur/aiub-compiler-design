#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void isOperator(string val)
{
	string arr="+-*/%=";

	for (int i = 0; i < arr.length(); i++)
		{
		for (int j = 0; j < val.length(); j++)
            if (arr[i]==val[j])
            {
            cout << "\nOperator: "<< arr[i];
            }

		}

}
int main()
{
    string myText;

    ifstream MyReadFile("filename.txt");

    while (getline (MyReadFile, myText)) {
        
    }
    isOperator(myText);

    MyReadFile.close();
    return 0;
}