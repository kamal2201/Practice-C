#include <iostream>
using namespace std;

void grade(int x)
{
    if (x<101 && x>90)
    {
        cout<<"A Grade"<<endl;
    }
    if (x<91 && x>80)
    {
        cout<<"B Grade"<<endl;
    }
    if (x<81 && x>70)
    {
        cout<<"C Grade"<<endl;
    }
    if (x<71 && x>60)
    {
        cout<<"D Grade"<<endl;
    }
    if (x<61 && x>50)
    {
        cout<<"E Grade"<<endl;
    }
    if (x<50)
    {
        cout<<"Fail"<<endl;
    }
}

int main()
{
    int marks;
    cout<<"Enter the marks of the student : ";
    cin>>marks;
    grade(marks);
}