#include <iostream>
using namespace std;
//this pointer
/* class rect{
    private:
    int l,b;
    public:
    void getDim(int l,int b)
    {
        this->l=l;
        this->b=b;
    }
    void disdin()
    {
        cout <<"Area of rectangle:"<<l*b<<endl;
    }
};
int main(){
    rect r1,r2;
    r1.getDim(3,4);
    r2.getDim(6,7);
    r1.disdin();
    r2.disdin();
} */

//static 
/* class cpp{
    private:
    int fees;
    static int count;
    public:
    void payfees(){
        fees=0;
        count++;
    }
    void payfees(int s){
        fees=s;
        count++;
    }
    void dispfees()
    {
        cout <<"Fee paid:"<<fees<<endl;
    }
    static void dispStud(){
        cout <<"Student count:"<<count<<endl;
    }
};
int cpp::count=0;
int main(){
    cpp ajay,vijay,sujay,sahil;
    ajay.payfees();
    vijay.payfees(500);
    cpp::dispStud();
    sujay.payfees();
    sahil.payfees(1000);
    ajay.dispfees();
    vijay.dispfees();
    sujay.dispfees();
    sahil.dispfees();
    cpp::dispStud();
} */

//constructor
/* class area
{
    private:
    int l,b;
    public:
    area()
    {
        l=b=1;
        cout<<"default construtor"<<endl;
    }
    area(int l,int b)
    {
        this->l=l;
        this->b=b;
        cout <<"two parameter constructot"<<endl;
    }
    area(int x)
    {
        l=b=x;
        cout <<"one parameter constructor"<<endl;
    }
    void disparea()
    {
        cout <<"Area:"<<l*b<<endl;
    }
    ~area()
    {
        cout <<"Destructor called,area destroy"<<l*b <<endl;
    }
};
int main()
{
    area a,a1(2),a2(4,3),a3(a2),a4=a1;
    a.disparea();
    a1.disparea();
    a2.disparea();
    a3.disparea();
    a4.disparea();
    return 0;
} */

//friend function
/* class A;
class B;
class A{
    int x;
    public:
    void setdata(int i)
    {
        x=i;
    }
    friend void max(A,B);
};
class B{
    int y;
    public:
    void setdata(int i)
    {
        y=i;
    }
    friend void max(A,B);
};
void max(A a,B b)
{
    if(a.x>b.y)
    cout <<a.x<<" is greater";
    else
    cout <<b.y<<" is greater"; 
}
int main()
{
    A a;B b;
    a.setdata(10);
    b.setdata(90);
    max(a,b);
} */

//friend class
/* class A;
class B;
class A{

}; */

class box{
    private:
    int length;
    public:
    box(int l){
        lenght=l;
    }
    friend int printLength(box);
};
inr printLength(box b)
{
    
}