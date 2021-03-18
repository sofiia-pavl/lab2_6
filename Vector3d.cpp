#include "Vector3d.h"

///Triad.cpp
bool Vector3d::Triad::Init(int x, int y, int z)
{
	setX(x);
	setY(y);
	setZ(z);
	return true;
}
void Vector3d::Triad::Display() const
{
	cout << endl;
	cout << "first = " << x << endl;
	cout << "second = " << y << endl;
	cout << "third = " << z << endl;
}
void Vector3d::Triad::Read()
{
	int x, y, z;
	cout << endl;
	cout << "first = ?"; cin >> x;
	cout << "second = ?"; cin >> y;
	cout << "third = ?"; cin >> z;
	Init(x, y, z);
}

Vector3d::Triad& Vector3d::Triad::operator = (const Vector3d::Triad& t)
{
	this->x = t.x;
	this->y = t.y;
	this->z = t.z;

	return *this;
}

ostream& operator <<(ostream& out, const Vector3d::Triad& m)
{
	out << string(m);
	return out;
}
istream& operator >>(istream& in, Vector3d::Triad& m)
{
	int x, y, z;
	cout << endl;
	cout << "x = ? "; in >> x;
	cout << "y = ? "; in >> y;
	cout << "z = ? "; in >> z;
	m.Init(x, y, z);
	return in;
}
Vector3d::Triad::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "x = " << x << endl;
	ss << "y = " << y << endl;
	ss << "y = " << z << endl;
	return ss.str();
}

Vector3d::Triad& Vector3d::Triad:: operator ++()
{
	++x;
	return *this;
}

Vector3d::Triad& Vector3d::Triad:: operator --()
{
	--x;
	return *this;
}
Vector3d::Triad Vector3d::Triad:: operator ++(int)
{
	Triad t(*this);
	++y;
	return t;
}
Vector3d::Triad Vector3d::Triad:: operator --(int)
{
	Triad t(*this);
	--y;
	return t;
}

Vector3d::Triad operator +(const Vector3d::Triad& a, const Vector3d::Triad& b)
{
	Vector3d::Triad t;
	t.x = a.x + b.x;
	t.y = a.y + b.y;
	t.z = a.z + b.z;
	return t;
}

Vector3d::Triad operator *(const Vector3d::Triad& a, const Vector3d::Triad& b)
{
	Vector3d::Triad t;
	t.x = a.x * b.x;
	t.y = a.y * b.y;
	t.z = a.z * b.z;
	return t;
}

int Vector3d::Triad::multiplay(int x1, int y1, int z1)
{
	int r;
	x *= x1;
	y *= y1;
	z *= z1;
	r = x + y + z;
	return r;
}

///Vector3d.cpp

void Vector3d::Display() const
{
	cout << endl;
	cout << "vector = " << endl;
	vector.Display();
}
void Vector3d::Read()
{
	Triad v;
	cout << endl;
	cout << "Vector = ?" << endl;
	v.Read();
	Init(v);
}

Vector3d operator +(const Vector3d& o, const Vector3d& u)
{
	Vector3d s;
	int a = o.vector.getX() + u.vector.getX();
	int b = o.vector.getY() + u.vector.getY();
	int c = o.vector.getZ() + u.vector.getZ();

	s.vector.setX(a);
	s.vector.setY(b);
	s.vector.setZ(c);

	return s;
}

int operator * (const Vector3d o, const Vector3d u)
{

	int a = o.vector.getX() * u.vector.getX();
	int b = o.vector.getY() * u.vector.getY();
	int c = o.vector.getZ() * u.vector.getZ();

	int s = a + b + c;

	return s;
}

void Vector3d::multiplayV()
{
	int a, b, c;
	cout << "x1 = "; cin >> a;
	cout << "y1 = "; cin >> b;
	cout << "z1 = "; cin >> c;
	cout << "Scalar product two vectors: " << vector.multiplay(a, b, c);
}

ostream& operator <<(ostream& out, const Vector3d& c)
{
	out << string(c);
	return out;
}

istream& operator >>(istream& in, Vector3d& c)
{
	cout << endl;
	cout << "vector = ? "; in >> c.vector;

	return in;
}

Vector3d::operator string() const
{
	return string(vector);
}

Vector3d& Vector3d::operator++()
{
	++vector;
	return*this;
}

Vector3d& Vector3d::operator--()
{
	--vector;
	return*this;
}

Vector3d Vector3d::operator++(int)
{
	Vector3d s(*this);
	vector++;
	return s;
}

Vector3d Vector3d::operator--(int)
{
	Vector3d s(*this);
	vector--;
	return s;
}
