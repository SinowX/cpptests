#include<iostream>
#include<functional>

struct A
{
    int ax; // 成员变量
    virtual void f0() { std::cout<<"This is A f0()"<<std::endl;}
    virtual void f1() {std::cout<<"This is A f1()"<<std::endl;}
};

struct B : public A
{
    int bx; // 成员变量
    void f0() override {std::cout<<"This is B f0()"<<std::endl;}; // 重写f0
    void f9(){std::cout<<"This is B f9()"<<std::endl;}
};


int main()
{
    A a;
    B b;

    A* p1 = &a;
    p1->f1();

    A* p2 = &b;
    p2->f0();
    std::cout<<p1->vptr<<std::endl;
}