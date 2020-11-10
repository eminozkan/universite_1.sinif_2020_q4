#include <iostream>

using namespace std;

int main(){
    char input_char;
    cout << "Bir harf giriniz:";
    cin >> input_char;

    int input_char_ascii= input_char;


        if(input_char_ascii>=65 && input_char_ascii<=90 ){
            int kucukharf_Ascii = input_char_ascii + 32;
            char kucukharf = kucukharf_Ascii;
            cout <<"Girdiginiz harfin kucuk hali:"<< kucukharf;

        }else if(input_char_ascii>=97 && input_char_ascii<=122){
            int buyukharf_Ascii = input_char_ascii - 32;
            char buyukharf = buyukharf_Ascii;
            cout << "Girdiginiz harfin buyuk hali:" << buyukharf;
        }else {
            cout << "Hatali bir karakter girdiniz.";
            return -1;
        }


    return 0;
}
