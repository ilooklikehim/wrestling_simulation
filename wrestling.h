#ifndef WRESTLING_H_INCLUDED
#define WRESTLING_H_INCLUDED
#include <iostream>
#include<stdio.h>
#include <iomanip>
#include <windows.h>

using namespace std;

class wrestler
{
public:
    wrestler(){next = NULL;}   ///default constructor
    wrestler(int i){id = i;}
    ///accessors and mutators (gets and sets)
    void setid(int i){id = i;}
    void setweight(int w){weight = w;}
    void setstrength(int s){strength = s;}
    void setweightclass()
    void setnext(wrestler * n){next = n;}///sets the location of the next wrestler

    void getid(){return id;}
    void getstrength(){return s;}
    void getweight(){return w;}
    void getweightclass(){return wc;}
    wrestler * getnext(){return next;}///this returns the location

    void display()
    {
        cout << "Wrestler " << id << endl;
        cout << "Weight: " << weight << " lbs" << endl;
        cout << "Strength: " << strength << endl;
        cout << "Weight Class: " << weightclass << " lbs" << endl << endl;
    }

private:
    int weight;
    int strength;
    int weightclass;
    int id;
    wrestler * next;
};

class team
{
public:

};
