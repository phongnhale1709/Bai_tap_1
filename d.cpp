#include <iostream>
using namespace std;
int main()
{
float a,b,c,d,e,f, diem_tb;
cout << "diem mon toan la ";
cin >>a;
cout <<"diem mon ly la ";
cin >>b;
cout << "diem mon hoa la ";
cin >>c;
cout << "he so mon toan la ";
cin >>d;
cout << "he so mon ly la ";
cin >>e;
cout << "he so mon hoa la ";
cin >>f;
diem_tb = (a*d+b*e+c*f)/(d+e+f);
cout <<"dem trung binh cua sinh vien do la "<< diem_tb;


}
