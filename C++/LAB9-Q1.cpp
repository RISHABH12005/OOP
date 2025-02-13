#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile("TEXT.txt");
    if(!outputFile.good())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    cout<<"Enter the text to write in file: "<<endl;
    cout<<"Enter -1 to stop"<<endl;
    string line;
    while(getline(cin,line) && line != "-1")
    {
        outputFile << line << endl;

    }

    outputFile.close();
    cout << "Data written to file TEXT.txt" << endl;

    ifstream inputFile("TEXT.txt");
    if(!inputFile.good())
    {
        cout << "Error opening file" << endl;
        return 1;
    }



    int lineCount = 0;
    int c =0;
    int word =0;
    char ch;
    while(inputFile.get(ch))
    {
        if(ch == '\n')
        lineCount++;
        if(ch == ' ' || ch == '\n')
        word++;

        c++;
    }

    cout << "Number of lines in file: " << lineCount << endl;
    cout << "Number of words in file: " << word << endl;
    cout<<"Number of characters: "<<c<<endl;
    inputFile.close();
    return 0;






}
