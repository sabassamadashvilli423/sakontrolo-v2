#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Shapes.h"
#include<fstream>
class Rectangle:public Shapes
{
public:
	string cord;
	int length1,length2;
	Rectangle(string cord, int length1,int length2,string name) {
		this->cord = cord;
		this->length1 = length1;
		this->length2 = length2;
		this->name = name;
	}
	void show() {
		cout << cord << " " << length1 << " " << length2 << " " << name << endl;
	}
	void save() {
		ifstream fin("rectangle.txt");
		fin >> cord >> length1 >> length2 >> name;
			
		}
	void load() {
		ofstream fout("rectagle.txt",fstream::app);
		fout<<  cord << " " << length1 << " " << length2 << " " << name << endl;
	}
};

