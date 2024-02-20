#include<iostream>
using namespace std;

typedef struct stdudent
{
    int id;
    string name;
    float marks;
}ep;
//ep==struct student
union money{
    int rice ;
    char car;
    float pounds;
};
int main(){
    ep nandani;
    nandani.id =76;
    nandani.name='N';
    nandani.marks=83.1;
    cout<<nandani.id<<endl;
    cout<<nandani.name<<endl;
    cout<<nandani.marks<<endl;
    ep kartike;
    nandani.id =64;
    nandani.name='k';
    nandani.marks=56.9;
    cout<<nandani.id<<endl;
    cout<<nandani.name<<endl;
    cout<<nandani.marks<<endl;
enum visit{ home,school,chuch,temple};
cout<<home;

cout<<chuch;
cout<<school;
cout<<temple<<endl;
union money mi;
mi.car='u';
mi.rice=87;
cout<<mi.car;
cout<<mi.rice;
}