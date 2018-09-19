#include "std_lib_facilities.h"
//detect the repeated words
//int main()
//{
//cout<<"Please enter a sentence!\n";
//string previous = " ";
//string current;
//while(cin>>current){
//	if (previous == current)
//		cout<<"repeated word: "<<current<<"\n";
//	previous = current;
//	}
//}

//find the repeated words
int main()
{
int number_of_words = 0;
cout<<"Please enter a sentence!\n";
string previous = " ";
string current;
while(cin>>current){
	++number_of_words;
	cout<<current<<'\n';
	if (previous == current)
		cout<<"word number: " <<number_of_words
		<<"\nrepeated word: " <<current<<'\n';
	previous = current;
	}
}
