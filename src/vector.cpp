//
//File Vector.cpp
//

#include "include/vector.h"

Vector::Vector() {
        for(int i = 0; i <= n; i++) {
                coords_[i] = 0;
        }
}

Vector::Vector(double n) {
        for(int i = 0; i <= n; i++) {
                coords_[i] = n;
        }
}

Vector::Vector(const Vector &other) {
        for(int i = 0; i <= n; i++) {
                coords_[i] = other.coords_[i];
        }
}

Vector::Vector &operator=(const Vector &other) {
        for(int i = 0; i <= n; i++) {
                coords_[i] = other.coords_[i];
        }
        return *this;
}

Vector::Vector &operator+=(const Vector &other) {
        for(int i = 0; i <= n; i++) {
                coords_[i] += other.coords_[i];
        }
        return *this
}

Vector::Vector &operator-=(const Vector &other) {
        for(int i = 0; i <= n; i++) {
                coords_[i] -= other.coords_[i];
        }
        return *this;
}

Vector::Vector &operator*=(double other) {
        for(int i = 0; i <= n; i++) {
                coords_[i] *= other;
        }
        return *this;
}

Vector::Vector &operator/=(double other) {
        for(int i = 0; i <= n; i++) {
                coords_[i] /= other;
        }
        return *this;
}

Vector::friend Vector operator+(const Vector &left, const Vector &right) {
        Vector a;
        for(int i = 0; i <= n; i++) {
                a.coords_[i] = left.coords_[i] + right.coords_[i];
        }
        return a;
}

Vector::friend Vector operator-(const Vector &left, const Vector &right) {
        Vector a;
        for(int i = 0; i <= n; i++) {
                a.coords_[i] = left.coords_[i] - right.coords_[i];
        }
        return a;
}

Vector::friend Vector operator*(const Vector &left, double right) {
        Vector a;
        for(int i = 0; i <= n; i++) {
                a.coords_[i] = left.coords_[i] * right;
        }
        return a;
}

Vector::friend Vector operator*(double left, const Vector &right) {
        Vector a;
        for(int i = 0; i <= n; i++) {
                a.coords_[i] = left * right.coords_[i];
        }
        return a;
}

Vector::friend Vector operator/(const Vector &left, double right) {
        Vector a;
        for(int i = 0; i <= n; i++) {
                a.coords_[i] = left.coords_[i] / right
        }
        return a;
}

Vector::friend double operator^(const Vector &left, const Vector &right) {
        double a;
        for(int i = 0; i <= n; i++) {
                a += left.coords_[i] * right.coords_[i];
        }
        return a;


Vector::friend bool operator==(const Vector &left, const Vector &right) {
        bool flag = false;
        for(int i = 0; i <= n; i++) {
                if(left.coords_[i] == right.coord_[i]) {
                        flag = true;
                } else {
                        flag = false;
                }
        }
        return flag;
}

Vector::friend bool operator!=(const Vector &left, const Vector &right) {
        bool flag = false;
        for(int i = 0; i <= n; i++) {
                if(left.coords_[i] != right.coord_[i]) {
                        flag = true;
                } else {
                        flag = false;
                }
        }
        return flag;
}


Vector::double operator[](insigned long i) {
        return coords_[i];
}

Vector::double &operator[](insigned long i) const {
        return *this.coords_[i];
}

Vector::Vector operator-() const {
        Vector a;
        for(int i = 0; i <= n; i++) {
                a[i] = 0 - *this.coords[i];
        }
        return a;
}

