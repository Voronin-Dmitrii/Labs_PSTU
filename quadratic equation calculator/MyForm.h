#pragma once
#include <string>

namespace quadraticequationcalculator {

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
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: bool t1, t2, t3;
	private: System::Windows::Forms::Label^ label9;





	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(37, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(93, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(149, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(37, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(93, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(149, 115);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(37, 171);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(93, 171);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(149, 171);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(93, 227);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(37, 227);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 10;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(205, 59);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 11;
			this->button12->Text = L"C";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(205, 115);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 106);
			this->button13->TabIndex = 12;
			this->button13->Text = L"+/-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(149, 227);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(106, 50);
			this->button14->TabIndex = 13;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(316, 55);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 29);
			this->textBox1->TabIndex = 14;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(368, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 31);
			this->label1->TabIndex = 15;
			this->label1->Text = L"x";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(391, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(490, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 31);
			this->label3->TabIndex = 17;
			this->label3->Text = L"x";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(404, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 29);
			this->label4->TabIndex = 20;
			this->label4->Text = L"+";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(597, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 29);
			this->label5->TabIndex = 22;
			this->label5->Text = L"= 0";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(436, 55);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 29);
			this->textBox2->TabIndex = 21;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(516, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 29);
			this->label6->TabIndex = 24;
			this->label6->Text = L"+";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(546, 55);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(49, 29);
			this->textBox3->TabIndex = 23;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(323, 150);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 31);
			this->label7->TabIndex = 25;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(323, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 31);
			this->label8->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(323, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 25);
			this->label9->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(678, 323);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
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
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"Калькулятор квадратных уравнений";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool TextBoxInputCheck()
		{
			bool f = false;
			for (int i = 0; i < textBox1->Text->Length; i++)
			{
				if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == ',') || (textBox1->Text[i] == '-'))
				{
					f = true;
				}
				else 
					return false;
			}
			for (int i = 0; i < textBox2->Text->Length; i++)
			{
				if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9') || (textBox2->Text[i] == ',') || (textBox2->Text[i] == '-'))
				{
					f = true;
				}
				else
					return false;
			}
			for (int i = 0; i < textBox3->Text->Length; i++)
			{
				if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9') || (textBox3->Text[i] == ',') || (textBox3->Text[i] == '-'))
				{
					f = true;
				}
				else
					return false;
			}
			return f;
		}

private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (TextBoxInputCheck())
	{
		label9->Text = "";
		double a, b, c, D, x1, x2;
		if (textBox1->Text == "")
			a = 0;
		else
			a = System::Convert::ToDouble(textBox1->Text);
		if (textBox2->Text == "")
			b = 0;
		else
			b = System::Convert::ToDouble(textBox2->Text);
		if (textBox3->Text == "")
			c = 0;
		else
			c = System::Convert::ToDouble(textBox3->Text);
		if (a == 0)
		{
			x1 = b * (-1) / c;
			if (round(x1) != x1)
			{
				label7->Text = "x = " + System::Convert::ToString(b*(-1)) + " / " + System::Convert::ToString(c);
			}
			else
				label7->Text = "x = " + System::Convert::ToString(x1);
			label8->Text = "";
		}
		else 
		{
			D = b * b - 4 * a * c;
			if (D >= 0)
			{
				x1 = (b * (-1) + sqrt(D)) / 2 * a;
				x2 = (b * (-1) - sqrt(D)) / 2 * a;
				if (round(x1) != x1)
				{
					if(round(sqrt(D)) == sqrt(D))
						label7->Text = "x1 = " + System::Convert::ToString(b*(-1)) + " / " + System::Convert::ToString(2*a) + " + " + System::Convert::ToString(sqrt(D) / 2 * a);
					else
						label7->Text = "x1 = " + System::Convert::ToString(b * (-1)) + " / " + System::Convert::ToString(2 * a) + " + sqrt(" + System::Convert::ToString(D) + ") / " + System::Convert::ToString(2*a);
				}
				else
					label7->Text = "x1 = " + System::Convert::ToString(x1);
				if (round(x2) != x2)
				{
					if (round(sqrt(D)) == sqrt(D))
						label8->Text = "x2 = " + System::Convert::ToString(b * (-1)) + " / " + System::Convert::ToString(2 * a) + " - " + System::Convert::ToString(sqrt(D) / 2 * a);
					else
						label8->Text = "x2 = " + System::Convert::ToString(b * (-1)) + " / " + System::Convert::ToString(2 * a) + " - sqrt(" + System::Convert::ToString(D) + ") / " + System::Convert::ToString(2 * a);
				}
				else
					label8->Text = "x2 = " + System::Convert::ToString(x2);
				if ((4 * a * c) >= 0)
					label9->Text = "D = " + System::Convert::ToString(b * b) + " - " + System::Convert::ToString(4 * a * c) + " = " + System::Convert::ToString(D);
				else
					label9->Text = "D = " + System::Convert::ToString(b * b) + " + " + System::Convert::ToString(4 * a * c * (-1)) + " = " + System::Convert::ToString(D);
			}
			else
			{
				double xc;
				xc = (b * (-1)) / (2 * a);
				x1 = sqrt(D * (-1)) / (2 * a);
				if (round(sqrt(D * (-1))) == sqrt(D * (-1)))
				{
					if (xc == round(xc))
					{
						label7->Text = "x1 = " + System::Convert::ToString(xc) + " + " + System::Convert::ToString(x1) + "i";
						label8->Text = "x2 = " + System::Convert::ToString(xc) + " - " + System::Convert::ToString(x1) + "i";
					}
					else
					{
					label7->Text = "x1 = " + System::Convert::ToString(b * (-1)) + " / " + System::Convert::ToString(2 * a) + " + " + System::Convert::ToString(x1) + "i";
					label8->Text = "x2 = " + System::Convert::ToString(b * (-1)) + " / " + System::Convert::ToString(2 * a) + " - " + System::Convert::ToString(x1) + "i";
					}
				}
				else
				{
					if (xc == round(xc)) 
					{
						label7->Text = "x1 = " + System::Convert::ToString(xc) + " + (sqrt(" + System::Convert::ToString(D * (-1)) + ") * i) / " + System::Convert::ToString(a * 2);
						label8->Text = "x2 = " + System::Convert::ToString(xc) + " - (sqrt(" + System::Convert::ToString(D * (-1)) + ") * i) / " + System::Convert::ToString(a * 2);
					}
					else
					{
						label7->Text = "x1 = " + System::Convert::ToString(b * (-1)) + " / " + System::Convert::ToString(2 * a) + " + (sqrt(" + System::Convert::ToString(D * (-1)) + ") * i) / " + System::Convert::ToString(a * 2);
						label8->Text = "x2 = " + System::Convert::ToString(b * (-1)) + " / " + System::Convert::ToString(2 * a) + " - (sqrt(" + System::Convert::ToString(D * (-1)) + ") * i) / " + System::Convert::ToString(a * 2);
					}
				}
				if ((4 * a * c) >= 0)
					label9->Text = "D = " + System::Convert::ToString(b * b) + " - " + System::Convert::ToString(4 * a * c) + " = " + System::Convert::ToString(D);
				else
					label9->Text = "D = " + System::Convert::ToString(b * b) + " + " + System::Convert::ToString(4 * a * c * (-1)) + " = " + System::Convert::ToString(D);
			}
		}
	}
	else
		MessageBox::Show("Введите числа", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	t1 = true;
	t2 = false;
	t3 = false;
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	t1 = false;
	t2 = true;
	t3 = false;
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	t1 = false;
	t2 = false;
	t3 = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button1->Text;
		else
			textBox1->Text = textBox1->Text + button1->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button1->Text;
			else
				textBox2->Text = textBox2->Text + button1->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button1->Text;
				else
					textBox3->Text = textBox3->Text + button1->Text;
			}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button2->Text;
		else
			textBox1->Text = textBox1->Text + button2->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button2->Text;
			else
				textBox2->Text = textBox2->Text + button2->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button2->Text;
				else
					textBox3->Text = textBox3->Text + button2->Text;
			}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button3->Text;
		else
			textBox1->Text = textBox1->Text + button3->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button3->Text;
			else
				textBox2->Text = textBox2->Text + button3->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button3->Text;
				else
					textBox3->Text = textBox3->Text + button3->Text;
			}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button4->Text;
		else
			textBox1->Text = textBox1->Text + button4->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button4->Text;
			else
				textBox2->Text = textBox2->Text + button4->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button4->Text;
				else
					textBox3->Text = textBox3->Text + button4->Text;
			}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button5->Text;
		else
			textBox1->Text = textBox1->Text + button5->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button5->Text;
			else
				textBox2->Text = textBox2->Text + button5->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button5->Text;
				else
					textBox3->Text = textBox3->Text + button5->Text;
			}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button6->Text;
		else
			textBox1->Text = textBox1->Text + button6->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button6->Text;
			else
				textBox2->Text = textBox2->Text + button6->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button6->Text;
				else
					textBox3->Text = textBox3->Text + button6->Text;
			}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button7->Text;
		else
			textBox1->Text = textBox1->Text + button7->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button7->Text;
			else
				textBox2->Text = textBox2->Text + button7->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button7->Text;
				else
					textBox3->Text = textBox3->Text + button7->Text;
			}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button8->Text;
		else
			textBox1->Text = textBox1->Text + button8->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button8->Text;
			else
				textBox2->Text = textBox2->Text + button8->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button8->Text;
				else
					textBox3->Text = textBox3->Text + button8->Text;
			}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button9->Text;
		else
			textBox1->Text = textBox1->Text + button9->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button9->Text;
			else
				textBox2->Text = textBox2->Text + button9->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button9->Text;
				else
					textBox3->Text = textBox3->Text + button9->Text;
			}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = button10->Text;
		else
			textBox1->Text = textBox1->Text + button10->Text;
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = button10->Text;
			else
				textBox2->Text = textBox2->Text + button10->Text;
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = button10->Text;
				else
					textBox3->Text = textBox3->Text + button10->Text;
			}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = "";
		else
			textBox1->Text = textBox1->Text + ",";
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = "";
			else
				textBox2->Text = textBox2->Text + ",";
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = "";
				else
					textBox3->Text = textBox3->Text + ",";
			}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	label7->Text = "";
	label8->Text = "";
	label9->Text = "";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t1)
	{
		if (textBox1->Text == "")
			textBox1->Text = "-";
		else
			if (textBox1->Text == "-")
				textBox1->Text = "";
			else
				if (System::Convert::ToDouble(textBox1->Text) > 0)
					textBox1->Text = "-" + textBox1->Text;
				else
					if (System::Convert::ToDouble(textBox1->Text) < 0)
						textBox1->Text = System::Convert::ToString(System::Convert::ToDouble(textBox1->Text) * (-1));
	}
	else
		if (t2)
		{
			if (textBox2->Text == "")
				textBox2->Text = "-";
			else
				if (textBox2->Text == "-")
					textBox2->Text = "";
				else
					if (System::Convert::ToDouble(textBox2->Text) > 0)
						textBox2->Text = "-" + textBox2->Text;
					else
						if (System::Convert::ToDouble(textBox2->Text) < 0)
							textBox2->Text = System::Convert::ToString(System::Convert::ToDouble(textBox2->Text) * (-1));
		}
		else
			if (t3)
			{
				if (textBox3->Text == "")
					textBox3->Text = "-";
				else
					if (textBox3->Text == "-")
						textBox3->Text = "";
					else
						if (System::Convert::ToDouble(textBox3->Text) > 0)
							textBox3->Text = "-" + textBox3->Text;
						else
							if (System::Convert::ToDouble(textBox3->Text) < 0)
								textBox3->Text = System::Convert::ToString(System::Convert::ToDouble(textBox3->Text) * (-1));
			}
}
};
}
