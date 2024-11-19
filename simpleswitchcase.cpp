#include <iostream>
using namespace std;
int main(){
    int opt;
    
    cout<<"Hi. This is your BBIT Sem 1 Timetable (May-Aug 2024)";
    cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday"<<endl<<endl;
    cout<<"Please select day of choice (e.g. 1, 2, 3, etc...)"<<endl;
    cin>>opt;
    
    switch (opt){
        case 1:
            cout<<"Monday Classes\n...................."<<endl;
            cout<<"\t1. BBIT 1106: Math for Bussiness computing"<<endl;
            cout<<"\t2. BBIT 1102: Intro to Programming"<<endl;
            break;
            
        case 2:
            cout<<"Tuesday Classes\n..................."<<endl;
            cout<<"\t1. BBIT 1102: Intro to Programming"<<endl;
            cout<<"\t2. BBIT 1104: Intro to Ethics"<<endl;
            break;
        
        case 3:
            cout<<"Wednesday Classes\n..................."<<endl;
            cout<<"\t1. BBIT 1103: Computer Systems"<<endl;
            cout<<"\t2. BBIT 1105: Communication Skills"<<endl;
            break;

        case 4:
            cout<<"Thursday Classes\n..................."<<endl;
            cout<<"\t1. BBIT 1101: Introduction to Business"<<endl;
            cout<<"\t2. BBIT 1106: Mathematics"<<endl;
            break;

        case 5:
            cout<<"Friday Classes\n..................."<<endl;
            cout<<"\t1. BBIT 1102: Accounting"<<endl;
            cout<<"\t2. BBIT 1103: Faith and Reason"<<endl;
            break;
        
        default:
            cout<<"Invalid Input";          
    }
    return 0;}