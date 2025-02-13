#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fin;
    fin.open("Text1.txt");
    if(!fin.good())
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

    ifstream fout;
    fout.open("Text1.txt");
    if(!fout.good())
    {
        cout<<"Error in opening file"<<endl;
        return 1;
    }

    string name[100];
    int i;
    for(i=0;getline(fout,name[i]);i++);
    int n = i;
    cout<<"Displaying the content of file: "<<endl;
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<name[i]<<endl;
    }

    fin.close();
    fout.close();
    return 0;


}
