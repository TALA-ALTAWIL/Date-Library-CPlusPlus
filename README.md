# Date-Library-CPlusPlus

A complete C++ class for handling dates with full functionality, including validation, arithmetic, calendar printing, and business day calculations.

## Table of Contents

1. [Features](#features)
2. [Constructors](#constructors)
3. [Date Getters and Setters](#date-getters-and-setters)
4. [Validation](#validation)
5. [Date Conversion](#date-conversion)
6. [Leap Year & Month Info](#leap-year--month-info)
7. [Day of Week & Month Names](#day-of-week--month-names)
8. [Calendar Printing](#calendar-printing)
9. [Date Arithmetic](#date-arithmetic)
10. [Comparison](#comparison)
11. [Business Days & Vacation](#business-days--vacation)
12. [Usage Example](#usage-example)
13. [Requirements](#requirements)
---

## Features

* Create and manage dates in multiple formats
* Validate dates including leap years
* Add/subtract days, weeks, months, years, decades, centuries, millennia
* Compare dates: before, after, equal
* Print month and year calendars
* Calculate business days and vacation return dates
* Get day of week, days until end of week/month/year

---

## Constructors

* `clsDate()` → system date
* `clsDate(string sDate)` → from string `"DD/MM/YYYY"`
* `clsDate(short Day, short Month, short Year)` → from day, month, year
* `clsDate(short DateOrderInYear, short Year)` → construct by day-order in year

---

## Date Getters and Setters

* `GetDay()`, `SetDay(short Day)` → `Day` property
* `GetMonth()`, `SetMonth(short Month)` → `Month` property
* `GetYear()`, `SetYear(short Year)` → `Year` property

---

## Validation

* `IsValidDate(clsDate Date)` → static, check if date is valid
* `IsValid()` → member, check current object
* `isLeapYear(short Year)` → static, check leap year
* `isLeapYear()` → member, current year

---

## Date Conversion

* `DateToString(clsDate Date)` → static
* `DateToString()` → member

---

## Leap Year & Month Info

* `NumberOfDaysInAYear(short Year)` / `NumberOfDaysInAYear()`
* `NumberOfHoursInAYear(short Year)` / `NumberOfHoursInAYear()`
* `NumberOfMinutesInAYear(short Year)` / `NumberOfMinutesInAYear()`
* `NumberOfSecondsInAYear(short Year)` / `NumberOfSecondsInAYear()`
* `NumberOfDaysInAMonth(short Month, short Year)` / `NumberOfDaysInAMonth()`
* `NumberOfHoursInAMonth(short Month, short Year)` / `NumberOfHoursInAMonth()`
* `NumberOfMinutesInAMonth(short Month, short Year)` / `NumberOfMinutesInAMonth()`
* `NumberOfSecondsInAMonth(short Month, short Year)` / `NumberOfSecondsInAMonth()`

---

## Day of Week & Month Names

* `DayOfWeekOrder(short Day, short Month, short Year)` / `DayOfWeekOrder()`
* `DayShortName(short DayOfWeekOrder)` / `DayShortName()` / `DayShortName(short Day, short Month, short Year)`
* `MonthShortName(short MonthNumber)` / `MonthShortName()`

---

## Calendar Printing

* `PrintMonthCalendar(short Month, short Year)` / `PrintMonthCalendar()`
* `PrintYearCalendar(int Year)` / `PrintYearCalendar()`

---

## Date Arithmetic

* `AddDays(short Days)` / `IncreaseDateByXDays(short Days)`
* `AddOneDay()` / `IncreaseDateByOneDay()`
* `IncreaseDateByOneWeek()` / `IncreaseDateByXWeeks(short Weeks)`
* `IncreaseDateByOneMonth()` / `IncreaseDateByXMonths(short Months)`
* `IncreaseDateByOneYear()` / `IncreaseDateByXYears(short Years)`
* `IncreaseDateByOneDecade()` / `IncreaseDateByXDecades(short Decade)`
* `IncreaseDateByOneCentury()`
* `IncreaseDateByOneMillennium()`
* `DecreaseDateByOneDay()` / `DecreaseDateByXDays(short Days)`
* `DecreaseDateByOneWeek()` / `DecreaseDateByXWeeks(short Weeks)`
* `DecreaseDateByOneMonth()` / `DecreaseDateByXMonths(short Months)`
* `DecreaseDateByOneYear()` / `DecreaseDateByXYears(short Years)`
* `DecreaseDateByOneDecade()` / `DecreaseDateByXDecades(short Decades)`
* `DecreaseDateByOneCentury()`
* `DecreaseDateByOneMillennium()`

---

## Comparison

* `IsDate1BeforeDate2(clsDate Date1, clsDate Date2)` / `IsDateBeforeDate2(clsDate Date2)`
* `IsDate1EqualDate2(clsDate Date1, clsDate Date2)` / `IsDateEqualDate2(clsDate Date2)`
* `IsDate1AfterDate2(clsDate Date1, clsDate Date2)` / `IsDateAfterDate2(clsDate Date2)`
* `CompareDates(clsDate Date1, clsDate Date2)` / `CompareDates(clsDate Date2)`
* Enum `enDateCompare { Before = -1, Equal = 0, After = 1 }`

---

## Business Days & Vacation

* `IsEndOfWeek(clsDate Date)` / `IsEndOfWeek()`
* `IsWeekEnd(clsDate Date)` / `IsWeekEnd()`
* `IsBusinessDay(clsDate Date)` / `IsBusinessDay()`
* `DaysUntilTheEndOfWeek(clsDate Date)` / `DaysUntilTheEndOfWeek()`
* `DaysUntilTheEndOfMonth(clsDate Date)` / `DaysUntilTheEndOfMonth()`
* `DaysUntilTheEndOfYear(clsDate Date)` / `DaysUntilTheEndOfYear()`
* `CalculateBusinessDays(clsDate DateFrom, clsDate DateTo)`
* `CalculateVacationDays(clsDate DateFrom, clsDate DateTo)`
* `CalculateVacationReturnDate(clsDate DateFrom, short VacationDays)`

---

## Usage Example

```cpp
#include "clsDate.h"
#include <iostream>

int main() {
    clsDate today;
    today.Print(); // System date

    clsDate birthday("15/03/2000");
    std::cout << "Age in days: " << clsDate::CalculateMyAgeInDays(birthday) << std::endl;

    today.AddOneDay();
    today.Print();

    today.PrintMonthCalendar();
    today.PrintYearCalendar();

    clsDate newDate = clsDate::AddOneDay(today);
    newDate.Print();

    return 0;
}
```

---

## Requirements

* C++11 or higher
* Standard C++ Library

---

