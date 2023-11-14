#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;
void isOperator(string val)
{
    string arr = "+-*/%=";

    for (int i = 0; i < arr.length(); i++)
    {
        for (int j = 0; j < val.length(); j++)
            if (arr[i] == val[j])
            {
                cout << "Operator: " << arr[i] << endl;
            }
    }
}

bool isDigit(char val)
{
    if (val == '0' || val == '1' || val == '2' || val == '3' || val == '4' || val == '5' || val == '6' || val == '7' || val == '8' || val == '9')
    {
        return true;
    }
    return false;
}
bool isNumeric(string val)
{
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
        }
        else
        {
            return false;
        }
    }
    return true;
}
bool isValidKeyword(string keyword)
{
    string validKeywords[] = {"int", "float", "char", "if", "for", "while", "void"};
    int numValidKeywords = sizeof(validKeywords) / sizeof(validKeywords[0]);

    for (int i = 0; i < numValidKeywords; i++)
    {
        if (keyword == validKeywords[i])
        {
            return true;
        }
    }
    return false;
}

bool checkCharacter(char c)
{
    char character[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < sizeof(character) / sizeof(character[0]); i++)
    {
        if (character[i] == c)
        {
            return true;
        }
    }
    return false;
}
bool validIdentifier(char str)
{
    if (str == '0' || str == '1' || str == '2' ||
        str == '3' || str == '4' || str == '5' ||
        str == '6' || str == '7' || str == '8' ||
        str == '9' || str == 'a' || str == 'b' ||
        str == 'c' || str == 'd' || str == 'e' ||
        str == 'f' || str == 'g' || str == 'h' || str == 'i' || str == 'j' ||
        str == 'k' || str == 'l' || str == 'm' ||
        str == 'n' || str == 'o' || str == 'p' || str == 'q' || str == 'r' ||
        str == 's' || str == 't' || str == 'u' ||
        str == 'v' || str == 'w' || str == 'x' || str == 'y' || str == 'z' || str == 'A' || str == 'B' ||
        str == 'C' || str == 'D' || str == 'E' ||
        str == 'F' || str == 'G' || str == 'H' || str == 'I' || str == 'J' ||
        str == 'K' || str == 'L' || str == 'M' ||
        str == 'N' || str == 'O' || str == 'P' || str == 'Q' || str == 'R' ||
        str == 'S' || str == 'T' || str == 'U' ||
        str == 'V' || str == 'W' || str == 'X' || str == 'Y' || str == 'Z')
        return (true);
    return (false);
}

bool validVar(char str)
{
    if (str == 'a' || str == 'b' ||
        str == 'c' || str == 'd' || str == 'e' ||
        str == 'f' || str == 'g' || str == 'h' || str == 'i' || str == 'j' ||
        str == 'k' || str == 'l' || str == 'm' ||
        str == 'n' || str == 'o' || str == 'p' || str == 'q' || str == 'r' ||
        str == 's' || str == 't' || str == 'u' ||
        str == 'v' || str == 'w' || str == 'x' || str == 'y' || str == 'z' || str == 'A' || str == 'B' ||
        str == 'C' || str == 'D' || str == 'E' ||
        str == 'F' || str == 'G' || str == 'H' || str == 'I' || str == 'J' ||
        str == 'K' || str == 'L' || str == 'M' ||
        str == 'N' || str == 'O' || str == 'P' || str == 'Q' || str == 'R' ||
        str == 'S' || str == 'T' || str == 'U' ||
        str == 'V' || str == 'W' || str == 'X' || str == 'Y' || str == 'Z')
        return (true);
    return (false);
}
int main()
{
    string myText;
    string keyword = "";
    ifstream MyReadFile("filename.txt");
    vector<string> strings;

    while (getline(MyReadFile, myText))
    {
       
    }


    for (int i = 0; i < myText.length(); i++)
    {

        if (isdigit(myText[i]))
        {
            cout << "Constant : " << myText[i] << endl;
        }
        if (checkCharacter(myText[i]))
        {
            cout << myText << endl;
            keyword += myText[i];
            if (myText[i] == ' ')
            {
                cout << keyword;
                if(isValidKeyword(keyword)){
                    cout << "this is keyword";
                }else{
                    cout  << "identifier";
                }
            }
        }
        keyword = "";
    }

    // isOperator(myText);

    MyReadFile.close();
}
