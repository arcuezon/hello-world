#include<iostream>

using namespace std;

int main()
{
    string name;
    int age = 0;

    cout << "What is your name?";
    cin >> name;
    cout << "How old are you?";
    cin >> age;

    cout << "Hello " << name << "! You are " << age << " years old.";

    return 0;
}