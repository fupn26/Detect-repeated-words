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
