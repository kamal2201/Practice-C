#include <iostream>
using namespace std;
int main()
{
    int a,b,c,temp;
    int cpuscore,yourscore,choice;
    a = 0; b = 1; c = 2;
    cout << "Welcome\n";
    cout << "0 --> Rock & 1 --> Paper & 2 --> Scissor\n";

    for (int i = 0; i < 5; i++)
    {
        srand(time(NULL));
        temp = rand() % 3;
        cout << "\nPlayer's turn : ";
        cin >> choice;
        cout << "Computer's turn : " << temp;
        if (choice == 1 && temp == 2)
        {
            cpuscore++;
        }
        if (choice == 0 && temp == 2)
        {
            yourscore++;
        }
        if (choice == 2 && temp == 2)
        {
            cpuscore++;
            yourscore++;
        }
        if (choice == 0 && temp == 1)
        {
            cpuscore++;
        }
        if (choice == 1 && temp == 1)
        {   
            cpuscore++;
            yourscore++;
        }
        if (choice == 2 && temp == 1)
        {
            yourscore++;
        }
        if (choice == 0 && temp == 0)
        {
            cpuscore++;
            yourscore++;
        }
        if (choice == 1 && temp == 0)
        {
            yourscore++;
        }
        if (choice == 2 && temp == 0)
        {
            cpuscore++;
        }
    }
    cout << "Your score is " << yourscore << "\n";
    cout << "Computer score is " << cpuscore << "\n";
    if (cpuscore > yourscore)
    {
        cout << "Computer won" << endl;
    }
    else if (cpuscore == yourscore)
    {
        cout << "Tie" << endl;
    }
    else
        cout << "You won" << endl;
}