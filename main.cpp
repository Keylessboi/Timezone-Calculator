#include <iostream>
#include <ctime>
#include "time.h"
#include "functions.h"
#include <string>
#include <time.h>

using namespace std;
int main() {

    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );

    // get the local timezone as a three-letter abbreviation
    char buffer[80];
    strftime(buffer, 80, "%Z", now);
    std::string timezone(buffer);
    int i = 0;
    string timetype;
    cout << "Detected timezone " << buffer << " " << get_readable_time << endl;
    while (i < 1) {
        cout << "Army based time or Civilian time?\n\n";
        cout << "Options: \"army\", \"civilian\". Please use correct capitalization as show in options\n";
        cin >> timetype;
        if (timetype == "army" or timetype == "civilian") {
            i++;
        }
    }
    cout << "What timezone would you like to convert too?\n";
    return 0;
}