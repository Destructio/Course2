#include "Header.h"


// ������� ���������� ���� � ����� ������
void AddLast(List% pHead, List% pTail, List NewNode)
{
	// ������ ������ ������������ ����
	//NewNode->prev = pTail;				// ������������� ������ ������������ ���� 
	NewNode->next = nullptr;				// �� ������� ����

	if (pTail)								// ���� ������ �� ������,
		pTail->next = NewNode;				// �� �������� ������ ���������� ���� �� �����������
	pTail = NewNode;						// �������� ������ �� ����� ������ �� �����������
	if (!pHead)								// ���� ������ ��� ������,
		pHead = pTail;						// �� �������� ������ �� ������ ������ �� �����������
}

// ������� �������� ���� ������
List CreateList(String^ sname, String^ sfio, float scount, float stime)
{
	List NewNode = gcnew Excurs;			// ��������� �� ����� ����
	NewNode->name = sname;					// �������� �������� ���������
	NewNode->fio = sfio;			// �������� ��� ������������
	NewNode->time = scount;					// �������� ����� ���������
	NewNode->count = stime;				// �������� ����������� ������
	NewNode->next = nullptr;				// ���������� ���� ���� ���
	return NewNode;							// ��������� ������� � ����� ����
}

// ������� ��������� ��������� ������ �����
bool ProcString(String^ Line, List% pHead, List% pTail)
{
	Line = DelSpace(Line);						// ����� ������� �������� �� ������ ������� ��������
	array<TCHAR>^ dlm = { ' ' };				// ���������� � ������������� ������� ������������ ����
	array<String^>^ words = Line->Split(dlm);	// �������������� ������ � ������ ����
	int n = words->Length;						// ���������� ���� � ������
	if (n != 4)									// ������ ���� ����� 4
	{
		MessageBox::Show("������������ ���������� ���� � ������ " + words[0], "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	String^ Name = words[0];					// ������ ����� - ������ � ��������� ���������
	String^ fio = words[1];					// ������ ����� - ������ ��� ������������
	float count;									// ���������� - ����� ������
	if (!Single::TryParse(words[2], count) || count <= 0)
	{
		MessageBox::Show("������������ ������ ������� ������ " + words[0], "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	float time;								// ���������� - ����������� ������

	if (!Single::TryParse(words[3], time) || time <= 0)
	{
		MessageBox::Show("������������ ������ ����������� ������ ������ " + words[0], "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	List NextNode = CreateList(Name, fio, count, time);	// �������� ���������� ���� ������

	AddLast(pHead, pTail, NextNode);	
	return true;
}

// Return Node maxTime
List GetMax1(List pHead)
{
	float MaxDen = pHead->count;	// ��������� �� ������������ ��������� ������� ����
	List pMax = pHead;						// ���������� � pMax ��������� �� ������ ����
	List q = pHead->next;						// ������ ������� ���������� ��������� ����
	while (q)									// ���� �� ������ �� ����� ������
	{
		float Den = q->count;			// ���������� ��������� � ��������� ����
		if (Den > MaxDen)						// ���� ��� ������ ������� ����������, ��
		{
			MaxDen = Den;						// ���������� � MaxDen ������� ���������
			pMax = q;							// ���������� � pMax ��������� �� ���� ����
		}
		q = q->next;							// ������� � ���������� ����
	}
	return pMax;								// ���������� ��������� �� ��������� ����
}		
// Return Node with maxCount
List GetMax2(List pHead)
{
	float time = pHead->time;	// ��������� �� ������������ ��������� ������� ����
	List pMax = pHead;						// ���������� � pMax ��������� �� ������ ����
	List q = pHead->next;						// ������ ������� ���������� ��������� ����
	while (q)									// ���� �� ������ �� ����� ������
	{
		float f = q->time;			// ���������� ��������� � ��������� ����
		if (f > time)						// ���� ��� ������ ������� ����������, ��
		{
			time = f;						// ���������� � MaxDen ������� ���������
			pMax = q;							// ���������� � pMax ��������� �� ���� ����
		}
		q = q->next;							// ������� � ���������� ����
	}
	return pMax;								// ���������� ��������� �� ��������� ����
}

// ������� ����� ������ �� �����
bool ReadFile(StreamReader^ sr, List% pHead, List% pTail)
{
	String^ Buffer = "";						// ���������� � ������������� �������� ������
	try
	{
		while (Buffer = sr->ReadLine())			// ���� �� ��������� ����� �����
		{
			if (Buffer->Length == 0) continue;	// ������� ������ �����
			if (!ProcString(Buffer, pHead, pTail))		// ����� ������� ��������� ������
				return false;					// ������ ��������� ������ 
		}
		return true;							// ��� ������ ���������� ��� ������
	}
	catch (Exception^ ex)						// ��������� ������ ������
	{
		MessageBox::Show(ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

//�������� ������� ���������� ����� ����� ��� ������
bool compareFunction(std::string a, std::string b) { return a < b; }

// ������� ������������ ��������������� ����� ���������
std::vector<std::string> getVector(List% Head) {
	List q = Head;
	std::vector<std::string> lvector;

	while (q) {
		std::string unmanaged = msclr::interop::marshal_as<std::string>(q->name->ToString());
		lvector.push_back(unmanaged);
		q = q->next;
	}
	std::sort(lvector.begin(), lvector.end(), compareFunction);
	return lvector;
}

// ������� �������� ������ ��������
String^ DelSpace(String^ str)
{
	str = str->Trim();							// ������� ��������� � �������� �������
	while (str->IndexOf("  ") >= 0)				// � ������, ���� � ������ ���� ��� ������� ������, 
		str = str->Replace("  ", " ");			// �������� �� �� ���� ������
	return str;									// ���������� ��������������� ������
}

// ������� ������ ������ � ����
bool WriteFile(StreamWriter^ sw, List pHead)
{
	String^ Buffer = "";						// ���������� � ������������� ��������� ������
	List q = pHead;							// ��������� q - �� ������ ������
	String^ Name = "", ^ Capital = "",			// ���������� � ������������ �����
		^ Area = "", ^ PopSize = "";			// ��� ����� ���������
	try											// �������� ������ ��� ������ � ����
	{
		while (q)								// ���� �� ����� ������ �� ������ �� �����
		{
			Name = q->name;						// �������� ����������
			Capital = q->fio;				// ������� ����������
			Area = (q->time).ToString();		// ����� ����������
			PopSize = (q->count).ToString();	// ����������� ���������
	// ��������� ���� 4 ��������� � ���� ������ � ����� �� � ����
			Buffer = Name + " " + Capital + " " + Area + " " + PopSize;
			sw->WriteLine(Buffer);

			q = q->next;						// ������� � ���������� ���� ������
		}
		return true;							// ��� ������ ���������� ��� ������
	}
	catch (Exception^ ex)						// ��������� ������ ������
	{
		MessageBox::Show(ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

// ������� ������� ������
void ClearList(List% pHead, List% pTail, List% pCurr)
{
	List p, q = pHead;
	// ���� �� ������ ������ �� ���� ����� � ������� ��
	while (q)
	{
		p = q;
		q = q->next;
		delete p;
	}
	// ��� ��������� ������������� � 0
	pHead = nullptr;
	pTail = nullptr;
	pCurr = nullptr;
}