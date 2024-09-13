#include <string> 
#include <iostream> 
using namespace std;
class Date{
public: 
    Date(int month, int day, int year) 
    {
        m = month;
        d = day; 
        y=year;
        if (m> 0 && m < 13)
        {
            m = month;
        }
        else 
        {   
            cout << "error, numero no valido" << endl;
            m = 1;
        }
        
    }
    int getMonth()
    {
        return m;
    }
    void setMonth(int newMonth)
    {
        m = newMonth; 
    }
    int getDay()
    {
        return d;
    }
    void setDay(int newDay) 
    {
        d = newDay;
    }
    
    int getYear() 
    {
        return y;
    }
    void setYear(int newYear)
    {
        y = newYear; 
    }
    void displayDate()
    {
        cout << m << "/" << d << "/" << y << endl; 
    }
private: 
    int m,d , y;
    
};

int main() 
{
    Date d1 = Date(10, 10, 2022);
    cout << "d1: " << d1.getYear() <<endl;
    Date d2 = Date(0, 10, 2022);
    cout << "d2: " << d2.getYear()<<endl;
    d1.displayDate();
}
