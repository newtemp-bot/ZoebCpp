#include <iostream>
#include <string>
using namespace std;
int main(){
    string s = "\nHello\"s";
    string w = "World!";
    string sw = s+" "+w;
    string swa = s.append(" "+w);
    int i = 10;
    string j = "20";
    cout<<sw;
    cout<<swa;
    cout<<endl<<swa.length();
    cout<<endl<<swa.size();
    cout<<endl<<swa[2];
    cout<<endl<<swa[swa.length()-1];
    swa[1] = 'K';
    cout<<endl<<swa;
    //cout<<j+i;//error
    string name = "";
    cout<<endl<<"Enter Your name = ";
    //cin>>name;//to get value from a user
    getline(cin,name);
    cout<<"Your name is = "+name;
}