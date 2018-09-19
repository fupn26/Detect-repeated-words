# Detect-repeated-words
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

# Find the repeated words
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
