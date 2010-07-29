#include "WhitespaceTokenizer.h"

WhitespaceTokenizer::WhitespaceTokenizer() {
}

WhitespaceTokenizer::~WhitespaceTokenizer() {
}

// not using regex. The g++ version is not complete, the boost
// causes a pure virtual to get called upon cleanup

static const char* findNextSpaceOrEnd(const char *current) {
	while(*current && *current != ' ' && *current != '\t')
		++current;
	return current;
}

static const char* advanceOverWhitespace(const char *current) {
	while(*current && (*current == ' ' || *current == '\t'))
		++current;
	return current;
}

WhitespaceTokenizer::vector WhitespaceTokenizer::split(const std::string &theString) {
	vector results;
	const char *start = advanceOverWhitespace(theString.c_str());
	const char *end = findNextSpaceOrEnd(start);

	while(*start && start != end) {
		results.push_back(std::string(start,end));
		start = advanceOverWhitespace(end);
		end = findNextSpaceOrEnd(start);
	}
	return results;
}
