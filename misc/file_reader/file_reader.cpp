#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream inFile1, inFile2;
    // Open the file streams
    inFile1.open("file1.txt");
    inFile2.open("file2.txt");
    // Check if opening a file failed
    if (inFile1.fail() || inFile2.fail()) {
        cerr << "There was an error opening the file..." << endl;
        inFile1.close();
        exit(1);
    }

    string file1line, file2line;

    while (getline(inFile1, file1line) && (getline(inFile2, file2line)))
    {
        cout << file1line << endl;
        cout << file2line << endl;
    };
    // Close the file stream
    inFile1.close();
    inFile2.close();
}