# include <iostream>
using namespace std;
class Linear
{
    private:
    int a[10],loc,i,flag,key;
    public:
    void getdata()
    {
        cout << "enter the elements of the array:" << endl;
        for(i=0;i<10;i++)
        cin >> a[i];
        cout << "enter the elements to be searched :"<< endl;
        cin>> key;

    }
    void search()
    {
        flag = 0 ;
        for (i=0;i<10;i++)
        {
            if(a[i] == key)
            {
                loc = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            cout << "the element " << key << " is found at location "<< loc << endl;
        }
        else 
        {
            cout << "the element " << key << " is not to be found";
        }
    }
};
int main()
{
    Linear obj;
    obj.getdata();
    obj.search();
    return 0;
}