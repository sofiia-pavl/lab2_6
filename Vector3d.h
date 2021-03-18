#pragma once
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class Vector3d
{
public:
	class Triad
	{
	private:
		int x;
		int y;
		int z;
	public:
		int getX() const { return x; }
		int getY() const { return y; }
		int getZ() const { return z; }

		void setX(int value) { x = value; }
		void setY(int value) { y = value; }
		void setZ(int value) { z = value; }

		Triad()
			: x(0), y(0), z(0)
		{}
		Triad(int a, int b, int c)
			: x(a), y(b), z(c)
		{}
		Triad(const Triad& a)
			: x(a.x), y(a.y), z(a.z)
		{}

		Triad& operator = (const Triad&);
		void operator ()(const Triad& o)
		{
			if (x == o.x && y == o.y && z == o.z) cout << "Triad1 equal Triad2";
			else if (x < o.x || y < o.y || z < o.z)   cout << "Triad1 less Triad2";
			else if (x > o.x || y > o.y || z > o.z)   cout << "Triad1 more Triad2";
		}
		int multiplay(int x1, int y1, int z1);
		friend Triad operator + (const Triad&, const Triad&);
		friend Triad operator * (const Triad&, const Triad&);

		bool Init(int x, int y, int z);
		void Display() const;
		void Read();

		friend ostream& operator << (ostream& out, const Triad& m);
		friend istream& operator >> (istream& in, Triad& m);

		operator string () const;

		Triad& operator ++();
		Triad& operator --();
		Triad operator ++(int);
		Triad operator --(int);

		~Triad(void) {};
	};
private:
	Triad vector;
public:
	Triad getVector() const { return vector; }
	void setVector(Triad value) { vector = value; }

	Vector3d()
		:vector()
	{}
	Vector3d(const Triad v)
		:vector(v)
	{}
	Vector3d(const Vector3d& v) { vector = v.vector; }

	friend ostream& operator <<(ostream& out, const Vector3d& c);
	friend istream& operator >>(istream& in, Vector3d& c);

	operator string () const;

	Vector3d& operator++();
	Vector3d& operator--();
	Vector3d operator++(int);
	Vector3d operator--(int);

	void multiplayV();
	friend Vector3d operator + (const Vector3d&, const Vector3d&);
	friend int operator * (const Vector3d, const Vector3d);

	void Init(Triad vector) { setVector(vector); }
	void Display() const;
	void Read();

	~Vector3d(void) {};
};
