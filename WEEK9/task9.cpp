#include <iostream>
using namespace std;
string longestDisplayableWord(string words[], int);
bool isValid(string);
string longestDisplayableWord(string words[], int numWords) 
{
	string longestWord="";
    for (int i = 0; i < numWords; i++) 
	{
        if (isValid(words[i]) && words[i].length() >=numWords&&words[i].length()> longestWord.length()) 
		{
            longestWord = words[i];
        }
    }
    return longestWord;
}
bool isValid(string word)
{
	for (int  i = 0; i < word.length(); i++)
    {
        if (word[i] == 'k' || word[i] == 'm' || word[i] == 'v' || word[i] == 'w' || word[i] == 'x')
            return false;
    }
    return true;
}
main() 
{
	int size;
	cout<<"Enter the number of words: ";
	cin>>size;
	string words[size];
	cout<<"Enter the words, one by one: "<<endl;
	string element;
	for(int i=0;i<size;i++)
	{
		cin>>element;
		words[i]=element;
	}
    string result = longestDisplayableWord(words,size);
    cout << "Longest 7-segment word: " << result <<endl;
}
