#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; // static by defalt 0 (static data member)

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(void)
    {
        cout << "The value of Count is " << count << endl;
    }
};

int Employee ::count;
int main()
{
    Employee harry, rohan, lovish;

    harry.setData();
    harry.getData();

    Employee ::getcount();

    rohan.setData();
    rohan.getData();

    Employee ::getcount();

    lovish.setData();
    lovish.getData();

    Employee ::getcount();

    
    return 0;
}