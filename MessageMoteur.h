#pragma once
#include<map>

class MessageMoteur
{
public:
	MessageMoteur();
	~MessageMoteur();
	int type;
	std::map<unsigned int, std::string> s_message;
	std::map<unsigned int, int> i_message;
	std::map<unsigned int, float> f_message;
	bool operator==(const MessageMoteur& mm);
	template<class Archive>
	void serialize(Archive& ar, const unsigned int);
};

