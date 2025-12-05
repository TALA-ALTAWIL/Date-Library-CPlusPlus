#include <iostream>
#include "clsDate.h"

using namespace std;

int main()

{
    clsDate Date1;
    Date1.Print();

    clsDate Date2("11/1/2012");
    Date2.Print();

    clsDate Date3(20, 7, 2000);
    Date3.Print();

    clsDate Date4(500, 2021);
    Date4.Print();

    Date1.PrintMonthCalendar();

    system("pause>0");
    return 0;
};

