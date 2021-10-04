#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

#define SUCCESS 0
#define ERROR 1
#define PROMPT 1
#define BUF_SIZE 256

void	prompt(void);
int		printr_error(const std::string& str, const bool& flag);

