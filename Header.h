#pragma once
#include<iostream>
#include<new>
#include<cstdio> 
#include<vector>
#include<raylib.h>
#include<list>
#include<fstream>
#include<array>
#include<cmath>
#include<algorithm>
#include<unordered_map>
#include<map>
#include<stack>
#include<string>
#include<cstring>
#include<unordered_map>
#include<bitset>
#include<queue>
#include<set>
#include<unordered_set>
#include<thread>
#include<utility>
#include<future>
#include<memory>
#include<cassert>
#include<mutex>
#include<exception>
#include<type_traits>
#include<iomanip>
#include<cstdlib>
#include<execution>
#include<numeric>
using std::cout;
//διακριτο αναλογο εδω χρησιμποιουμε την μεθοδο σταθερου σημειου για να βρουμε την λυση αλλιως δεν γινεται χωρις να παρουμε προσεγγιστικο τυπο
double fungf(double x) {
	return pow(x, 3) - pow(x, 2) - 2 * x - 6.993;
}
double fungg(double x) {
	return (pow(x, 3) - pow(x, 2) - 6.993)/2.0;
}
double dfungf(double x) {
	return 3 * pow(x, 2) - 2 * x - 2;
}