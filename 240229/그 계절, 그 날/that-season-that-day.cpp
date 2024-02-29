#include <iostream>
using namespace std;

int y, m, d;

string CheckSeason()
{
    switch(m)
    {
        case 3:
        case 4:
        case 5:
            return "Spring";
            break;
        case 6:
        case 7:
        case 8:
            return "Summer";
            break;
        case 9:
        case 10:
        case 11:
            return "Fall";
            break;
        case 1:
        case 2:
        case 12:
            return "Winter";
            break;
    }
}

bool LeapYearCheck()
{
    if(y%4 == 0)
    {
        if(y%100 == 0)
        {
            if(y%400 == 0)
            {
                return true;
            }

            return false;
        }

        return true;
    }
    else
    {
        return false;
    }
}

int MaxDayOfMonth()
{
    if(LeapYearCheck())
    {
        if(m == 2)
        {
            return 29;
        }
        if(m == 4 || m == 6 || m == 9 || m == 11)
        {
            return 30;
        }

        return 31;
    }
    else
    {
        if(m == 2)
        {
            return 28;
        }
        if(m == 4 || m == 6 || m == 9 || m == 11)
        {
            return 30;
        }

        return 31;
    }
}

bool DayCheck(int maxDay, int curDay)
{
    if(curDay < maxDay+1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    cin >> y >> m >> d;

    if(DayCheck(MaxDayOfMonth(), d))
    {
        cout << CheckSeason();
    }
    else
    {
        cout << -1;
    }
    return 0;
}