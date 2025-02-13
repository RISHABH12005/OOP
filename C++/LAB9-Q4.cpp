#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout1("file1.txt");
    if(!fout1.good())
    {
        cout<<"Error in opening file1"<<endl;
    }

    ofstream fout2("file2.txt");
    if(!fout2.good())
    {
        cout<<"Error in opening file2"<<endl;
    }

    fout1<<"hi my name is ";
    fout2<<"Rishabh Jain";

    fout1.close();
    fout2.close();

    ofstream fout3("merge_file.txt");
    if(!fout3.good())
    {
        cout<<"Error in opening merge_file"<<endl;
        return 1;
    }

    ifstream fin1("file1.txt");
    ifstream fin2("file2.txt");

    string line;
    if(fin1.good())
    {
        while(getline(fin1, line))
        {
            fout3 << line;
        }
    }
    if(fin2.good())
    {
        while(getline(fin2, line))
        {
            fout3 << line ;
        }
    }

    fin1.close();
    fin2.close();
    fout3.close();

    return 0;
}
