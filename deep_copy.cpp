#include<iostream>

using namespace std;

class test {

int a;

int* p;

public:

test(int x) {

a = x;

p = new int[a];

}

void input() {

cout << "a is filled with 5";

cout << "\nfill in array : ";

for (int i = 0; i < a; i++)

{

cin >> p[i];

}

cout << "Filled successfully";

}

test(test& t1) {

a = t1.a;

p = new int[a];

for (int i = 0; i < a; i++)

{

*(p + i) = *(t1.p + i);

}

}

void disp() {

cout << "a is : " << a;

cout << "\nelemnts copied are :\n";

for (int i = 0; i < a; i++)

{

cout << p[i]<<"\n";

}

}

};

int main()

{

test m(5);

m.input(); // input is a function you must use brackets

cout << "Calling deep copy constructor";

test k(m);

cout << "\nCopied : ";

k.disp(); //you copied in k, so display k

}

