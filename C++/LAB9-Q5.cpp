#include <iostream>
#include <fstream>
using namespace std;
int d=0;
int main()
{
    bool cond = true;
    do
    {
        cout << "Welcome to file encryption system:\n";
        cout << "1. Display source file\n";
        cout << "2. Encrypt source file \n";
        cout << "3. Decrypt source file\n";
        cout << "4. Quit\n";
        int input;
        cin>> input;
        switch(input)
        {
            case 1:
            {
                if(d!=1)
                {
                    ofstream fout;
                    fout.open("source.txt");
                    if(!fout.good())
                    {
                        cout<<"Error in opening file"<<endl;
                        return 1;
                    }
                    cout<<"Enter the text to write in file: "<<endl;
                    cout<<"Enter -1 to stop"<<endl;
                    string line;
                    while(getline(cin,line) && line != "-1")
                    {
                        fout << line << endl;
                    }

                    fout.close();
                    d=1;
                }
                ifstream fin;
                fin.open("source.txt");
                if(!fin.good())
                {
                    cout<<"Error in opening file"<<endl;
                    return 1;
                }

                cout<<"The content of source file is: "<<endl;
                string line1;
                while(getline(fin,line1))
                {
                    cout<<line1<<endl;
                }
                fin.close();
                break;
            }

            case 2:
            {
                ifstream fin("source.txt");
                if(!fin.good())
                {
                    cout<<"Error in opening file"<<endl;
                    return 1;
                }
                int key;
                cout<<"Enter key value to encrypt the file: ";
                cin>>key;
                ofstream fout;
                fout.open("encrypt.txt");
                if(!fout.good())
                {
                    cout<<"Error in opening file"<<endl;
                    return 1;
                }
                char ch;
                while(fin.get(ch))
                {
                    ch += key;
                    fout<<ch;
                }
                cout<<"File encrypted successfully"<<endl;
                fin.close();
                fout.close();
                break;
            }

            case 3:
            {
                ifstream fin("encrypt.txt");
                if(!fin.good())
                {
                    cout<<"Error in opening file"<<endl;
                    return 1;
                }

                int key;
                cout<<"Enter key value to decrypt the file: ";
                cin>>key;

                ofstream fout("decrypt.txt");
                if(!fout.good())
                {
                    cout<<"Error in opening file"<<endl;
                    return 1;
                }

                char ch;
                while(fin.get(ch))
                {
                    ch -= key;
                    fout<<ch;
                }
                cout<<"File decrypted successfully"<<endl;
                fin.close();
                fout.close();
                break;

            }

            case 4:
            {
                cout<<"Thank you for using file encryption system"<<endl;
                cond = false;
                break;
            }

            default:
            {
                cout<<"Invalid input"<<endl;
            }
        }
    } while (cond);
    
    return 0;
}