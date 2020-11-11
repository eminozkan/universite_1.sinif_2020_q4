#include <iostream>

using namespace std;


struct currency{
    int pounds;
    int shillings;
    int pence;
};

int main(){
    int option;
    cout << "Type 1 to add two money amounts"<< endl;
    cout << "     2 to subtract two money amounts" << endl;
    cout << "     3 to multiply a money with integer number:";
    cin >> option;


    if (option == 1){
        currency m1;
        currency m2;
        currency result;
        char dot;
        cout << "Enter first amount (ex. 5.2.3)=";
        cin >> m1.pounds >> dot >> m1.shillings >> dot >> m1.pence;

        cout << "Enter second amount (ex. 4.2.1)=";
        cin >> m2.pounds >> dot >> m2.shillings >> dot >> m2.pence;

        result.pence = m1.pence + m2.pence;
        result.shillings = m1.shillings + m2.shillings;
        result.pounds = m1.pounds + m2.pounds;
        while (result.pence -20 >= 0){
            result.shillings++;
            result.pence-=20;
        }
        while (result.shillings- 12 >= 0){
            result.pounds++;
            result.shillings-=12;
        }

        cout << "\nFirst amount + Second amount =" <<result.pounds << dot << result.shillings << dot << result.pence;
    }else if(option == 2){
        currency m1;
        currency m2;
        currency result;
        char dot;
        cout << "Enter first amount and second amount (ex. 5.2.3)=";
        cin >> m1.pounds >> dot >> m1.shillings >> dot >> m1.pence;

        cout << "\nEnter second amount (ex.4.2.1)=";
        cin >> m2.pounds >> dot >> m2.shillings >> dot >> m2.pence;

        result.pence = m1.pence - m2.pence;

        if(result.pence < 0){
            if(m1.shillings>0) {
                m1.shillings--;
                result.pence = (m1.pence+20)-m2.pence;
            }else{
                m1.pounds--;
                m1.shillings+=11;
                result.pence = (m1.pence+20)-m2.pence;
            }
       }
        result.shillings = m1.shillings - m2.shillings;

        if(result.shillings < 0){
            m1.pounds--;
            m1.shillings+=12;
            result.shillings= m1.shillings-m2.shillings;
        }
        result.pounds = m1.pounds - m2.pounds;
        cout << "\nFirst amount - Second amount =" <<result.pounds << dot << result.shillings << dot << result.pence;
    }else if(option == 3){
        currency m1;
        int multiplierAmount;
        currency result;
        char dot;
        cout << "Enter first amount and second amount (ex. 5.2.3)=";
        cin >> m1.pounds >> dot >> m1.shillings >> dot >> m1.pence;

        cout << "\nEnter multiplier of amount=";
        cin >> multiplierAmount;

        result.pounds=multiplierAmount*m1.pounds;
        result.shillings=multiplierAmount*m1.shillings;
        result.pence=multiplierAmount*m1.pence;

        while (result.pence -20 >= 0){
            result.shillings++;
            result.pence-=20;
        }
        while (result.shillings- 12 >= 0){
            result.pounds++;
            result.shillings-=12;
        }

        cout << "\nFirst amount * "<<multiplierAmount <<"=" <<result.pounds << dot << result.shillings << dot << result.pence;



    }




    return 0;
}
