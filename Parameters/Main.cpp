#include <iostream>

//Parameters
void func1(int i) {
	i = 10;
}

void func2(int& i) {
	i = 10;
}

void func3(const std::string& text) {
}

void func4(int* i) {
	if (i)//0 = false / not 0 = true
	{
		std::cout << *i << std::endl;

	}
}

int Random(int max) {
	int r = rand() % max;
	return r;
}

class A {
public:
	A() : i{ 0 } {}
	A(int v) : i{ v } {}

	void Set(int v) { i = v; }
	int Get() const { return i; }
	int& GetRef() { return i; }
	int* GetPtr() { return &i; }

	int& at(int index) { return m_elements[index]; }

	int& operator [](int index) { return m_elements[index]; }
	const int& operator [](int index) const { return m_elements[index]; }

public:
	int i;
	int m_elements[10];

};

void func5(const A& a) {
	a.Get();
std::cout << a[5] << std::endl;
}

int& A_GetRef(A* that) {
	return that->i;
}

int main(){
	A a{ 18 };
	a[4] = 10;

	a.GetRef() = 23;
	std::cout << a.Get() << std::endl;

	//seed * 1231/45^4 %123214
	srand(static_cast<unsigned int>(time(NULL)));
	//reutrn value
	std::cout << Random(10) << std::endl;
//Parameters
	int i;	
	func2(i);
	std::cout << i << std::endl;

	std::string text = "Hello!";

	time_t start = time(NULL);
	for (int i = 0; i < 2'000'000; i++) {
		func3(text);
	}
	time_t end = time(NULL);
	std::cout << end - start << std::endl;

	int* p = &i;
	func4(p);
}