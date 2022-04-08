#ifndef CLASSES_H
#define CLASSES_H

#include <string>
#include <iostream>

using namespace std;


class First
{
private:
	string id;
public:
	First(string id);
	string getFirstId();
};


class Second : public First
{
private:
	string id;
public:
	Second(string id);
	string getId();
};


class Third : public First
{
private:
	string id;
public:
	Third(string id);
	string getId();
};


class Fourth : public First
{
private:
	string id;
public:
	Fourth(string id);
	string getId();
};


class Fifth : public First
{
private:
	string id;
public:
	Fifth(string id);
	string getId();
};


class Sixth : public Second, public Third
{
private:
	string id;
public:
	Sixth(string id);
	string getId();
};


class Seventh : public Fourth, public Fifth
{
private:
	string id;
public:
	Seventh(string id);
	string getId();
};


class Eighth : public Sixth, public Seventh
{
private:
	string id;
public:
	Eighth(string id);
	string getId();
};


#endif