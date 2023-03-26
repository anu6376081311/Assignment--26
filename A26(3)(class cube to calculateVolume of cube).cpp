#include<iostream>
using namespace std;
class cube
{
    private:
      
    public:
     double side;
     double volume()
     {
        return (side*side*side);
     }
     
     cube (double side1)
     {
        cout<<"\n A constructor is called"<<endl;
        side = side1;
     }

    cube()
    {
         cout<<"\nA default constructor is called"<<endl;
    }

    ~cube()
    {
        cout<<"\ndestructor "<<side<<endl;
    }   

};
int main()
{
    cube c1(2.34);
    cube c2;
    cout<<"\nThe side of the cube is :"<<c1.side<<endl;
    cout<<"\nThe volume of the  frist cube is :"<<c1.volume()<<endl;
    cout<<"\nThe length  of the second cube is :"<<endl;
    cin>>c2.side;
    cout<<"\nThe volume of  the second cube is :"<<c2.volume()<<endl;
    return 0;
}
