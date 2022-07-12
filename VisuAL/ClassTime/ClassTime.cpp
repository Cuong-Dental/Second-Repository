#include <iostream>
#include <string>
using namespace std;

class Time {
    int hour;
    int minute;
    int second;
public:
    Time() {
        cout << "DOne!\n";
    }
    Time(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void setTime(int hour, int minute, int second) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void setHour(int hour) {
        this->hour = hour;
    }
    void setMinute(int minute) {
        this->minute = minute;
    }
    void setSecond(int second) {
        this->second = second;
    }
    void inputHour() {
        cout << "Input Hour = ";
        cin >> this->hour;
    }
    void inputMinute() {
        cout << "Input Minute = ";
        cin >> this->minute;
    }
    void inputSecond() {
        cout << "Input Second = ";
        cin >> this->second;
    }
    int getHour() {
        return hour;
    }
    int getMinute() {
        return minute;
    }
    int getSecond() {
        return second;
    }
    void nextSecond() {
        if (this->second == 59) {
            this->second = 0;
            if (this->minute == 59) {
                this->minute = 0;
                if (this->hour == 23) {
                    this->hour = 0;
                }
                else this->hour++;
            }
            else this->minute++;
        }
        else this->second++;
    }
    void previousSecond() {
        if (this->second == 0) {
            this->second = 59;
            if (this->minute == 0) {
                this->minute = 59;
                if (this->hour == 0) {
                    this->hour = 23;
                }
                else this->hour--;
            }
            else this->minute--;
        }
        else this->second--;
    }
    void display() {
        string second = to_string (this->second);
        string minute = to_string (this->minute);
        string hour = to_string (this->hour);
        if (second.length() == 1) {
            second = '0' + second;
        }
        if (minute.length() == 1) {
            minute = '0' + minute;
        }
        if (hour.length() == 1) {
            hour = '0' + hour;
        }
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {
    Time t;
    t.inputHour();
    t.inputMinute();
    t.inputSecond();
    t.display();
    //Time t(12, 1, 1);
    //t.display();
    //t.setTime(23, 59, 59);
    //t.display();
    //t.nextSecond();
    //t.display();
    //t.nextSecond();
    //t.display();
    //t.setTime(7, 0, 0);
    //t.display();
    //t.previousSecond();
    //t.display();
    return 0;
}