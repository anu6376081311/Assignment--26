#include<iostream>
using namespace std;

class date
{
    private:
    int dd,mm,yy;

    public:
    date()
    {
        dd=31;
        mm=12;
        yy=2022;
        cout<<"\nDate objected has been created........";

    }
    void display()
    {
      cout<<"\nThe enteres date is ::";
      cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
    }

};

int main()
{
    date date1;
    date1.display();
    return 0;
}