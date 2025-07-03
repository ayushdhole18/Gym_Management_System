#include<iostream>
#include<vector>
using namespace std;
class Member{
    private :
    string name;
    int age;
    bool attendance;
    public : 
    Member(string name, int age){
        this->name = name;
        this->age = age;
        this->attendance = false;
    }
    string getName(){
    return name;
    }
    int getAge(){
        return age;
    }
    bool getAttendance(){
        return attendance;
    }
    setAttendance(bool attendace){
        this-> attendance = attendance;
    }
};
class Gym{
    private : 
    vector<Member> ve;
    public :
    add(string name, iint age){
        Member member(name, age);
        ve.push_back(member):
        cout<<"Member Added"<<endl<<endl;
    }
    markAttendance(string name){
        for(init i = 0; i<ve.size(); i++){
            if(name == ve[i].getName()){
                v[i],setAttendance(true);
                cout<<"Attendance marked for member : "<<ve[i].getName()<<endl;

            }
        }
    }
    fees(){
        int total = 0;
        for(int i=0; i<ve.size();i++){
            if(ve[i].getAtteandance()){
        int fees= ve[i].getAge()>21? 2000 : 1000;
        total+=fees;
            }
        }
        cout<<"Total Fees : "<<total<<endl<<endl;
    }
};
int main(){
    Gym gym;
    cout << "********* Gym Management *********"<<endl;
    while(true){
        cout<<"1. Add Member : "<<endl;
        cout<<"2. Mark Attendance : "<<endl;
        cout<<"3. Total Fees : "<<endl;
        cout<<"4. Exit! "<<endl;
        cout<<"Enter Your Choice"; cin>>value;

        if (value ==1){
            system("cls");
            string name; int age;
            cout<<"Enter name : "; cin>>name;
            cout<<"Enter age : ": cin>>age;
            gym.add(name, age);
        }
    else if (value == 2){
        system("cls");
        string name;
        cout<<"Enter name : "; cin>>name;
        gym.markAttendance(name);
    }
    else if(value == 3){
        system("cls");
        gym.fees();
    }
    else if(value == 0){
        Exit(0);
    }
    else {
        system("cls");
        cout << "Invalid input!"<<endl;
    }
    }
}