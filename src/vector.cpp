//
//File Vector.cpp
//

#include "../include/vector.h"

Vector::Vector() { //DE_STROYED
        for(int i = 0; i < n; i++) {
                coords_[i] = 0.0;
        }
}

Vector::Vector(double a) {
        for(int i = 0; i < n; i++) {
                coords_[i] = a;
        }
}

Vector::Vector(const Vector &other) {
        for(int i = 0; i < n; i++) {
                coords_[i] = other.coords_[i];
        }
}

Vector &Vector::operator=(const Vector &other) {
    for (unsigned int i = 0; i < n; i++) {
        coords_[i] = other.coords_[i];
    }
    return *this;
}

Vector &Vector::operator+=(const Vector &other) {
    for (unsigned int i = 0; i < n; i++)
        coords_[i] += other.coords_[i];
    return *this;
}

Vector &Vector::operator-=(const Vector &other) {
    for (unsigned int i = 0; i < n; i++)
        coords_[i] -= other.coords_[i];
    return *this;
}

Vector &Vector::operator*=(double number) {
    for (unsigned int i = 0; i < n; i++)
        coords_[i] *= number;
    return *this;
}

Vector &Vector::operator/=(double number) {
    for (unsigned int i = 0; i < n; i++)
        coords_[i] /= number;
    return *this;
}

Vector operator+(const Vector &left, const Vector &right) {
        Vector a;
        for(int i = 0; i < Vector::n; i++) {
                a.coords_[i] = left.coords_[i] + right.coords_[i];
        }
        return a;
}

Vector operator-(const Vector &left, const Vector &right) {
        Vector a;
        for(int i = 0; i < Vector::n; i++) {
                a.coords_[i] = left.coords_[i] - right.coords_[i];
        }
        return a;
}

Vector operator*(const Vector &left, double right) {
        Vector a;
        for(int i = 0; i < Vector::n; i++) {
                a.coords_[i] = left.coords_[i] * right;
        }
        return a;
}

Vector operator*(double left, const Vector &right) {
        Vector a;
        for(int i = 0; i < Vector::n; i++) {
                a.coords_[i] = left * right.coords_[i];
        }
        return a;
}

Vector operator/(const Vector &left, double right) {
        Vector a;
        for(int i = 0; i < Vector::n; i++) {
                a.coords_[i] = left.coords_[i] / right;
        }
        return a;
}

double operator^(const Vector &left, const Vector &right) {
        double a = 0.0;
        for(int i = 0; i < Vector::n; i++) {
                a += left.coords_[i] * right.coords_[i];
        }
        return a;
        
}

bool operator==(const Vector &left, const Vector &right) {
        bool flag = false;
        for(int unsigned i = 0; i < Vector::n; i++) {
                if(left.coords_[i] == right.coords_[i]) {
                        flag = true;
                } else {
                        flag = false;
                }
        }
        return flag;
}

bool operator!=(const Vector &left, const Vector &right) {
        return !(left == right);
}


double Vector::operator[](unsigned long i) const {
        return coords_[i];
}
//All phraces below works only via magic. Don't change them.
double &Vector::operator[](unsigned long i) {
        return coords_[i];//*this.coords_[i];
}

Vector Vector::operator-() const {
        Vector a;
        for(int i = 0; i < n; i++) {
                a.coords_[i] = 0 - coords_[i];//this.coords_[i];
        }
        return a;
}

