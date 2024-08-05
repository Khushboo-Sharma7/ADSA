#include <iostream>
using namespace std;

//class with array of objects
/* class Student
{
    private:
        int rno;
        char name[20];
        float per;
    public:
        void getData(){
            cout <<"Enter rno name and percentage"<<endl;
            cin>>rno>>name>>per;
        }
        void displayData(){
            cout <<"Roll no:"<<rno<<" ";
            cout <<"Name:"<<name<<" ";
            cout <<"Percentage:"<<per<<endl;
        }
};
int main()
{
    Student s[5];
    int i;
    for(i=0;i<=1;i++)
    {
        cout <<"Enter student details:"<<endl;
        s[i].getData();
    }
    for(i=0;i<=1;i++)
    {
        s[i].displayData();
    }
} */

//class with normal object
/* class Student
{
    private:
        int rno;
        char name[20];
        float per;
    public:
        void getData();
        void displayData();
};
void Student::getData()
{
    cout <<"Enter rno name and percentage"<<endl;
    cin>>rno>>name>>per;
}
void Student:: displayData(){
    cout <<"Roll no:"<<rno<<" ";
    cout <<"Name:"<<name<<" ";
    cout <<"Percentage:"<<per<<endl;
}
int main()
{
    Student s1;
    s1.getData();
    s1.displayData();

} */

//area and circumference of circlr
/* class circle
{
    private:
        float r,aoc,coc;
    public:
        void getr(float rad)
        {
            r=rad;
        }
        float calAOC()
        {
            aoc=3.14*r*r;
            return aoc;
        }
        float calCOC()
        {
            coc=2* 3.14 * r;
            return coc;
        }
};
int main(){
    circle c1;
    c1.getr(2.5);
    cout<<"Area of circle:" <<c1.calAOC()<<endl;
    cout<<"Circumference of circle:"<<c1.calCOC()<<endl;
    return 0;
} */

//object passing as arguments
/* class Time{
    private:
        int hrs,min;
    public:
        void setTime(int h,int m)
        {
            hrs=h;
            min=m;
        }
        void disTime(){
            cout <<"Hrs:"<<hrs<<" " <<"Min:"<<min<<endl;
        }
        void addTime(Time t1,Time t2)
        {
            min=t1.min + t2.min;
            hrs=min/60;
            min=min%60;
            hrs=hrs+t1.hrs+t2.hrs;
        }
};
int main()
{
    int h,m;
    Time t1,t2,t3;
    cout <<"Enter hrs and minutes for t1:"<<endl;
    cin>>h>>m;
    t1.setTime(h,m);
    cout <<"Enter hrs and minutes for t2:"<<endl;
    cin>>h>>m;
    t2.setTime(h,m);
    t3.addTime(t1,t2);
    t3.disTime();
} */

//inline function
/* class Inlinefn
{
    public:
        inline int square(int y){return y*y;};
};
int main(){
    Inlinefn f;
    cout <<"Square of 5 :"<<f.square(5);
} */

//nesting of member function
/* class circle
{
    private:
        float r,aoc,coc;
        void getr()
        {
            cout <<"Enter radius" <<endl;
            cin>>r;
        }
        void calAOC()
        {
            aoc=3.14*r*r;
            cout<<"Area of circle:" <<aoc <<endl;
        }
        void calCOC()
        {
            coc=2* 3.14 * r;
            cout <<"Circumference of circle:"<<coc <<endl;
        }
    public:
        void calculate(){
            getr();
            calAOC();
            calCOC();
        }
        
};
int main(){
    circle c1;
    c1.calculate();
    return 0;
}  */

//file handling