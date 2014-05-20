#pragma once

namespace SimpleLines {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  xButton;
	private: System::Windows::Forms::Button^  yButton;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  drawButton;
	protected:

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->xButton = (gcnew System::Windows::Forms::Button());
			this->yButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->drawButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// xButton
			// 
			this->xButton->Location = System::Drawing::Point(389, 36);
			this->xButton->Name = L"xButton";
			this->xButton->Size = System::Drawing::Size(75, 23);
			this->xButton->TabIndex = 0;
			this->xButton->Text = L"Open file";
			this->xButton->UseVisualStyleBackColor = true;
			this->xButton->Click += gcnew System::EventHandler(this, &MyForm::xButton_Click);
			// 
			// yButton
			// 
			this->yButton->Location = System::Drawing::Point(389, 81);
			this->yButton->Name = L"yButton";
			this->yButton->Size = System::Drawing::Size(75, 23);
			this->yButton->TabIndex = 1;
			this->yButton->Text = L"Open file";
			this->yButton->UseVisualStyleBackColor = true;
			this->yButton->Click += gcnew System::EventHandler(this, &MyForm::yButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(306, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(66, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(306, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"X";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Y";
			// 
			// drawButton
			// 
			this->drawButton->Location = System::Drawing::Point(389, 126);
			this->drawButton->Name = L"drawButton";
			this->drawButton->Size = System::Drawing::Size(75, 23);
			this->drawButton->TabIndex = 6;
			this->drawButton->Text = L"Draw";
			this->drawButton->UseVisualStyleBackColor = true;
			this->drawButton->Click += gcnew System::EventHandler(this, &MyForm::drawButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 262);
			this->Controls->Add(this->drawButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->yButton);
			this->Controls->Add(this->xButton);
			this->Name = L"MyForm";
			this->Text = L"SimpleLines";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void xButton_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::OpenFileDialog^  openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox1->Text = openFileDialog1->FileName;
		}
	}

	private: System::Void yButton_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::OpenFileDialog^  openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox2->Text = openFileDialog1->FileName;
		}

	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void drawButton_Click(System::Object^  sender, System::EventArgs^  e) {

	}
};
}
