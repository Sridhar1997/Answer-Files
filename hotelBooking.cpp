/*A well renowned hotel has three branches in miami. Namely x,y and z (Actually they gave names).
Each has two types of customers. Regular and Rewardee. Also each branch has its own ratings x is given
a 3 star rating while y has 5 star rating and z has 4 star rating. Each hotel has specific rates for weekend
and weekdays. x charges $100 for regular customers on weekdays and $120 on weekends While it is $90 for rewardee
on weekdays and $60 on weekends. Similarly y charges $130 for regular customers on weekdays and $150
on weekends. While its $100 for rewardee on weekdays and $95 on weekends. While z charges $195 for regular customers
 on weekdays and $150 on weekends. While its $120 for rewardee on weekdays and $90 on weekends.
Now when the customer requests for a particular detail you need to find which hotel would yield the customer profit.
In case of tie between hotels compare the ratings and provide the result.
*/
#include<iostream>
using namespace std;
enum customers{
    regular,
    rewardee
};
enum days{
weekdays,
weekend
};
class hotel{
public:
    virtual int calculate();
};
class X:public hotel{
    public:
    int rating = 3;
    int n;
    customers c;
    days d;
    int calculate(){
        int bill = 0;
        if(c == regular){
            if(d == weekdays){
                bill += n*100;
            }
            else{
               bill += n*120;
            }
        }
        else{
            if(d==weekdays){
                bill += n*90;
            }
            else{
               bill += n*60;
            }
        }
       return bill;
    }
};
class Y: public hotel{
    public:
    int rating=4;
    int n;
    days d;
    customers c;
    int calculate(){
        int bill = 0;
        if(c == regular){
            if(d==weekdays){
                bill += n*130;
            }
            else{
               bill += n*150;
            }
        }
        else{
            if(d==weekdays){
                bill += n*100;
            }
            else{
               bill += n*95;
            }
        }
       return bill;
    }
};
class Z: public hotel{
    public:
    int rating = 5;
    int n;
    days d;
    customers c;
    int calculate(){
        int bill = 0;
        if(c == regular){
            if(d==weekdays){
                bill += n*195;
            }
            else{
               bill += n*150;
            }
        }
        else{
            if(d == weekdays){
                bill += n*120;
            }
            else{
               bill += n*90;
            }
        }
       return bill;
    }
};

int main(){
    X x;
    Y y;
    Z z;
    customers customer;
    cout<<"ENTER THE TYPE OF CUSTOMER"<<endl;
    cin>>customer;
    x.c = customer;
    y.c = customer;
    y.c = customer;

    cout<<"ENTER THE NUMBER OF DAYS"<<endl;
    cin>>nod;
    x.n = nod;
    y.n = nod;
    y.n = nod;

    days day;
    cout<<"ENTER THE TYPE OF DAYS"<<endl;
    cin>>day;
    x.d = day;
    y.d = day;
    y.d = day;

    int billx = x.calculate();
    int billy = y.calculate();
    int billz = z.calculate();

    if(billx<billy && billx<billz){
        cout<<"YOU CAN CHOOSE HOTEL X"<<endl<<"HOTEL RATING: "<<x.rating<<endl<<"TOTAL BILL: "<<billx;
    }
     if(billy<billx && billy<billz){
        cout<<"YOU CAN CHOOSE HOTEL Y"<<endl<<"HOTEL RATING: "<<y.rating<<endl<<"TOTAL BILL: "<<billy;
    }
     if(billz<billy && billz<billx){
        cout<<"YOU CAN CHOOSE HOTEL Z"<<endl<<"HOTEL RATING: "<<z.rating<<endl<<"TOTAL BILL: "<<billz;
    }
return 0;}
