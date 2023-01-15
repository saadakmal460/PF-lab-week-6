#include <iostream>
using namespace std;

float lowestPrice(int n, string time);


main()
{

    int kilometers;
    string time;

    cout << "Enter number of kilometers: ";
    cin >> kilometers;

    cout << "Enter period of time: ";
    cin >> time;

    float result = lowestPrice(kilometers, time);
    

    cout << result;

}

float lowestPrice(int n, string time)
{

    float fare;

    if (n >= 100 && (time == "day" || time == "night"))
    {

        fare = n * 0.06;
    }
    else if (n >= 20 && n < 100)
    {

        fare = n * 0.09;
    }

    else if (time == "day")
    {
        fare = n * 0.79 + 0.70;
    }
    else if (time == "night")
    {

        fare = n * 0.90 + 0.70;
    }

    else
    {
        fare = 0;
    }

    return fare;
}

