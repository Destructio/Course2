#pragma once
#include "tchar.h"
#include <vector>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

value struct Excurs
{
	String^ name;
	String^ fio;
	float time;
	float count;
	Excurs^ next;
};

typedef Excurs^ List;

List CreateList(String^, String^, float, float);
void AddLast(List%, List%, List);
List DeleteNode(List%, List%, List);
int GetIndex(List, List);
List GetMax1(List);
List GetMax2(List);
std::vector<std::string> getVector(List%);
bool ReadFile(StreamReader^, List%, List%);
bool ProcString(String^, List%, List%);
String^ DelSpace(String^);
bool WriteFile(StreamWriter^, List);
void ClearList(List%, List%, List%);
