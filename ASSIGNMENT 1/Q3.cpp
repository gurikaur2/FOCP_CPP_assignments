/* WAP that 
i. Accepts a string from the user 
ii. Checks whether the string is palindrome (ignoring spaces and case sensitivity)
iii. counts and displays the frequency of each character in the string (case insensitive)
iv. Replace all vowels in the string with a specific character  */

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string &str) 
{
    string cleanedStr;
    for (char ch : str) 
    {
        if (isalnum(ch)) 
        {
            cleanedStr += tolower(ch);
        }
    }
    int left = 0;
    int right = cleanedStr.length() - 1;
    while (left < right) 
    {
        if (cleanedStr[left] != cleanedStr[right]) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void countfreq(const string &str) 
{
    
}

string replaceVowels(string str, char replacement) 
{
    for (char &ch : str) 
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            ch = replacement;
        }
    }
    return str;
}

int main() 
{
    string input;
    char replacement;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) 
    {
        cout << "The string is a palindrome." << endl;
    } 
    else 
    {
        cout << "The string is not a palindrome." << endl;
    }

    countfreq(input);

    cout << "Enter a character to replace all vowels: ";
    cin >> replacement;

    string newstring = replaceVowels(input, replacement);
    cout << "String after replacing vowels: " << newstring << endl;

    return 0;
}
