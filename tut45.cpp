#include <iostream>
using namespace std;
/*
student --> test
student --> sports
test --> result
sports --> result
*/

class student
{
protected:
    int rollNo;

public:
    void setrollNo(int a)
    {
        rollNo = a;
    }
    void printNumber()
    {
        cout << "your roll number is " << rollNo << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void printMarks(void)
    {
        cout << "your result is here: "
             << "maths " << maths << endl
             << "physics " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setScore(float sc)
    {
        score = sc;
    }

    void printScore(void)
    {
        cout << "your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "your total score is " << total << endl;
    }
};

int main()
{
    result harry;
    harry.setrollNo(420);
    harry.setMarks(94.0, 90.0);
    harry.setScore(9);
    harry.display();

    return 0;
}