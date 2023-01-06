//
// Created by travisfiorito on 1/6/23.
//
using namespace std;
#include <iostream>
#include "functions.h"
#include <string>
#include <time.h>
int Army_time(string localtime,string timezone1,string timezone2) {
    cout << "Converting " << timezone1 << " to " << timezone2 << "!";
}
string get_readable_time() {
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );

    // get and print the current time in a human-readable format
    char buffer[26];
    strftime(buffer, 26, "%c", now);
    std::cout << "The current time is: " << buffer << std::endl;

}