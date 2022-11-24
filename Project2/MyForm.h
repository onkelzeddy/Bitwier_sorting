#include <string>
#include "q.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>

#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	int max = 0, count = 0;
	q Q;// создаем нашу очередь
	bool countOn = false;// переменная для проверки на дурача
	bool sorted = false;




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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(35, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Массив:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(407, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(35, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Результат:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(179, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(373, 26);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 40);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Step-by-step";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(451, 184);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 40);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Запуск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(629, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Размер массива:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(845, 37);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(964, 34);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 30);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Ввести";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->Format = L"N5";
			dataGridViewCellStyle1->NullValue = nullptr;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(40, 306);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->RowTemplate->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(1057, 295);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"0";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"1";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"2";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"3";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"4";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"5";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"6";
			this->Column7->MinimumWidth = 8;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"7";
			this->Column8->MinimumWidth = 8;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"8";
			this->Column9->MinimumWidth = 8;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"9";
			this->Column10->MinimumWidth = 8;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1148, 644);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Сортировка";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			auto tmp = textBox3->Text;
			if (tmp != "") {
				count = std::stoi(msclr::interop::marshal_as<std::string>(textBox3->Text));
				countOn = true; 
			}

		}


		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

			if (countOn && textBox1->Text != "") { 

				String^ tmp = textBox1->Text;
				std::string tmpNum;
				int begin = 0;
				int size = 0;
				std::int32_t tmpInt;
				int check;

				tmpNum = msclr::interop::marshal_as<std::string>(tmp);

				for (int i = 0; i < tmpNum.length(); i++) 
				{
					if (tmpNum[i] == ' ') {
						check = std::stoi(tmpNum.substr(begin, size));
						Q.push(std::stoi(tmpNum.substr(begin, size)));
						begin = i + 1;
						size = 0;
					}

					else {
						size++;
					}
				}

				if (size != 0) {
					Q.push(std::stoi(tmpNum.substr(begin, size)));
				}
				tmpNum.clear();

				Q.sort();

				String^ tmp1;
				size = count;

				for (int i = 0; i < size; i++)
				{
					tmpInt = Q.pop();
					tmpNum.append(std::to_string(tmpInt) + ' ');
				}

				tmp1 = msclr::interop::marshal_as<String^>(tmpNum);


				textBox2->Text = tmp1;

			}

		}


		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (countOn && textBox1->Text != "" && !sorted) {

				String^ tmp = textBox1->Text;
				std::string tmpNum;
				int begin = 0;
				int size = 0;
				std::int32_t tmpInt;
				int check;

				if (Q.isEmpty()) {


					tmpNum = msclr::interop::marshal_as<std::string>(tmp);

					for (int i = 0; i < tmpNum.length(); i++) 
					{
						if (tmpNum[i] == ' ') {
							check = std::stoi(tmpNum.substr(begin, size));
							Q.push(std::stoi(tmpNum.substr(begin, size)));
							begin = i + 1;
							size = 0;
						}

						else {
							size++;
						}
					}

					if (size != 0) {
						Q.push(std::stoi(tmpNum.substr(begin, size)));
					}
					tmpNum.clear();

				}


				dataGridView1->Rows->Clear();

				int* disArr[10];
				int counter[10];
				int* tmpArr;
				std::string tmpStr;
				size = count;
				int sortStepCount = Q.getSortStep();




				for (int s = 0; s < 10; s++)
				{
					counter[s] = 0;
				}


				for (int j = 0; j < size; j++)
				{
					tmpStr = std::to_string(Q.pop());


					if (tmpStr.length() < sortStepCount) 
					{
						if (counter[0] == 0) 
						{
							counter[0]++;
							disArr[0] = new int[counter[0]];
							disArr[0][counter[0] - 1] = std::stoi(tmpStr);
						}
						else
						{
							counter[0]++;
							tmpArr = disArr[0];
							disArr[0] = new int[counter[0]];

							for (int s = 0; s < counter[0] - 1; s++) 
							{
								disArr[0][s] = tmpArr[s];
							}
							disArr[0][counter[0] - 1] = std::stoi(tmpStr);
						}


						continue;

					}

					if (counter[tmpStr[tmpStr.length() - sortStepCount] - '0'] == 0)
					{
						
						counter[tmpStr[tmpStr.length() - sortStepCount] - '0']++;
						disArr[tmpStr[tmpStr.length() - sortStepCount] - '0'] = new int[counter[tmpStr[tmpStr.length() - sortStepCount] - '0']];
						disArr[tmpStr[tmpStr.length() - sortStepCount] - '0'][counter[tmpStr[tmpStr.length() - sortStepCount] - '0'] - 1] = std::stoi(tmpStr);
					}
					else
					{
						counter[tmpStr[tmpStr.length() - sortStepCount] - '0']++;
						tmpArr = disArr[tmpStr[tmpStr.length() - sortStepCount] - '0'];
						disArr[tmpStr[tmpStr.length() - sortStepCount] - '0'] = new int[counter[tmpStr[tmpStr.length() - sortStepCount] - '0']];

						for (int s = 0; s < counter[tmpStr[tmpStr.length() - sortStepCount] - '0'] - 1; s++)
						{
							disArr[tmpStr[tmpStr.length() - sortStepCount] - '0'][s] = tmpArr[s];
						}
						disArr[tmpStr[tmpStr.length() - sortStepCount] - '0'][counter[tmpStr[tmpStr.length() - sortStepCount] - '0'] - 1] = std::stoi(tmpStr);
					}

				}

				Q.upSortStep();

				for (int f = 0; f < 10; f++) 
				{
					for (int s = 0; s < counter[f]; s++)
					{
						if (dataGridView1->Rows->Count < counter[f]) {
							dataGridView1->Rows->Add(1);
						}

						dataGridView1->Rows[s]->Cells[f]->Value = disArr[f][s];
						Q.push(disArr[f][s]);
					}
				}

				if (Q.isSorted()) {
					dataGridView1->Rows->Clear();
					dataGridView1->Rows->Add(count);

					for (int s = 0; s < count; s++) {
						dataGridView1->Rows[s]->Cells[0]->Value = Q.pop();
					}

					sorted = true;

				}


			}
		}
};

}