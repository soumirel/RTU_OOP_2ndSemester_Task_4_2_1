#include "Classes.h"


First::First(string id)
{
	this->id = id + "_1";
}

string First::getFirstId()
{
	return this->id;
}

Second::Second(string id) : First(id)
{
	this->id = id + "_2";
}

string Second::getId()
{
	return this->id;
}

Third::Third(string id) : First(id)
{
	this->id = id + "_3";
}

string Third::getId()
{
	return this->id;
}

Fourth::Fourth(string id) : First(id)
{
	this->id = id + "_4";
}

string Fourth::getId()
{
	return this->id;
}

Fifth::Fifth(string id) : First(id)
{
	this->id = id + "_5";
}

string Fifth::getId()
{
	return this->id;
}

Sixth::Sixth(string id) : Second(id), Third(id)
{
	this->id = id + "_6";
}

string Sixth::getId()
{
	return this->id;
}

Seventh::Seventh(string id) : Fourth(id), Fifth(id)
{
	this->id = id + "_7";
}

string Seventh::getId()
{
	return this->id;
}

Eighth::Eighth(string id) : Sixth(id), Seventh(id)
{
	this->id = id + "_8";
}

string Eighth::getId()
{
	return this->id;
}

