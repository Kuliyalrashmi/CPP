#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("abc.txt", ios::out);
    if (!new_file)
    {
        cout << "File creation failed";
    }
    else
    {
        cout << "New file created\n";
        char c;
        new_file << "Rashmi Kuliyal\n";
        new_file.close();

        new_file.open("abc.txt", ios::in);
        if (!new_file)
            cout << "No such file";
        else
        {
            char ch;
            while (!new_file.eof())
            {
                new_file >> ch;
                cout << ch;
            }
            cout << endl;
            new_file.close();
        }

        new_file.open("abc.txt", ios::app); // append instead of overwrite
        // Insertion Operator (<<)
        new_file << "Rashmi Kuliyal\n";
        new_file << "Rashmi Kuliyal\n";
        new_file << "Rashmi Kuliyal\n";
        new_file << "Rashmi Kuliyal\n";
        new_file << "Rashmi Kuliyal\n";
        new_file.close();

        new_file.open("abc.txt", ios::in);
        if (!new_file)
            cout << "No such file";
        else
        {
            char ch;
            cout << "file after appending : ";
            while (!new_file.eof())
            {
                new_file >> ch;
                cout << ch;
            }
            cout << endl;
            new_file.close();
        }

        int w = 0;
        new_file.open("abc.txt", ios::in);
        if (!new_file)
            cout << "No such file";
        else
        {
            char ch;
            while (!new_file.eof())
            {
                new_file >> noskipws >> ch;
                if (ch == '\n' | ch == ' ')
                {
                    w++;
                }
            }
            w++;
            cout << "no. of words=" << w << endl;
            new_file.close();

            int c = 0;
            new_file.open("abc.txt", ios::in);
            if (!new_file)
                cout << "No such file";
            else
            {
                char ch;
                while (!new_file.eof())
                {
                    new_file >> noskipws >> ch;
                    c++;
                }
                c--;
                cout << "no. of characters=" << c << endl;
                new_file.close();
            }
        }

        int l = 0;
        new_file.open("abc.txt", ios::in);
        if (!new_file)
            cout << "No such file";
        else
        {
            char ch;
            while (!new_file.eof())
            {
                new_file >> noskipws >> ch;
                if (ch == '\n')
                {
                    l++;
                }
            }
            cout << "no. of lines=" << l << endl;
            new_file.close();
        }
    }
    return 0;
}