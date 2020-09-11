#include<iostream>
using namespace std;
class Area{
    private:
        int l,b;
    protected:
        int r;
    public:
        void Rarea(int len,int bre){
            l=len;
            b=bre;
            cout<<"Area of Rectangle : "<<l*b;
        }
};
class Carea : public Area{
    public:
        void setRedius(int red){
            r=red;
        }
        void show(){
            cout<<"Area of Circle : "<<2*3.14*r<<endl;
        }
};

int main(){
    Area a;
    Carea c;
    c.setRedius(5);
    c.show();
    a.Rarea(5,5);
    return 0;
}