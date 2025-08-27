#include <iostream>
using namespace std;

int main(){
    //Simple Job Eligibility Checker
    /*
     Eligibilty Criteria:
     -Over 18 or 18.
     -Under 57.
     -If older than 55 retirement soon alert.
     
     Features:
     -Calculates automatically how many years to wait if not 18 or above
     -Detects mistakes of fake ages under 0
     -Frank with the user
     
     Artitecture:
     -Simple If-Else Structure with integration of Else If.
    
     */
    int age;
    cout<<"Enter you age: ";
    cin>>age;
    
    if (age>0){
        if (age<18){
            cout<<"You have to wait "<<18-age<<" years to get a job."<<endl;
        }
        else if(age<=57){
            if(age>=55){
                cout<<"You are eligible for a job but retirement soon buddy :)"<<endl;
            }
            else{
                cout<<"You are eligible for job."<<endl;
            }
        }
        else{
            cout<<"You are not eligible for work"<<endl;
        }
    }
    else{
        cout<<"Please enter the correct age. Don't joke with your age :)."<<endl;
    }
    
    return 0;
}


