#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void Write(const std::string& text, std::ostream& ostream) {
	ostream << text;
}

void Write(const std::string& text, std::ofstream& ostream) {
	//ostream << "File:\n";
	ostream << text;
}

void Write(const std::vector<int>& numbers, std::ofstream& ostream) {
	for (int n : numbers) {
		ostream << n << std::endl;
	}
}

void Read(std::string& text, std::ifstream& istream) {
	istream >> text;

}

void Read(std::vector<int>& numbers, std::ifstream& istream) {
	while (!istream.eof()) {
		int n;
		istream >> n;
		if (!istream.fail()) {
		numbers.push_back(n);
		}
	}
}

int main() {
	std::string text = "Hello World!\n";

	std::cout << text;
	Write(text, std::cout);

	// std::cin >> text;
	//std::getline(std::cin, text);
	//std::cout << text;

	//Output to file
	std::ofstream output("data.txt");
	//output << text;
	int i = 5;
	output << i << std::endl;
	Write(text, output);
	output.close();
	
	text = "";

	//input from file
	std::ifstream input("data.txt");
	input >> i;
	Read(text, input);
	//input >> text;
	//std::getline(input, text);
	input.close();

	std::cout << i << std::endl;
	std::cout << text;

	std::vector<int> numbers = { 1,2,3,4 };
	output.open("numbers.txt");
	Write(numbers, output);
	output.close();

	numbers.clear();

	input.open("numbers.txt");
	Read(numbers, input);
	input.close();

	for (int n: numbers) {
		std::cout << n << std::endl;
	}
}