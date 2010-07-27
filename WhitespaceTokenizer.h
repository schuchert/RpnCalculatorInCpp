#pragma once
#ifndef WHITESPACETOKENIZER_H_
#define WHITESPACETOKENIZER_H_

#include <vector>
#include <string>

class WhitespaceTokenizer {
public:
	typedef std::vector<std::string> vector;
	typedef vector::iterator iterator;
	typedef vector::const_iterator const_iterator;

	WhitespaceTokenizer();
	virtual ~WhitespaceTokenizer();
	vector split(const std::string &theString);
};

#endif
