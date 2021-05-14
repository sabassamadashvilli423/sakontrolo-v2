#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"Shapes.h"
#include<fstream>
class Circle:public Shapes
{
public:
	string cord;
	int radius;
	Circle(int radius, string name, string cord) {
		this->cord = cord;
		this->name = name;
		this->radius = radius;
	}
	void show() {
		cout << name << " " << cord << " " << radius << endl;
	}
	void save() {
		ifstream fin("circle.txt");
		fin >> name >> cord >> radius;
	}
	void load() {
		ofstream fout("circle.txt", fstream::app); {
			fout << name << " " << cord << " " << radius << endl;
		}
	}
};

