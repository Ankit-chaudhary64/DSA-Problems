#include <iostream>
using namespace std;
class person
{
public:   //base class of inheritance
    int age;
    string name;
 void getData(int ae, string nme)
    {
        age = ae;
        name = nme;
    }
    void displayData()
    {
        cout << age <<endl<< name;
    }
};
class student :public person{  //derived class of inheritance 
    public:
    int rollNo;
    void getRollNo(int r){
        rollNo=r;
    }
    void showstudenDataInfo(){
        displayData();
        cout <<rollNo;
    }

};
int main()
{
    student s1;
    s1.getData(23, "ankit");
    s1.getRollNo(2445);
    s1.showstudenDataInfo();
    return 0; 
}
