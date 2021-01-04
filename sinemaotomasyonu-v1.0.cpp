#include <iostream>
#include <string>

using namespace std;
//01-001
//02-001
struct salon{
    bool isChair1Filled;
    bool isChair2Filled;
};
struct bilet{
    string salonno;
    string koltukno;
};
salon salon1{0,0};
salon salon2{0,0};

bool isSalon1empty;
bool isSalon2empty;

void checksalon(){
    if(salon1.isChair1Filled == 0 || salon1.isChair2Filled == 0){
        isSalon1empty = 1;
    }
    if(salon1.isChair1Filled == 1 && salon1.isChair2Filled == 1){
        isSalon1empty = 0;
    }
    if(salon2.isChair1Filled == 0 || salon2.isChair2Filled == 0){
        isSalon2empty = 1;
    }
    if(salon2.isChair1Filled == 1 && salon2.isChair2Filled == 1){
        isSalon2empty = 0;
    }
};

bilet biletal(){
    bilet biletno;
    checksalon();

    if(isSalon1empty){
        if(!salon1.isChair1Filled){
            biletno = {"01-","001"};
            salon1.isChair1Filled = 1;
            cout << "\n===================================";
            cout << "\n Bilet numaraniz = " << biletno.salonno << biletno.koltukno;
        }else if(!salon1.isChair2Filled){
            biletno = {"01-","002"};
            salon1.isChair2Filled = 1;
            cout << "\n===================================";
            cout << "\n Bilet numaraniz = " << biletno.salonno << biletno.koltukno;
        }
    }else if(isSalon2empty){
        if(!salon2.isChair1Filled){
            biletno = {"02-","001"};
            salon2.isChair1Filled = 1;
            cout << "\n===================================";
            cout << "\n Bilet numaraniz = " << biletno.salonno << biletno.koltukno;
        }else if(!salon2.isChair2Filled){
           biletno = {"02-","002"};
            salon2.isChair2Filled = 1;
            cout << "\n===================================";
            cout << "\n Bilet numaraniz = " << biletno.salonno << biletno.koltukno;
        }
    }else {
        cout << "\n \n===================================" << endl;
        cout << "Bos salonumuz bulunmamaktadir";
    }
    return biletno;
}
void ucretiyazdir(string biletno){
    int ucret = 10;
    bilet bilet;
    bilet.salonno = biletno[1];
    bilet.koltukno = biletno[5];
    cout << "\n===================================";
    cout << "\nOdemeniz gereken tutar = "<< ucret << "TL";
    if (bilet.salonno == "1" && bilet.koltukno == "1"){
        salon1.isChair1Filled = 0;
    }else if (bilet.salonno == "1" && bilet.koltukno == "2"){
        salon1.isChair2Filled = 0;
    }else if (bilet.salonno == "2" && bilet.koltukno == "1"){
        salon2.isChair1Filled = 0;
    }else if (bilet.salonno == "2" && bilet.koltukno == "2"){
        salon1.isChair2Filled = 0;
    }

}

bool checkpassword(string parola){
    string correctpassword = "parola";
    if (parola == correctpassword){
        return true;
    }else{
        return false;
    }

}


int main(){
   while(true){
       char input;
       cout << "Lutfen islem seciniz";
       cout << "\nBilet almak icin (g):";
       cout << "\nUcret odemek icin (p):";
       cout << "\nProgrami kapatmak icin(q):";
       cin >> input;
       if(input == 'g'){
           biletal();
       }
       if(input == 'p'){
           string biletno;
           cout << "\n===================================" << endl;
           cout << "Bilet no giriniz:";
           cin >> biletno;
           ucretiyazdir(biletno);
       }
       if(input == 'q'){
           string parola;
           cout << "Parolayi giriniz:";
           cin >> parola;
           if(checkpassword(parola)){
               break;
           }else{
               cout << "===================================";
               cout << "\nHatali parola girdiniz";
           }

       }
        cout << "\n=================================== \n \n \n";
   }
    cout << "\n===========================================";
    cout << "\n|\tProgram basariyla kapatildi \t  |";
    cout << "\n===========================================";


    return 0;
}
