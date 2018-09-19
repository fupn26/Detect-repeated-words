# Detect-repeated-words(it's not perfect because you have to stop it with CTRL+C)
#include "std_lib_facilities.h"
int main()
{
cout<<"Please enter a sentence!\n";
string previous = " ";
string current;
while(cin>>current){
	if (previous == current)
		cout<<"repeated word: "<<current<<"\n";
	previous = current;
	}
}

# Find the repeated words(the same problem as with the previous one)
#include "std_lib_facilities.h"
int main()
{
int number_of_words = 0;
cout<<"Please enter a sentence!\n";
string previous = " ";
string current;
while(cin>>current){
	++number_of_words;
	if (previous == current)
		cout<<"word number: " <<number_of_words
		<<"\nrepeated word: " <<current<<'\n';
	previous = current;
	}
}
