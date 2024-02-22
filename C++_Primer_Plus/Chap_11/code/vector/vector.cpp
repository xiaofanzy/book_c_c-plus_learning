#include "vector.h"
#include <cmath>

namespace VECTOR
{
  const double Rad_to_deg = 45.0 / atan(1.0); 
  void Vector::set_x()
	{
		x = mag * cos(ang);
	}
	void Vector::set_y()
  {
    y = mag * sin(ang);
  }
  void Vector::set_ang()
  {
    if (x == 0.0 && y == 0.0)
    {
      ang = 0.0;
    }
    else
    {
      ang = atan2(y,x);
    }
  }
  void Vector::set_mag()
  {
    mag = sqrt(x * x + y * y);
  }

  Vector::Vector()
  {
    x = y = mag = ang = 0.0;
    mode = RECT;
  }

  Vector::Vector(double n1, double n2,Mode form)
  {
    mode = form;
    if (form == RECT)
    {
      x = n1;
      y = n2;
      set_ang();
      set_mag();
    }
    else if (form == POL)
    {
      ang = n2 / Rad_to_deg;
      mag = n1;
      set_x();
      set_y();
    }
  }

  void Vector::reset(double n1,double n2,Mode form)
  {
    mode = form;
    if (form == RECT)
    {
      x = n1;
      y = n2;
      set_ang();
      set_mag();
    }
    else if (form == POL)
    {
      ang = n2 / Rad_to_deg;
      mag = n1;
      set_x();
      set_y();
    }
  }

  void Vector::polar_mode()
  {
    mode = POL;
  }

  void Vector::rect_mode()
  {
    mode = RECT;
  }

  Vector Vector::operator+(const Vector &b) const
  {
    return Vector(x + b.x,y + b.y);
  }

  Vector Vector::operator-(const Vector &b) const
  {
    return Vector(x - b.x,y - b.y);
  }

  Vector Vector::operator*(double n) const
  {
    return Vector(x * n,y * n);
  }

  Vector Vector::operator-() const
  {
    return Vector(-x, -y);
  }

  Vector operator*(double n,const Vector &b)
  {
    return n * b;
  }

  ostream &operator<<(ostream &os,const Vector &b)
  {
    if (b.mode == Vector::POL)
    {
      os << "mag, ang = " << b.mag << b.ang << endl;
    }
    else if (b.mode == Vector::RECT)
    {
      os << "x,y = " << b.x << b.y << endl;
    }
    else
    {
      os << "error" << endl;
    }
    
    return os;
  }

  Vector::~Vector()
  {
    
  }

}