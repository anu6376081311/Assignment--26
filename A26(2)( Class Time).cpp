#include<iostream>
using namespace std;
 class Time
 {
   private:
   int HR,MIN,SEC;
   public:
      void setTime(int x,int y, int z)
      {
        HR = x;
        MIN = y;
        SEC = z;
      }

      void showTime()
      {
        cout<<endl<<HR<<":"<<MIN<<":"<<SEC;
      }

      void normalize()
      {
        MIN = MIN + SEC / 60;
        SEC = SEC % 60;
        HR = HR + MIN / 60;
        MIN = MIN % 60;
      }

      Time add(Time t)
      {
        Time temp;
        temp.SEC = SEC + t.SEC;
        temp.MIN = MIN + t.MIN;
        temp.HR = HR + t.HR;
        temp.normalize();
        return(temp);

      }
 };

 int main()
 {
    Time t1,t2,t3;
    t1.setTime(5,50,30);
    t2.setTime(7,20,34);

    // Operator overloading
    t3 = t1.add(t2);
    //  Printing result
    t1.showTime();
    t2.showTime();
    t3.showTime();

 }

