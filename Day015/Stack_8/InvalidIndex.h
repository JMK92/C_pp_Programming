#pragma once

class InvalidIndex {
public:
	InvalidIndex(int index);

	int invalid() const;

private:
	int index_;
};
