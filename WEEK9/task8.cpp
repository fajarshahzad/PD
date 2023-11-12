#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase,string typedPhrase) 
{
    bool brokenKeys[26] = {false};
    string result;
    for (int i = 0; i < correctPhrase.length(); i++) 
	{
        if (correctPhrase[i] != typedPhrase[i] && !brokenKeys[typedPhrase[i] - 'a']) {
            brokenKeys[typedPhrase[i] - 'a'] = true;
            result += correctPhrase[i];
        }
    }
    return result;
}

int main() 
{
	string correctPhrase;
	cout<<"Enter the correct phrase: ";
	getline(cin,correctPhrase);
	string typedPhrase;
	cout<<"Enter what you actually typed: ";
	getline(cin,typedPhrase);
    string brokenKeys = findBrokenKeys(correctPhrase, typedPhrase);
	cout << "Broken keys: " << brokenKeys <<endl;
}
