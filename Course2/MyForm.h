#pragma once
#include "Header.h"

namespace Course2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(373, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(321, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ввод списка экскурсий из файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(373, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(321, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Вывод списка экскурсий в файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(373, 143);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Начало";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(455, 142);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Конец";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(537, 142);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Удаление";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(618, 143);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Добавить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(494, 171);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Сортировка";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(22, 334);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Определить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(619, 381);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Выход";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(58, 237);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 9;
			this->button10->Text = L"ОК";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(169, 237);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Отмена";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(592, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Определить самую продолжительную экскурсию и экскурсию с наибольшим количеством о"
				L"сматриваемых картин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Название";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(58, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 20);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(58, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(182, 20);
			this->textBox2->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"ФИО экскурсовода";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(58, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(182, 20);
			this->textBox3->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(55, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Количество осматриваемых картин";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(58, 183);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(182, 20);
			this->textBox4->TabIndex = 19;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(55, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Продолжительность, час.";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(158, 334);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(372, 20);
			this->textBox5->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(155, 318);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(204, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Самая продолжительная экскурсия, ч.";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(158, 383);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(372, 20);
			this->textBox6->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(155, 367);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(351, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Экскурсия с наибольшим количеством осматриваемых картин, шт.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 421);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		List Head;
		List Tail;
		List currentNode;
		String^ FilePath;
		bool First;
//OK
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (textBox1->Text->Length == 0)
	{
		MessageBox::Show("Введите тему экскурсии", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox1->Focus();
		return;
	}
	if (textBox2->Text->Length == 0)
	{
		MessageBox::Show("Введите тему экскурсии", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox2->Focus();
		return;
	}
	float time;
	if (!Single::TryParse(textBox3->Text, time) || time <= 0)
	{
		MessageBox::Show("Введите время в правильном числовом формате", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox3->Focus();
		return;
	}
	float count;
	if (!Single::TryParse(textBox4->Text, count) || count <= 0)
	{
		MessageBox::Show("Введите колчество в правильном числовом формате", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox4->Focus();
		return;
	}

	String^ tema = textBox1->Text;
	String^ fio = textBox2->Text;

	currentNode = CreateList(tema, fio, time, count);

	AddLast(Head, Tail, currentNode);

	//TODO ADD
	button10->Enabled = false;
	button11->Enabled = false;

	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();

	textBox1->Enabled = false;
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;
}

//CANCEL 
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
{
	button10->Enabled = false;
	button11->Enabled = false;

	textBox1->Enabled = false;
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;
}

//TOP
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentNode = Head;
}

//END
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	currentNode = Tail;
}

//Delete
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Удаление элемента списка не предусмотрено вариантом", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

//ADD
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	button10->Enabled = true;
	button11->Enabled = true;
	textBox1->Enabled = true;
	textBox2->Enabled = true;
	textBox3->Enabled = true;
	textBox4->Enabled = true;

}

// SORT
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::vector<std::string> lvector;
		lvector = getVector(Head);

		List q = Head;
		List NewHead;
		List NewTail;

		for(int i = 0; i < lvector.size(); i++)
		{
			String^ qname = msclr::interop::marshal_as<String^>(lvector[i]);
			
			while (q) 
			{
				std::cout << "Equals? - " << lvector[i] << " " << msclr::interop::marshal_as<std::string>(q->name->ToString()) << " is " << (q->name->ToString() == qname) << "\n";
				if (q->name->ToString() == qname)
				{
					
					List NextNode = CreateList(qname, q->fio, q->time, q->count);
					AddLast(NewHead, NewTail, NextNode);
					break;
				}
				q = q->next;
			}
			q = Head;
		}
		ClearList(Head, Tail, currentNode);
		Head = NewHead;
		Tail = NewTail;
	}

//DO
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox5->Enabled = true;
	textBox6->Enabled = true;

	List max5 = GetMax1(Head);
	List max6 = GetMax2(Head);

	textBox5->Text = (max5->count).ToString();
	textBox6->Text = (max6->time).ToString();
}

//Exit
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClearList(Head, Tail, currentNode);
	this->Close();
}

// Input
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ClearList(Head, Tail, currentNode);
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	openFileDialog->Title = "Открытие файла со списком экскурсий";
	openFileDialog->InitialDirectory = "c:\\";
	openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt";
	openFileDialog->ShowReadOnly = false;
	openFileDialog->RestoreDirectory = true;

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		FilePath = openFileDialog->FileName;
	else
		FilePath = "";

	if (FilePath == "") 
	{
		MessageBox::Show("Выберите коректный файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else 
	{
		StreamReader^ sr = nullptr;					// Объявление указателя на входной поток
		try
		{
			sr = gcnew StreamReader(FilePath);		// Создание потока с проверкой ошибок
		}
		catch (Exception^ ex)						// Обработка ошибок создания потока ввода
		{
			MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			if (sr) sr->Close();
			return;
		}
		// Вызов функции обработки
		if (ReadFile(sr, Head, Tail))// Если файл прочитан без ошибок
		{
			MessageBox::Show("Успешно считано", "Список экскурсий успешно считан с файла", MessageBoxButtons::OK, MessageBoxIcon::Information);

			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;
		}
		else // Если при чтении файла возникла ошибка
		{
			MessageBox::Show("Ошибка при считывании файла", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (sr) sr->Close();
	}
}

// Output
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	StreamWriter^ sw = nullptr;						// Объявление указателя на выходной поток
	try
	{
		sw = gcnew StreamWriter(FilePath, false);	// Создание потока с проверкой ошибок
	}
	catch (Exception^ ex)							// Обработка ошибок создания потока вывода
	{
		MessageBox::Show(ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		if (sw) sw->Close();
		return;
	}
	if (WriteFile(sw, Head))						// Если файл создан без ошибок
	{
		MessageBox::Show("Список успешно выведен в файл", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else											// Если при записи в файл возникла ошибка
		button9->Focus();							// Установка курсора на кнопку "Выход"

	if (sw) sw->Close();							// Закрытие потока
}

//On Load
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
{
	Head = nullptr;
	currentNode = nullptr;

	button1->Enabled = true;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	button5->Enabled = false;
	button6->Enabled = false;
	button7->Enabled = false;
	button8->Enabled = false;
	button9->Enabled = true;
	button10->Enabled = false;
	button11->Enabled = false;

	textBox1->Enabled = false;
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;
	textBox5->Enabled = false;
	textBox6->Enabled = false;
}

};
}
