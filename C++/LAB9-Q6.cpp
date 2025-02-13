#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("test.txt");
    ofstream fout1("test1.txt");
    if(!fout.good())
    {
        cout<<"Error in creating file"<<endl;
        return 1;
    }
    if(!fout1.good())
    {
        cout<<"Error in creating file"<<endl;
        return 1;
    }

    fout<<1<<endl;
    fout<<2<<endl;
    fout<<3<<endl;
    fout<<4<<endl;

    fout1<<7<<endl;
    fout1<<8<<endl;
    fout1<<9<<endl;
    fout1<<10<<endl;

    fout.close();
    fout1.close();

    ifstream fin("test.txt");
    ifstream fin1("test1.txt");
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

    ofstream out_file("Result.txt");
    if(!out_file.good())
    {
        cout<<"Error in creating file"<<endl;
        return 1;
    }

    int a;
    int b;
    fin>>a;
    fin1>>b;

    while(fin || fin1)
    {
        if(!fin)
        {   
            out_file<<b<<endl;
            fin1>>b;
            continue;
        }
        else if(!fin1)
        {
            out_file<<a<<endl;
            fin>>a;
            continue;
        }
        if(a<b)
        {
            out_file<<a<<endl;
            while(fin>>a && a<b)
            {
                out_file<<a<<endl;
            }
        }
        else if(b<a)
        {
            out_file<<b<<endl;
            while(fin1>>b && b<a)
            {
                out_file<<b<<endl;
            }
        }
        else if(a==b)
        {
            out_file<<a<<endl<<b<<endl;
        }

    }

    fin.close();
    fin1.close();
    out_file.close();

    return 0;
}