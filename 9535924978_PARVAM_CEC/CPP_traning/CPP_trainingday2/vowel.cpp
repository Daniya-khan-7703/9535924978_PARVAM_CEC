# include <iostream>
using namespace std;
int main()
{
    char d,x;
    cout << "enter a chararter :"<<endl;
    cin>>x;
    x = _tolower(d);
    if (x == 'a'|| x == 'e' ||x =='i'||x == 'o'||x =='u'){
        cout << "the character is a vowel"<<endl;
    }
    else {
        cout << "it is a consonant"<<endl;
    }
    return 0;
}