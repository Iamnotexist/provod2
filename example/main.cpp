#include "../provod2.h"
#include <iostream>
using namespace std;


int main () {

	provod2 pr("test.provod_info");

	auto dd = pr.getVertex();

	for (auto it : dd)
		cout << it << " ";
	cout << endl;

	pr["aba"]["caba"]["kapa"];
	pr["aba"]["craba"];

	auto z = pr["aba"].getVertex();

	for (auto it : z)
		cout << it << " ";

	pr["aba"]["caba"].deleteVertex("dd");
	pr["gg"];
	pr["zz"];

	pr.deleteVertex("gg");

	auto d = pr.getVertex();

	cout << endl;

	for (auto it : d)
		cout << it << " ";

	pr.write();

	return 0;
}