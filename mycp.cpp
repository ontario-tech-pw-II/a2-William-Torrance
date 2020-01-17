#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	if(argc != 3 ){
		cerr << " Invalid argument count, you must include an input and output file for this program to run." << endl;
		cerr << " Please try again with the format \"\033[1m" << argv[0] << " inputfile.txt outputfile.txt\033[0m\", then try again." << endl;
		return 1;
	}
	
	fin.open(argv[1]);
 	
	char c;

 	if (fin.fail()) // check if it is successful 
 	{
 		cerr << " Cannot open the input file!" << endl;
 		return 1;
 	}
 	
	fout.open(argv[2]);
	
 	if (fout.fail())
 	{
 		cerr << " Cannot open the output file!" << endl;
 		return 1;
 	}
 	
 	while(fin.get(c)) 
	{
		fout << c;
	}
 	
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 
