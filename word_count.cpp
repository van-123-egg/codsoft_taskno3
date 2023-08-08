#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    ifstream fin;
    cout<<"Enter the file name:";
    cin>>name;
    fin.open(name + ".txt");
    int count = 0;
    char word[30];
    while(!fin.eof())
    {
        fin>>word;
        count++;
    }
    cout<<"Number of words in file are "<<count;
    fin.close();
    return 0;
}