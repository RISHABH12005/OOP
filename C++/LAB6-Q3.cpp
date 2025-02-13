    #include <iostream>
    using namespace std;

    class Concate
    {
        string str;

        public:
            void setdata();
            void display();

            Concate operator +( const Concate& str);

    };

    void Concate:: setdata()
    {
        cout<<"Enter string: ";
        cin>>str;
    }

    void Concate:: display()
    {
        cout<<str;

    }

    Concate Concate :: operator +( const Concate& strt)
    {
        Concate result;
        int i=0;
        result.str = str + strt.str;
        return result;


    }
    int main()
    {
        Concate str1,str2;
        str1.setdata();
        str2.setdata();
        Concate str3 = str1 +   str2;

        cout<<"String 1: ";
        str1.display();
        cout<<endl;
        cout<<"String 2: ";
        str2.display();
        cout<<endl;

        cout<<"Concatenated string: ";
        str3.display();
        cout<<endl;


    }
