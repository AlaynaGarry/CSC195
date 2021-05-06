#pragma once
#define Shop_Name "Blimpies"
#define PI 3.14f

enum Type {
	Italian, 
	MeatBall,
	Turkey, 
	Ham
};

void f2();

class Sandwich {
public:
	void Read();
	void Write();

private: 
	char name[32];
	float price;
	bool isHot;

	static const float Tax;
};

