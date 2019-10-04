// dungeonCrawler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
using namespace std;


int main()
{	

string line;

	ifstream inFile;

	inFile.open(".\\map.txt");
	if (!inFile) {
		cerr << "Undable to open file map.txt";
		inFile.close();
		exit(1);
	}

	//while (getline(inFile, line)) {

	string gMap[9][30];
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 30; x++)
		{
			inFile >> gMap[y][x];
			cout << gMap[y][x] << endl;
		}
	}




	//cout << line << endl;
	//}

	inFile.close();
}
