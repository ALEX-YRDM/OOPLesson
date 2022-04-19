//
// Created by zbq on 2022/4/19.
//
#include"Date.h"

int Date::Month_normal[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int Date::Month_special[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


Date::Date(int dd, int mm, int yy) {
    try {
        if (dd <= 0 || mm <= 0 || mm > 12 || yy < 1970) {
            throw Bad_date();
        }
        year = yy;
        month = mm;
        if (Date::leap_year(yy)) {
            if (dd > Date::Month_special[mm - 1]) {
                throw Bad_date();
            }
        } else {
            if (dd > Date::Month_normal[mm - 1]) {
                throw Bad_date();
            }
        }
        day = dd;
    } catch (Bad_date e) {
        cout << e.what() << endl;
        exit(-1);
    }
    days = 0;
    int i = dd, j = mm, k = yy;
    while (k > 1970) {
        if (leap_year(k))
            days += 366;
        else
            days += 365;
        k--;
    }
    while (j >= 2) {
        if (leap_year(yy)) {
            days += Month_special[j - 2];
        } else {
            days += Month_normal[j - 2];
        }
        j--;
    }
    days += (i - 1);

}

void Date::set_default() {
    Date default_date(1, 1, 1970);
}

/*void Date::setDay(int dd) {
    try{
        if(dd<=0){
            throw Bad_date();
        }
        if(Date::leap_year(year)){
            if(dd>Date::Month_special[month-1]){
                throw Bad_date();
            }
        }
        else{
            if(dd>Date::Month_normal[month-1]){
                throw Bad_date();
            }
        day=dd;
        }
    }catch (Bad_date e){
        cout<<e.what()<<endl;
    }
}
void Date::setMonth(int mm) {
    try{
        if(mm<=0||mm>12)
            throw Bad_date();
        month=mm;
    }catch(Bad_date e){
        cout<<e.what()<<endl;
    }
}
void Date::setYear(int yy) {
    try{
        if(yy<1970)
            throw Bad_date();
        year=yy;
    }catch(Bad_date e){
        cout<<e.what()<<endl;
    }
}*/
bool Date::leap_year(int year) {
    if (year < 1970) {
        throw Bad_date();
    }
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

/*int Date::getDay() const {
    return day;
}
int Date::getMonth() const {
    return month;
}
int Date::getYear() const {
    return year;
}*/
long Date::getDays() const {
    return days;
}

Date &Date::add_day(int n) {

    return getDate(this->days+n);
    /*if(leap_year(year)){
        if((day+n)>Month_special[month-1]){
            day=(day+n)%Month_special[month-1];
            month++;
            if(month>12){
                month-=12;
                year++;
            }
        }
    }else{
        if((day+n)>Month_special[month-1]){
            day=(day+n)%Month_normal[month-1];
            month++;
            if(month>12){
                month-=12;
                year++;
            }
        }
    }*/
}

Date& Date::add_month(int n) {
    /*this->year += (this->month + n) / 12;
    this->month = (this->month + n) % 12;
    return *this;*/
    int sum=0,mm=month;
    for(int i=1;i<=n;i++){
        if(leap_year(year)){
            sum+=Month_special[(mm-2+i)%12];
            mm++;
        }else{
            sum+=Month_normal[(mm-2+i)%12];
            mm++;
        }

    }
    return this->getDate(days+sum);
}

Date &Date::add_year(int n) {
    int yy=year,sum=0;
    for(int i=1;i<=n;i++){
        if(leap_year(yy)){
            sum+=366;
        }else
            sum+=365;
        yy++;
    }
    return getDate(days+sum);
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

int Date::getWeek() const {
    int index = days % 7;
    index+=4;
    if(index<8){
        return index;
    }else
        return index-7;
}

Date& Date::getDate(long dds) {
   /* Date date1(1, 1, 1970);

    while (date1.days < dds) {
        if (leap_year(date1.year)) {
            date1.day++;
            if (date1.day > Month_special[month - 1]) {
                date1.day = 1;
                date1.month++;
            }
            if (date1.month > 12) {
                date1.month = 1;
                date1.year++;
            }
        } else {
            date1.day++;
            if (date1.day > Month_normal[month - 1]) {
                date1.day = 1;
                date1.month++;
            }
            if (date1.month > 12) {
                date1.month = 1;
                date1.year++;
            }
        }
    }
    return date1;
*/

    while (days < dds) {
        days++;
        day++;
        if (leap_year(year)) {
            if (day > Month_special[month - 1]) {
                day = 1;
                month++;
            }
        } else {
            if (day > Month_normal[month - 1]) {
                day = 1;
                month++;
            }

        }
        if (month > 12) {
            month = 1;
            year++;
        }
        //cout<<year<<" "<<month<<" "<<day<<endl;
    }

    return *this;
}

