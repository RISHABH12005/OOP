#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fin;
    ofstream fin1;
    fin.open("TEXT2.txt");
    fin1.open("TEXT.txt");
    if(!fin.good())
    {
        cout<<"Error in opening file"<<endl;
        return 1;
    }

    if(!fin1.good())
    {
        cout<<"Error in opening file"<<endl;
        return 1;
    }

    cout<<"Enter the text to write in file: "<<endl;
    cout<<"Enter -1 to stop"<<endl;
    string line;
    while(getline(cin,line) && line != "-1")
    {
        fin << line << endl;
    }

    fin.close();

    ifstream fout("TEXT2.txt");
    if(!fout.good())
    {
        cout<<"Error in opening file"<<endl;
        return 1;
    }
    cout<<"Copying the content of TEXT2.txt to TEXT.txt"<<endl;
    string line1;
    while(getline(fout,line1))
    {
        fin1 << line1 << endl;
    }

    fin1.close();
    fout.close();
    return 0;


}
