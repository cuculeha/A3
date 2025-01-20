// Author      : Saliha Babar
// Assignment  : A3
// Due Date    : 01/22/2025
// Purpose     : Standard Arrays
 
#include <iostream>
#include <iomanip>
#include <array>
#include <string>

using namespace std;

const int numBooks = 20;

int main(){
	array < string, numBooks > bookTitle {"Star Wars", "The Empire Strikes Back (Star Wars)",
						"Splinter of the Mind's Eye (Star Wars)", "Return of the Jedi (Star Wars)",
						"Heir to the Empire (Star Wars: The Thrawn Trilogy, Vol. 1)", 
						"Dark Force Rising (Star Wars: The Thrawn Trilogy, Vol. 2",
						"The Last Command (Star Wars: The Thrawn Trilogy)",
						"Specter of the Past (Star Wars: The Hand of Thrawn #1)",
						"Vision of the Future (Star Wars: The Hand of Thrawn, Book 2)",
						"Battlestar Galactica", "New Battlestar Galactica Volume 1 (Battlestar Galactica (Dynamite)) (v. 1)",
						"New Battlestar Galactica Volume II Hardcover (Battlestar Galactica (Dynamite)","The Hobbit",
						"The Lord of the Rings: 50th Anniversary, One Vol. Edition", "The Two Towers", "The Return of the King",
						"The Fellowship of the Ring", "C++ Programming: From Problem Analysis to Program Design 7th Edition",
						"Digital Computer Electronics", "Assembly Language for x86 Processors (7th Edition)"};
								
	array < size_t, 20 > onHand {17,3,6,0,19,7,18,15,5,4,7,14,18,12,12,3,5,19,16,15};
	
	size_t maxQuantity;
	size_t minQuantity;
	string bookWithMaxQuantity;
	string bookWithMinQuantity;
	
	maxQuantity = onHand[0];
	minQuantity = onHand [0];

  for (int i = 1; i < numBooks ; i++)
    {
      if (onHand[i] > maxQuantity)
      {
      	bookWithMaxQuantity = i;
      	maxQuantity = onHand[i];
	  }
	  
	  else if (onHand[i] < minQuantity)
	  {
	  	bookWithMinQuantity = i;
	  	minQuantity = onHand[i];
	  }
	  
    }


	// Display the output
	cout << "Index\t" << left << left <<setw (70) << "Book Title" << "onH\n";
	cout << "[" << bookWithMinQuantity<< "]\t" << left << setw (70) << format( "{}", bookTitle [bookWithMinQuantity]) << minQuantity << endl;
	cout << "[" << bookWithMaxQuantity<< "]\t" << left << setw (70) << format( "{}", bookTitle [bookWithMaxQuantity]) << maxQuantity << endl;
	
	return 0;
}
