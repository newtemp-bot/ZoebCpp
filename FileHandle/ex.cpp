#include<iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyFile("test.txt",ios::out | ios::app);
    MyFile << "How are you?\n Test";
    MyFile.close();
    return 0;
}