#include "Header.h"


// Функция добавления узла в конец списка
void AddLast(List% pHead, List% pTail, List NewNode)
{
	// меняем ссылки добавляемого узла
	//NewNode->prev = pTail;				// Устанавливаем ссылки добавляемого узла 
	NewNode->next = nullptr;				// на смежные узлы

	if (pTail)								// Если список не пустой,
		pTail->next = NewNode;				// то заменяем ссылку последнего узла на добавляемый
	pTail = NewNode;						// Заменяем ссылку на конец списка на добавляемый
	if (!pHead)								// Если список был пустым,
		pHead = pTail;						// то заменяем ссылку на начало списка на добавляемый
}

// Функция создания узла списка
List CreateList(String^ sname, String^ sfio, float scount, float stime)
{
	List NewNode = gcnew Excurs;			// указатель на новый узел
	NewNode->name = sname;					// записать название экскурсии
	NewNode->fio = sfio;			// записать ФИО экскурсовода
	NewNode->time = scount;					// записать время экскурсии
	NewNode->count = stime;				// записать численность картин
	NewNode->next = nullptr;				// следующего узла пока нет
	return NewNode;							// результат функции – адрес узла
}

// Функция обработки очередной строки файла
bool ProcString(String^ Line, List% pHead, List% pTail)
{
	Line = DelSpace(Line);						// Вызов функции удаления из строки лишиних пробелов
	array<TCHAR>^ dlm = { ' ' };				// Объявление и инициализация массива разделителей слов
	array<String^>^ words = Line->Split(dlm);	// Преобразование строки в массив слов
	int n = words->Length;						// Количество слов в строке
	if (n != 4)									// должно быть равно 4
	{
		MessageBox::Show("Недопустимое количество слов в строке " + words[0], "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	String^ Name = words[0];					// Первое слово - строка с названием экскурсии
	String^ fio = words[1];					// Второе слово - строка фио экскурсовода
	float count;									// Переменная - время страны
	if (!Single::TryParse(words[2], count) || count <= 0)
	{
		MessageBox::Show("Недопустимый формат  количества картин " + words[0], "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	float time;								// Переменная - численность картин

	if (!Single::TryParse(words[3], time) || time <= 0)
	{
		MessageBox::Show("Недопустимый формат времени экскурсий " + words[0], "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	List NextNode = CreateList(Name, fio, count, time);	// Создание очередного узла списка

	AddLast(pHead, pTail, NextNode);	
	return true;
}

// Return Node maxTime
List GetMax1(List pHead)
{
	float MaxDen = pHead->count;	// принимаем за максимальную плотность первого узла
	List pMax = pHead;						// запоминаем в pMax указатель на первый узел
	List q = pHead->next;						// делаем текущим указателем следующий узел
	while (q)									// пока не дойдем до конца списка
	{
		float Den = q->count;			// вычисление плотности в очередном узле
		if (Den > MaxDen)						// если она больше текущей наибольшей, то
		{
			MaxDen = Den;						// записываем в MaxDen текущую плотность
			pMax = q;							// запоминаем в pMax указатель на этот узел
		}
		q = q->next;							// переход к следующему узлу
	}
	return pMax;								// возвращаем указатель на найденный узел
}		
// Return Node with maxCount
List GetMax2(List pHead)
{
	float time = pHead->time;	// принимаем за максимальную плотность первого узла
	List pMax = pHead;						// запоминаем в pMax указатель на первый узел
	List q = pHead->next;						// делаем текущим указателем следующий узел
	while (q)									// пока не дойдем до конца списка
	{
		float f = q->time;			// вычисление плотности в очередном узле
		if (f > time)						// если она больше текущей наибольшей, то
		{
			time = f;						// записываем в MaxDen текущую плотность
			pMax = q;							// запоминаем в pMax указатель на этот узел
		}
		q = q->next;							// переход к следующему узлу
	}
	return pMax;								// возвращаем указатель на найденный узел
}

// Функция ввода списка из файла
bool ReadFile(StreamReader^ sr, List% pHead, List% pTail)
{
	String^ Buffer = "";						// Объявление и инициализация входного буфера
	try
	{
		while (Buffer = sr->ReadLine())			// Пока не достигнут конец файла
		{
			if (Buffer->Length == 0) continue;	// Пропуск пустых строк
			if (!ProcString(Buffer, pHead, pTail))		// Вызов функции обработки строки
				return false;					// Ошибка обработки строки 
		}
		return true;							// Все строки обработаны без ошибок
	}
	catch (Exception^ ex)						// Обработка ошибок чтения
	{
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

//Функциия которая сравнивает между собой две строки
bool compareFunction(std::string a, std::string b) { return a < b; }

// Функция возвращающая отсортированные имена экскурсий
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

// Функция удаления лишних пробелов
String^ DelSpace(String^ str)
{
	str = str->Trim();							// Убираем начальные и концевые пробелы
	while (str->IndexOf("  ") >= 0)				// А теперь, пока в строке есть два пробела подряд, 
		str = str->Replace("  ", " ");			// заменяем их на один пробел
	return str;									// Возвращаем преобразованную строку
}

// Функция вывода списка в файл
bool WriteFile(StreamWriter^ sw, List pHead)
{
	String^ Buffer = "";						// Объявление и инициализация выходного буфера
	List q = pHead;							// Указатель q - на начало списка
	String^ Name = "", ^ Capital = "",			// Объявление и иницализация строк
		^ Area = "", ^ PopSize = "";			// для полей структуры
	try											// Контроль ошибок при выводе в файл
	{
		while (q)								// Идем по всему списку от начала до конца
		{
			Name = q->name;						// Название экскурсииа
			Capital = q->fio;				// Столица экскурсииа
			Area = (q->time).ToString();		// время экскурсииа
			PopSize = (q->count).ToString();	// Численность картинния
	// Сцепление всех 4 атрибутов в одну строку и вывод ее в файл
			Buffer = Name + " " + Capital + " " + Area + " " + PopSize;
			sw->WriteLine(Buffer);

			q = q->next;						// Переход к следующему узлу списка
		}
		return true;							// Все строки обработаны без ошибок
	}
	catch (Exception^ ex)						// Обработка ошибок записи
	{
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}

// Функция очистки списка
void ClearList(List% pHead, List% pTail, List% pCurr)
{
	List p, q = pHead;
	// идем от начала списка по всем узлам и удаляем их
	while (q)
	{
		p = q;
		q = q->next;
		delete p;
	}
	// все указатели устанавливаем в 0
	pHead = nullptr;
	pTail = nullptr;
	pCurr = nullptr;
}