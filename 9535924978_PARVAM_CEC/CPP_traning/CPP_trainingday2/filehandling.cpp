# include <iostream>
# include <fstream>
using namespace std;
int main()
{
    //for writing
    // ofstream MyFile("C:\\Users\\Admin\\Documents\\website\\sample.txt");

    //MyFile<<"Hello World"<<endl;
    //MyFile<<"Hope you are fine \n wassup!"<<endl;
    string text;
    ifstream MyFile("C:\\Users\\Admin\\Documents\\website\\sample.txt");
    //getline(MyFile,text);
    //for to display all the lines
    while(getline(MyFile,text))
    cout<<text<< endl;
    MyFile.close();
    return 0;
}