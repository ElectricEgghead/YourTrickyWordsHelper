/**
Description: Application that takes in a letter and displays tricky-to-spell words.

**/

#include <iostream>
#include <fstream>
#include <locale>
#include <string>
#include <vector>
#include "usingDeclarations.h"

char userLetterInput;
char userChoiceContinue; 
string userFirstName;
string line;
vector <string> trickyWordsVector;

//todo old vector code - bool getFileContent(string, vector <string>);


int main() {
	cout << "----------------<>-----------\n";
	cout << "Welcome to your TRICKY WORDS Helper!\n";
	cout << "----------------<>-----------\n";
	cout << "\n\nEnter your first name: ";
	cin >> userFirstName;

	do {
		cout << "Enter a letter [a - z]: ";
		cin >> userLetterInput;
		char(tolower(userLetterInput));
		cout << "\n\n" << userFirstName << "\nHere's your list of tricky words for the letter (" << char(toupper(userLetterInput)) << "):" << endl; //TODO line doesn't display


		//TODO PRINTS STARTING AT [10]
		// for (string & line : trickyWordsVector) {
			//cout << line << endl;
	//}

		ifstream trickyWordsFile("trickyWordsList.txt"); // open the file

		if (!trickyWordsFile) {
			cout << "Unable to open the file.";
		}
		while (getline(trickyWordsFile, line)) {
			if (line.size() > 0) {
				trickyWordsVector.push_back(line);
			}
		}
		// for (string & line : trickyWordsVector) {
			//cout << line << endl;
		
		for (int i = 0; i < trickyWordsVector.size(); i++) {
			cout << trickyWordsVector[i] << endl;
		}
		trickyWordsFile.close();

			   
		/*
		switch (userLetterInput) {


		case a:
			string letterA[] = {};
			

		case 'b':
			int bElements;
				
				string letterB[] = {
				"Barbecue",
				"Beginning",
				"Believe",
				"Bellwether",
				"Bicycle",
				"Broccoli",
				"Bureau",
				"Business" };
				bElements = letterB[].length();
			for (int i = 0; i < letterB[].length(); i++) {

			};
			
			cout << letterB[];
			break;
		} // end switch
	*/

		cout << "\n\nWould you like to enter another letter [y,n]?: ";
		cin >> userChoiceContinue;

	} while (userChoiceContinue == 'y');
	
	return 0;
} // end main()






/*
http://www.cplusplus.com/forum/beginner/217118/

https://stackoverflow.com/questions/39681897/c-how-to-fill-a-vector-of-undefined-size-with-strings

https://thispointer.com/c-how-to-read-a-file-line-by-line-into-a-vector/

	// get the contents of file in vector
		bool trickyWordsResult = getFileContent("trickyWordsList.txt", trickyWordsVector);

		if (trickyWordsResult) {
			// print vector's content
			for (string & line : trickyWordsVector)
				cout << line << endl;
		}



		bool getFileContent(string trickyWordsString, vector <string> & trickyWordsVector) {

	// open file
	ifstream in(trickyWordsString.c_str());

	//TODO check if file is valid
	if (!in) {
		cerr << "Cannot open the file: " << trickyWordsString << endl;
		return false;
	}

	while (getline(in, trickyWordsString)) {
		if (trickyWordsString.size() > 0)
			trickyWordsVector.push_back(trickyWordsString);
	}

	in.close();
	return true;
}
		
		*/