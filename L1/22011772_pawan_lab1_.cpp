/*
id = 2201772
name = pawandeep singh a/l balwinder singh
*/

#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    int contact;
    string email;
};

int main() {
    Student student[5];

    for (int i = 0; i < 5; i++) {
        cout<<"Enter the id for student " << i + 1 << ": ";cin>>student[i].id;
        cout<<"Enter the name for student " << i + 1 << ": ";cin>>student[i].name;
        cout<<"Enter the contact for student " << i + 1 << ": ";cin>>student[i].contact;
        cout<<"Enter the email for student " << i + 1 << ": ";cin>>student[i].email;
        cout<<endl; 
    }

    for (int i = 0; i < 5; i++) {
        cout<<"****************************" << endl;
        cout<<"Student " << i + 1 <<endl;
        cout<<" ID: " << student[i].id << endl;
        cout<<" Name: " << student[i].name << endl;
        cout<<" Contact: " << student[i].contact << endl;
        cout<<" Email: " << student[i].email << endl;
        cout<<"****************************" << endl;
        cout<<endl;
    }

    return 0;
}
