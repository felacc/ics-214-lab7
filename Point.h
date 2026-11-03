#pragma once
#include <string>


class Point
{
	friend class TestSuite;
private:
	int x;
	int y;
public:
	// default constructor - initialize point to (0,0)
	Point();

	// complex constructor
	Point(int x, int y);

	/// <summary>
	/// Obtain x-coordinate of point.
	/// </summary>
	/// <returns>x-coordinate</returns>
	int getX() const;

	/// <summary>
	/// Obtain y-coordinate of point.
	/// </summary>
	/// <returns>y-coordinate</returns>
	int getY() const;
	
	/// <summary>
	/// Sets x-coordinate of point.
	/// </summary>
	/// <param name="x">Value to set.</param>
	void setX(int x);
	
	/// <summary>
	/// Sets y-coordinate of point.
	/// </summary>
	/// <param name="y">Value to set.</param>
	void setY(int y);
	
	/// <summary>
	/// Set X and Y coordinate of point.
	/// </summary>
	/// <param name="x">New value of X.</param>
	/// <param name="y">New value of Y.</param>
	void setXY(int x, int y);
	
	/// <summary>
	/// Swap X and Y coordinate with each other.
	/// </summary>
	void swapXY();
	
	/// <summary>
	/// Multiply current position of X-coordinate by the given factor.
	/// </summary>
	/// <param name="factor">Factor to multiply X by.</param>
	void multiplyX(int factor);
	
	/// <summary>
	/// Multiply current position of Y-coordinate by the given factor.
	/// </summary>
	/// <param name="factor">Factor to multiply Y by.</param>
	void multiplyY(int factor);

	/// <summary>
	/// Get string representation of point.
	/// </summary>
	/// <returns>Point in the string form of "[x,y]"</returns>
	std::string toString() const;



};

