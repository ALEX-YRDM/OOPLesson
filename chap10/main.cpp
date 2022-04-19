#include"Date.h"

int main() {

            int day,month,year,addDay,addMonth,addYear;
            cout<<"please input year month day: (example: 2001 1 23)"<<endl;
            cin>>year>>month>>day;
            Date date1(day,month,year);
            cout<<"距1970/1/1天数: "<<date1.getDays()<<endl;
            cout<<"这一天是星期"<<date1.getWeek()<<endl;
            cout<<"please input the number of day you want to add: "<<endl;
            cin>>addDay;
            date1.add_day(addDay);
            cout<<"距1970/1/1天数: "<<date1.getDays()<<endl;
            cout<<date1.getYear()<<" "<<date1.getMonth()<<" "<<date1.getDay()<<endl;
            cout<<"please input the number of month you want to add: "<<endl;
            cin>>addMonth;
            date1.add_month(addMonth);
            cout<<"距1970/1/1天数: "<<date1.getDays()<<endl;
            cout<<date1.getYear()<<" "<<date1.getMonth()<<" "<<date1.getDay()<<endl;
            cout<<"please input the number of year you want to add: "<<endl;
            cin>>addYear;
            date1.add_year(addYear);
            cout<<"距1970/1/1天数: "<<date1.getDays()<<endl;
            cout<<date1.getYear()<<" "<<date1.getMonth()<<" "<<date1.getDay()<<endl;




    return 0;
}
