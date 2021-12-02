#include "CAndArray.h"
#include "COrArray.h"
using namespace std;

ostream& operator << (ostream& out, const Array& r)
{
	return r.Print(out);
}

istream& operator >> (istream& in, Array& r)
{
	return r.Insert(in);
}

void main()
{
	cout << "AndArray" << endl;
	{
		Array* A = new AndArray();
		Array* B = new AndArray();

		cin >> *A;
		cout << "*A = " << *A << endl;

		cin >> *B;
		cout << "*B = " << *B << endl;

		Array* C = A->Add(B);
		cout << "*C = " << *C << endl;

		cout << "*A[0](foreach): " << A->Foreach(0) << endl;

		cout << typeid(A).name() << endl;
		cout << typeid(*A).name() << endl << endl;

		delete A;
		delete B;
		delete C;
	}

	cout << "OrArray" << endl;
	{
		Array* A = new OrArray();
		Array* B = new OrArray();

		cin >> *A;
		cout << "*A = " << *A << endl;

		cin >> *B;
		cout << "*B = " << *B << endl;

		Array* C = A->Add(B);
		cout << "*C = " << *C << endl;

		cout << "*A[0](foreach): " << A->Foreach(0) << endl;

		cout << typeid(A).name() << endl;
		cout << typeid(*A).name() << endl << endl;

		delete A;
		delete B;
		delete C;
	}
}