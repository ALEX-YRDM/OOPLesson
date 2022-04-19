//
// Created by zbq on 2022/4/19.
//

#ifndef HOMEWORKCHAP10_DATE_H
#define HOMEWORKCHAP10_DATE_H
#include<iostream>
#include<exception>
using namespace std;
class Date{
    private:
        static Date default_date;
        int day,month,year;
        long days;

    public:
        static int Month_normal[12];
        static int Month_special[12];
        class Bad_date:public std::exception{
        public:
            const char* what() const throw(){
                return "illegal parameter value";
            }
       };
        static void set_default();
        static bool leap_year(int year);
        Date(int day=1,int month=1,int year=1970);


        Date& add_year(int n);
        Date& add_month(int n);
        Date& add_day(int n);
        /*void setDay(int dd);
        void setMonth(int mm);
        void setYear(int year);*/
        //void setDays(long days);
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        int getWeek() const;
        long getDays() const;
        Date& getDate(long dds);

};

#endif //HOMEWORKCHAP10_DATE_H
