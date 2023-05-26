#pragma once

#include <iostream>
#include <string>

typedef struct Data {
	int x;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);