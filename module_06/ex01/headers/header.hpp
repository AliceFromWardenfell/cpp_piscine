#pragma once

#include <iostream>
#include <stdint.h>

typedef struct	s_person
{
	std::string			name;
	int					age;
	char				blood_type;
	long				phone_number;
	long long			account;
	bool				student;
}				Data;

uintptr_t	serialize(Data* person);
Data*		deserialize(uintptr_t raw);
