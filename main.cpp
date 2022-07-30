#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main() {
    cpp_int n;
    cin >> n;
    cpp_int x = 1;
    for (cpp_int i=1; i<=n; i++) x *= i;
    cout << x << endl;
    return 0;
}
