#include<iostream>
#include<random>

using namespace std;

int main(){
	random_device seed_gen;
	mt19937 engine{seed_gen()};
	uniform_int_distribution<> dist{0,9};
	int lucky  = dist(engine);
	cout << "ラッキーナンバー＝” << std::endl;

//	double x;//倍精度浮動小数点数1.2*10^(-1) == 0.12
	double y;

//	cout << "x y ";
//	cin >> x >>  y; //extractor 抽出子
/*
//	cout << "y:";
//	cin >> y; //extractor 抽出子
//	x=63;
//	y=18;

// ２項演算子
	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
	cout << "x+y="<<(x+y) <<"です。\n";
	cout << "x-y="<<(x-y) <<"です。\n";
	cout << "x*y="<<(x*y) <<"です。\n";
	cout << "x/y="<<(x/y) <<"です。\n";
//	cout << "x%y="<<(x%y) <<"です。\n";
	cout << "xとyの平均"<<(x+y)/2 <<"です。\n";

	cout << "xとyの平均"<<(x+y)/2 <<"です。\n";
*/

const double kPi=3.1425;

	cout << "半径";
	cin >> y; //extractor 抽出子

	cout << "円周" << (2*3.14*y) << "\n";

	cout << "面積" << (3.14*3.14*y) << "\n";

}
