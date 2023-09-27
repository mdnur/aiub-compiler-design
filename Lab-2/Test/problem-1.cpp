//token identification 1

/**
 * write a program that will detect if given input from the user numeric or not
 * .
 * if the answer is yes then print numeric else not numeric without built in function
 */
#include <iostream>
using namespace std;


bool isNumber(string val)
{
    int array[] = {0,1,2,3,4,5,6,7,8,9};
	for (int i = 0; i < val.length(); i++){
        // cout << val[i] << endl;
        bool flag = false;
        for (int j = 0; j < 10; j++){
            if (array[j]==val[i]){
                flag = true;
                break;
            }
        }
        if (flag == false){
            return false;
        }
    }
	return true;
}


int main()
{
  cout << "Enter Value: ";
	string val;
     cin>>val;

	if (isNumber(val))
		cout << "numeric constant";

	else
		cout << "not numeric";
}