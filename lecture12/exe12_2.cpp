#include<iostream> 
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int toSeconds(Time now);

int main()
 {
    Time t;
     cout << "Enter a time (hours, minutes, seconds) to convert to seconds: ";
    cin >> t.hours >> t.minutes >> t.seconds;
    cout << "Total seconds: " << toSeconds(t) << endl;
    getchar();
    return 0;
}

int toSeconds(Time now)
 {
    return 3600*now.hours + 60*now.minutes + now.seconds;
}
