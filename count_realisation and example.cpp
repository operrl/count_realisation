#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;

int count(string x, char a){
	int vowels;
	for(int i = 0; i < sizeof(x); i++){
	if (a == x[i]){
		vowels += 1;
		}
	}
	return vowels;
}

int summ_num(int a){
	int res;
	string asd = std::to_string(a);
	for(int i = 1; i < 10; i++){
		res += count(asd, i) * x;
	}
	return res;
}

int main(){
	int main_res;
	cout << "¬ведите число, сумму цифр которого нужно посчитать: ";
	cin >> main_res;
	main_res = summ_num(main_res);
	return main_res;
}
