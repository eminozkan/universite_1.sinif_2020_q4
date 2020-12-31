/*
 11. Write a program, based on the sterling structure of Exercise 10 in Chapter 4, that
obtains from the user two money amounts in old-style British format (£9:19:11), adds
them, and displays the result, again in old-style format. Use three functions. The first
should obtain a pounds-shillings-pence value from the user and return the value as a
structure of type sterling. The second should take two arguments of type sterling and
return a value of the same type, which is the sum of the arguments. The third should take
a sterling structure as its argument and display its value.
 */

#include <iostream>

using namespace std;

struct sterling{
    int pounds;
    int shillings;
    int pence;
};
sterling get_moneyamount(){
    sterling m1;
    cout << "Enter amount:";
    cin >> m1.pounds >> m1.shillings >> m1.pence;

    return m1;
}
sterling add_two_moneyamount(sterling m1, sterling m2){
    m1.pounds+=m2.pounds;
    m1.shillings+=m2.shillings;
    m1.pence+=m2.pence;
    while(m1.pence - 20 >= 0){
        m1.pence-=20;
        m1.shillings++;
    }
    while(m1.shillings - 12 >= 0){
        m1.shillings-=12;
        m1.pounds++;
    }
    return m1;
}
void print_total_moneyamount(sterling m1){
    cout << "Total money amount = \x9c" << m1.pounds << '.' << m1.shillings << '.' << m1.pence << endl;
}

int main(){
    sterling m1 = get_moneyamount();
    sterling m2 = get_moneyamount();
    sterling result = add_two_moneyamount(m1,m2);
    print_total_moneyamount(result);


    return 0;
}
