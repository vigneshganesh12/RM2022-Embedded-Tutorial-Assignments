// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

struct times{
    int day;
    int hour;
    int min;
    int sec;

};
// the starting of program
int main()
{
    struct times T;
    // the input, number of seconds
    long secRaw = 0;

    // the output, how many days, hours, minutes, seconds
    int day = 0, hour = 0, min = 0, sec = 0;

    // get input from the console
    cout << "Enter the number of seconds: " << endl;
    cin >> secRaw;

    /* Write your code under this line */
    day = secRaw/86400;
    hour = ((secRaw%86400)/3600);
    min = ((secRaw%86400)%3600)/60;
    sec = ((secRaw%86400)%3600)%60;
    /* Write your code above this line */

    // output the result
    cout << secRaw << " seconds = " << day << " days, " << hour << " hours, " << min << " mins, " << sec << " secs." << endl;

    // end of the program
    return 0;
}