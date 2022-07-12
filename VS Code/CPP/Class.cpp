#include <iostream>
using namespace std;

class Student
{
    char name [20];
    int age;
    int math;
    int literature;
    float average;
public:
    void Enter_Imformation ()
    {
        cout << "Name: ";
        cin >>name;
        cout << "Age: ";
        cin >> age;
        cout << "Math and Literature: ";
        cin >> math >> literature;
    }
    float Compute_Average ()
    {
        return ((math + literature) / 2.0);
    }
    void Show_Imformation ()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Math and Literature: " << math << " " << literature << endl;
        cout << "Average: " << Compute_Average() << endl;
    }
};

int main ()
{
    Student St;
    St.Enter_Imformation();
    St.Compute_Average();
    St.Show_Imformation();
    return 0;
}