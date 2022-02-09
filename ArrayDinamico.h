
#include <iostream>
#define BUF_SIZE 5

class ArrayDinamico {
private:
	double *ptr;
	int size; // # elem. attualmente presenti
	int maxSize; // dimensione fisica >=size

public:
	explicit ArrayDinamico(int n = 8);
	explicit ArrayDinamico(const ArrayDinamico &a);
	ArrayDinamico(const double a[], int n);
	~ArrayDinamico();

	int getSize() const { return size;}
	int getMaxSize() const {return maxSize;}
	
	void insert(double elem);
	void remove(int idx); // elimina ptr[idx]
	
	double operator[](int idx) const; // a[i] sola lettura
	double & operator[](int idx); // a[i] = x
	
	friend
	std::ostream& operator<<(std::ostream& out, const ArrayDinamico &a);		
};
