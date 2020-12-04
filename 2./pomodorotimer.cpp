#include <iostream>
#include <unistd.h> // in linux: sleep()

// #include <windows.h> // in windows: Sleep()


using namespace std;

void displayTime(int minutes, int seconds) {

    if(seconds == 0 && minutes < 10){
        cout << '0' <<minutes << ":"
             << seconds <<seconds <<   endl;
    }else if (seconds == 0){
        cout << minutes << ":"
             << seconds <<seconds<<  endl;
    }else if(minutes < 10 && seconds < 10){
        cout << '0' << minutes << ":"
             <<'0'<< seconds << endl;
    }
    else if(minutes< 10) {
        cout << '0' << minutes << ":"
             << seconds << endl;
    }else if(seconds < 10){
        cout << minutes << ":"
             << '0' << seconds << endl;
    }else{
        cout << minutes << ":"
             << seconds << endl;
    }
}
void pomodorotimer(){

    int min = 25;
    int sec = 0;

    displayTime(min, sec);

    while(sec >= 0 && min >= 0) {
        sleep(1);

        if(sec < 0 && min < 0){
            break;
        }else if(sec <= 0) {
            min--;
            sec = 60;
        }
        sec--;
        displayTime(min, sec);

    }

};

void shortbreak(){
    int min = 5;
    int sec = 0;

    displayTime(min, sec);


    while(sec >= 0 && min >= 0) {
        sleep(1);

        if(sec < 0 && min < 0){
            break;
        }else if(sec <= 0) {
            min--;
            sec = 60;
        }
        sec--;
        displayTime(min, sec);

    }

};
void longbreak(){

    int min = 10;
    int sec = 00;

    displayTime(min, sec);


    while(sec >= 0 && min >= 0) {
        sleep(1);

        if(sec < 0 && min < 0){
            break;
        }else if(sec <= 0) {
            min--;
            sec = 60;
        }
        sec--;
        displayTime(min, sec);

    }

};
int main() {
    char input = 'h';
    do {
        int option;
        cout << "Pomodoro Timer - 1" << endl;
        cout << "Short Break - 2" << endl;
        cout << "Long Break - 3 :";
        cin >> option;

        switch (option) {
            case 1:
                pomodorotimer();

                break;
            case 2:
                shortbreak();

                break;
            case 3:
                longbreak();
                break;
            default:
                cout << "Choose an correct option!";
        }
        cout << "If you want to exit, enter e; one more time press h";
        cin >> input;
    }while (input != 'e');

    return 0;
}
