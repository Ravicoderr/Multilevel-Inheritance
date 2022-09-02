#include <iostream>
using namespace std;
class student
{
    int rollnumber;

public:
    void set_rollnumber(int roll);
    void get_rollnumber();
};
void student::set_rollnumber(int roll)
{
    rollnumber = roll;
}
void student::get_rollnumber()
{
    cout << "the rollnumber is " << rollnumber << endl;
}



class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void getmarks()
    {
        cout << "the marks obtained in maths are " << maths << endl;
        cout << "the marks obtained in physics are " << physics << endl;
    }
};


class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_rollnumber();
        getmarks();
        cout << "the percentage obtained is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    result ravi;
    ravi.set_rollnumber(1);
    ravi.setmarks(96.8, 99.2);
    ravi.display();
    return 0;
}
