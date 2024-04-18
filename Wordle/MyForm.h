#pragma once
#include <string>
#include <fstream>
#include <ctime>
#include <msclr\marshal_cppstd.h>
namespace Wordle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			setlocale(LC_ALL, "rus");
			InitializeComponent();
			srand(time(NULL));
			WordRand();
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
	private:
		   string *levels = new string[6];
		   int curlevel = 0;
		   string *word = new string[1];
		   bool game = true;
		   bool imageshow = false;
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
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;

	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;
	private: System::Windows::Forms::Button^ button52;
	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;
	private: System::Windows::Forms::Button^ button62;
	private: System::Windows::Forms::Button^ button63;
	private: System::Windows::Forms::Button^ button64;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button65;
	private: System::Windows::Forms::Button^ button66;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button67;
	protected:
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
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button67 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(458, 44);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 73);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(380, 44);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 73);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(302, 44);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 73);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(224, 44);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 73);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(146, 44);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 73);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(458, 125);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 73);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(380, 125);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 73);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(302, 125);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 73);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(224, 125);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 73);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(146, 125);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(70, 73);
			this->button10->TabIndex = 5;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(458, 206);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 73);
			this->button11->TabIndex = 14;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(380, 206);
			this->button12->Margin = System::Windows::Forms::Padding(2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(70, 73);
			this->button12->TabIndex = 13;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(302, 206);
			this->button13->Margin = System::Windows::Forms::Padding(2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(70, 73);
			this->button13->TabIndex = 12;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(224, 206);
			this->button14->Margin = System::Windows::Forms::Padding(2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(70, 73);
			this->button14->TabIndex = 11;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(146, 206);
			this->button15->Margin = System::Windows::Forms::Padding(2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(70, 73);
			this->button15->TabIndex = 10;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(458, 287);
			this->button16->Margin = System::Windows::Forms::Padding(2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(70, 73);
			this->button16->TabIndex = 19;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(380, 287);
			this->button17->Margin = System::Windows::Forms::Padding(2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(70, 73);
			this->button17->TabIndex = 18;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(302, 287);
			this->button18->Margin = System::Windows::Forms::Padding(2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(70, 73);
			this->button18->TabIndex = 17;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(224, 287);
			this->button19->Margin = System::Windows::Forms::Padding(2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(70, 73);
			this->button19->TabIndex = 16;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(146, 287);
			this->button20->Margin = System::Windows::Forms::Padding(2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(70, 73);
			this->button20->TabIndex = 15;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(380, 368);
			this->button22->Margin = System::Windows::Forms::Padding(2);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(70, 73);
			this->button22->TabIndex = 23;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(302, 368);
			this->button23->Margin = System::Windows::Forms::Padding(2);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(70, 73);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(224, 368);
			this->button24->Margin = System::Windows::Forms::Padding(2);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(70, 73);
			this->button24->TabIndex = 21;
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(146, 368);
			this->button25->Margin = System::Windows::Forms::Padding(2);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(70, 73);
			this->button25->TabIndex = 20;
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(458, 368);
			this->button21->Margin = System::Windows::Forms::Padding(2);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(70, 73);
			this->button21->TabIndex = 24;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(81, 631);
			this->button26->Margin = System::Windows::Forms::Padding(2);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(40, 42);
			this->button26->TabIndex = 25;
			this->button26->Text = L"й";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(124, 631);
			this->button27->Margin = System::Windows::Forms::Padding(2);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(40, 42);
			this->button27->TabIndex = 26;
			this->button27->Text = L"ц";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(167, 631);
			this->button28->Margin = System::Windows::Forms::Padding(2);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(40, 42);
			this->button28->TabIndex = 27;
			this->button28->Text = L"у";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(210, 631);
			this->button29->Margin = System::Windows::Forms::Padding(2);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(40, 42);
			this->button29->TabIndex = 28;
			this->button29->Text = L"к";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(253, 631);
			this->button30->Margin = System::Windows::Forms::Padding(2);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(40, 42);
			this->button30->TabIndex = 29;
			this->button30->Text = L"е";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(296, 631);
			this->button31->Margin = System::Windows::Forms::Padding(2);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(40, 42);
			this->button31->TabIndex = 30;
			this->button31->Text = L"н";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(339, 631);
			this->button32->Margin = System::Windows::Forms::Padding(2);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(40, 42);
			this->button32->TabIndex = 31;
			this->button32->Text = L"г";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(382, 631);
			this->button33->Margin = System::Windows::Forms::Padding(2);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(40, 42);
			this->button33->TabIndex = 32;
			this->button33->Text = L"ш";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(425, 631);
			this->button34->Margin = System::Windows::Forms::Padding(2);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(40, 42);
			this->button34->TabIndex = 33;
			this->button34->Text = L"щ";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(468, 631);
			this->button35->Margin = System::Windows::Forms::Padding(2);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(40, 42);
			this->button35->TabIndex = 34;
			this->button35->Text = L"з";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(511, 631);
			this->button36->Margin = System::Windows::Forms::Padding(2);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(40, 42);
			this->button36->TabIndex = 35;
			this->button36->Text = L"х";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(554, 631);
			this->button37->Margin = System::Windows::Forms::Padding(2);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(40, 42);
			this->button37->TabIndex = 36;
			this->button37->Text = L"ъ";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(550, 675);
			this->button38->Margin = System::Windows::Forms::Padding(2);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(44, 42);
			this->button38->TabIndex = 47;
			this->button38->Text = L"э";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(504, 675);
			this->button39->Margin = System::Windows::Forms::Padding(2);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(44, 42);
			this->button39->TabIndex = 46;
			this->button39->Text = L"ж";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(458, 675);
			this->button40->Margin = System::Windows::Forms::Padding(2);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(44, 42);
			this->button40->TabIndex = 45;
			this->button40->Text = L"д";
			this->button40->UseVisualStyleBackColor = false;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(411, 675);
			this->button41->Margin = System::Windows::Forms::Padding(2);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(44, 42);
			this->button41->TabIndex = 44;
			this->button41->Text = L"л";
			this->button41->UseVisualStyleBackColor = false;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(363, 675);
			this->button42->Margin = System::Windows::Forms::Padding(2);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(44, 42);
			this->button42->TabIndex = 43;
			this->button42->Text = L"о";
			this->button42->UseVisualStyleBackColor = false;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(316, 675);
			this->button43->Margin = System::Windows::Forms::Padding(2);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(44, 42);
			this->button43->TabIndex = 42;
			this->button43->Text = L"р";
			this->button43->UseVisualStyleBackColor = false;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(270, 675);
			this->button44->Margin = System::Windows::Forms::Padding(2);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(44, 42);
			this->button44->TabIndex = 41;
			this->button44->Text = L"п";
			this->button44->UseVisualStyleBackColor = false;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(224, 675);
			this->button45->Margin = System::Windows::Forms::Padding(2);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(44, 42);
			this->button45->TabIndex = 40;
			this->button45->Text = L"а";
			this->button45->UseVisualStyleBackColor = false;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->Location = System::Drawing::Point(177, 675);
			this->button46->Margin = System::Windows::Forms::Padding(2);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(44, 42);
			this->button46->TabIndex = 39;
			this->button46->Text = L"в";
			this->button46->UseVisualStyleBackColor = false;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->Location = System::Drawing::Point(129, 675);
			this->button47->Margin = System::Windows::Forms::Padding(2);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(44, 42);
			this->button47->TabIndex = 38;
			this->button47->Text = L"ы";
			this->button47->UseVisualStyleBackColor = false;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button48->Location = System::Drawing::Point(81, 675);
			this->button48->Margin = System::Windows::Forms::Padding(2);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(44, 42);
			this->button48->TabIndex = 37;
			this->button48->Text = L"ф";
			this->button48->UseVisualStyleBackColor = false;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->Location = System::Drawing::Point(511, 720);
			this->button49->Margin = System::Windows::Forms::Padding(2);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(83, 42);
			this->button49->TabIndex = 57;
			this->button49->Text = L"Ввод";
			this->button49->UseVisualStyleBackColor = false;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::buttonEnter_Click);
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button50->Location = System::Drawing::Point(468, 720);
			this->button50->Margin = System::Windows::Forms::Padding(2);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(40, 42);
			this->button50->TabIndex = 56;
			this->button50->Text = L"ю";
			this->button50->UseVisualStyleBackColor = false;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->Location = System::Drawing::Point(425, 720);
			this->button51->Margin = System::Windows::Forms::Padding(2);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(40, 42);
			this->button51->TabIndex = 55;
			this->button51->Text = L"б";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button52
			// 
			this->button52->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button52->Location = System::Drawing::Point(382, 720);
			this->button52->Margin = System::Windows::Forms::Padding(2);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(40, 42);
			this->button52->TabIndex = 54;
			this->button52->Text = L"ь";
			this->button52->UseVisualStyleBackColor = false;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button53->Location = System::Drawing::Point(339, 720);
			this->button53->Margin = System::Windows::Forms::Padding(2);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(40, 42);
			this->button53->TabIndex = 53;
			this->button53->Text = L"т";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button54->Location = System::Drawing::Point(296, 720);
			this->button54->Margin = System::Windows::Forms::Padding(2);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(40, 42);
			this->button54->TabIndex = 52;
			this->button54->Text = L"и";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button55->Location = System::Drawing::Point(253, 720);
			this->button55->Margin = System::Windows::Forms::Padding(2);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(40, 42);
			this->button55->TabIndex = 51;
			this->button55->Text = L"м";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->Location = System::Drawing::Point(210, 720);
			this->button56->Margin = System::Windows::Forms::Padding(2);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(40, 42);
			this->button56->TabIndex = 50;
			this->button56->Text = L"с";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button57->Location = System::Drawing::Point(167, 720);
			this->button57->Margin = System::Windows::Forms::Padding(2);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(40, 42);
			this->button57->TabIndex = 49;
			this->button57->Text = L"ч";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button58->Location = System::Drawing::Point(124, 720);
			this->button58->Margin = System::Windows::Forms::Padding(2);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(40, 42);
			this->button58->TabIndex = 48;
			this->button58->Text = L"я";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::buttonkeyboard_Click);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button59->Location = System::Drawing::Point(81, 720);
			this->button59->Margin = System::Windows::Forms::Padding(2);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(40, 42);
			this->button59->TabIndex = 58;
			this->button59->Text = L"←";
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button59_Click);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button60->Location = System::Drawing::Point(458, 449);
			this->button60->Margin = System::Windows::Forms::Padding(2);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(70, 73);
			this->button60->TabIndex = 63;
			this->button60->UseVisualStyleBackColor = false;
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button61->Location = System::Drawing::Point(380, 449);
			this->button61->Margin = System::Windows::Forms::Padding(2);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(70, 73);
			this->button61->TabIndex = 62;
			this->button61->UseVisualStyleBackColor = false;
			// 
			// button62
			// 
			this->button62->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button62->Location = System::Drawing::Point(302, 449);
			this->button62->Margin = System::Windows::Forms::Padding(2);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(70, 73);
			this->button62->TabIndex = 61;
			this->button62->UseVisualStyleBackColor = false;
			// 
			// button63
			// 
			this->button63->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button63->Location = System::Drawing::Point(224, 449);
			this->button63->Margin = System::Windows::Forms::Padding(2);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(70, 73);
			this->button63->TabIndex = 60;
			this->button63->UseVisualStyleBackColor = false;
			// 
			// button64
			// 
			this->button64->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button64->Location = System::Drawing::Point(146, 449);
			this->button64->Margin = System::Windows::Forms::Padding(2);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(70, 73);
			this->button64->TabIndex = 59;
			this->button64->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(192, 573);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 64;
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(564, 69);
			this->button65->Margin = System::Windows::Forms::Padding(2);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(104, 25);
			this->button65->TabIndex = 65;
			this->button65->Text = L"Сдаюсь";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(564, 69);
			this->button66->Margin = System::Windows::Forms::Padding(2);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(104, 25);
			this->button66->TabIndex = 66;
			this->button66->Text = L"Ещё раз";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Visible = false;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button66_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(192, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 29);
			this->label2->TabIndex = 67;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(118, 36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(602, 552);
			this->pictureBox1->TabIndex = 68;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button67
			// 
			this->button67->Location = System::Drawing::Point(12, 69);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(104, 23);
			this->button67->TabIndex = 69;
			this->button67->Text = L"Правила";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::button67_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(724, 796);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: void WordRand()
		{
			ifstream file;
			string line = "";
			file.open("5words.txt", ifstream::app);
			int random = rand() % 408 + 1;
			int i = 0;
			while (getline(file, line) && i < random)
			{
				i++;
			}
			String^ line2 = gcnew String(line.c_str());
			/*label1->Text = line2;*/
			word[0] = line;
		}
#pragma endregion
	private: bool WordInDictionaryCheck(string mword)
	{
		bool f = false;
		ifstream file1;
		string line = "";
		file1.open("all5words.txt", ifstream::app);
		while (getline(file1, line))
		{
			if (line == mword)
			{
				f = true;
				break;
			}
		}

		return f;
	}
	private: System::Void buttonkeyboard_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		msclr::interop::marshal_context context;
		Button^ button = (Button^)sender;
		if (levels[0].length() < 5 && game == true)
		{
			switch (curlevel)
			{
			case 0:
				switch (levels[0].length())
				{
				case 0:
					levels[0] += context.marshal_as<string>(button->Text);
					button5->Text = button->Text;
					break;
				case 1:
					levels[0] += context.marshal_as<string>(button->Text);
					button4->Text = button->Text;
					break;
				case 2:
					levels[0] += context.marshal_as<string>(button->Text);
					button3->Text = button->Text;
					break;
				case 3:
					levels[0] += context.marshal_as<string>(button->Text);
					button2->Text = button->Text;
					break;
				case 4:
					levels[0] += context.marshal_as<string>(button->Text);
					button1->Text = button->Text;
					break;
				}
				break;
			case 1:
				switch (levels[0].length())
				{
				case 0:
					levels[0] += context.marshal_as<string>(button->Text);
					button10->Text = button->Text;;
					break;
				case 1:
					levels[0] += context.marshal_as<string>(button->Text);
					button9->Text = button->Text;
					break;
				case 2:
					levels[0] += context.marshal_as<string>(button->Text);
					button8->Text = button->Text;
					break;
				case 3:
					levels[0] += context.marshal_as<string>(button->Text);
					button7->Text = button->Text;;
					break;
				case 4:
					levels[0] += context.marshal_as<string>(button->Text);
					button6->Text = button->Text;
					break;
				}
				break;
			case 2:
				switch (levels[0].length())
				{
				case 0:
					levels[0] += context.marshal_as<string>(button->Text);
					button15->Text = button->Text;
					break;
				case 1:
					levels[0] += context.marshal_as<string>(button->Text);
					button14->Text = button->Text;
					break;
				case 2:
					levels[0] += context.marshal_as<string>(button->Text);
					button13->Text = button->Text;
					break;
				case 3:
					levels[0] += context.marshal_as<string>(button->Text);
					button12->Text = button->Text;
					break;
				case 4:
					levels[0] += context.marshal_as<string>(button->Text);
					button11->Text = button->Text;
					break;
				}
				break;
			case 3:
				switch (levels[0].length())
				{
				case 0:
					levels[0] += context.marshal_as<string>(button->Text);
					button20->Text = button->Text;
					break;
				case 1:
					levels[0] += context.marshal_as<string>(button->Text);
					button19->Text = button->Text;
					break;
				case 2:
					levels[0] += context.marshal_as<string>(button->Text);
					button18->Text = button->Text;
					break;
				case 3:
					levels[0] += context.marshal_as<string>(button->Text);
					button17->Text = button->Text;
					break;
				case 4:
					levels[0] += context.marshal_as<string>(button->Text);
					button16->Text = button->Text;
					break;
				}
				break;
			case 4:
				switch (levels[0].length())
				{
				case 0:
					levels[0] += context.marshal_as<string>(button->Text);
					button25->Text = button->Text;
					break;
				case 1:
					levels[0] += context.marshal_as<string>(button->Text);
					button24->Text = button->Text;
					break;
				case 2:
					levels[0] += context.marshal_as<string>(button->Text);
					button23->Text = button->Text;
					break;
				case 3:
					levels[0] += context.marshal_as<string>(button->Text);
					button22->Text = button->Text;
					break;
				case 4:
					levels[0] += context.marshal_as<string>(button->Text);
					button21->Text = button->Text;
					break;
				}
				break;
			case 5:
				switch (levels[0].length())
				{
				case 0:
					levels[0] += context.marshal_as<string>(button->Text);
					button64->Text = button->Text;
					break;
				case 1:
					levels[0] += context.marshal_as<string>(button->Text);
					button63->Text = button->Text;
					break;
				case 2:
					levels[0] += context.marshal_as<string>(button->Text);
					button62->Text = button->Text;
					break;
				case 3:
					levels[0] += context.marshal_as<string>(button->Text);
					button61->Text = button->Text;
					break;
				case 4:
					levels[0] += context.marshal_as<string>(button->Text);
					button60->Text = button->Text;
					break;
				}
				break;
			}
		}
	}
	private: void WinnerWinnerChickenDinner()
	{
		label1->Text = "Вы отгадали слово!";
		button66->Visible = true;
		button65->Visible = false;
	}
	private: void Loser()
	{
		String^ wordmainsys = gcnew String(word[0].c_str());
		label1->Text = "Правильное слово: " + wordmainsys;
		game = false;
		button66->Visible = true;
		button65->Visible = false;
	}
	private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (levels[0].length() == 5 && game == true)
		{
			bool f = WordInDictionaryCheck(levels[0]);
			if (f == false)
				return;
			MainLogic();
			if (levels[0] == word[0])
			{
				WinnerWinnerChickenDinner();
				return;
			}
			curlevel++;
			if (curlevel > 5)
				Loser();
			levels[0] = "";
		}

}
	private: void KeyboardColorChange(char letter, int n)
	{
		switch (letter)
		{
		case ('й'):
			switch (n)
			{
			case 0:
				button26->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button26->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button26->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ц'):
			switch (n)
			{
			case 0:
				button27->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button27->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button27->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('у'):
			switch (n)
			{
			case 0:
				button28->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button28->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button28->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('к'):
			switch (n)
			{
			case 0:
				button29->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button29->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button29->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('е'):
			switch (n)
			{
			case 0:
				button30->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button30->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button30->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('н'):
			switch (n)
			{
			case 0:
				button31->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button31->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button31->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('г'):
			switch (n)
			{
			case 0:
				button32->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button32->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button32->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ш'):
			switch (n)
			{
			case 0:
				button33->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button33->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button33->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('щ'):
			switch (n)
			{
			case 0:
				button34->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button34->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button34->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('з'):
			switch (n)
			{
			case 0:
				button35->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button35->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button35->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('х'):
			switch (n)
			{
			case 0:
				button36->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button36->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button36->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ъ'):
			switch (n)
			{
			case 0:
				button37->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button37->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button37->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ф'):
			switch (n)
			{
			case 0:
				button48->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button48->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button48->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ы'):
			switch (n)
			{
			case 0:
				button47->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button47->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button47->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('в'):
			switch (n)
			{
			case 0:
				button46->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button46->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button46->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('а'):
			switch (n)
			{
			case 0:
				button45->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button45->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button45->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('п'):
			switch (n)
			{
			case 0:
				button44->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button44->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button44->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('р'):
			switch (n)
			{
			case 0:
				button43->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button43->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button43->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('о'):
			switch (n)
			{
			case 0:
				button42->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button42->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button42->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('л'):
			switch (n)
			{
			case 0:
				button41->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button41->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button41->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('д'):
			switch (n)
			{
			case 0:
				button40->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button40->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button40->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ж'):
			switch (n)
			{
			case 0:
				button39->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button39->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button39->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('э'):
			switch (n)
			{
			case 0:
				button38->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button38->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button38->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('я'):
			switch (n)
			{
			case 0:
				button58->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button58->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button58->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ч'):
			switch (n)
			{
			case 0:
				button57->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button57->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button57->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('с'):
			switch (n)
			{
			case 0:
				button56->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button56->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button56->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('м'):
			switch (n)
			{
			case 0:
				button55->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button55->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button55->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('и'):
			switch (n)
			{
			case 0:
				button54->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button54->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button54->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('т'):
			switch (n)
			{
			case 0:
				button53->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button53->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button53->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ь'):
			switch (n)
			{
			case 0:
				button52->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button52->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button52->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('б'):
			switch (n)
			{
			case 0:
				button51->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button51->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button51->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		case ('ю'):
			switch (n)
			{
			case 0:
				button50->BackColor = System::Drawing::SystemColors::ControlDarkDark;
				break;
			case 1:
				button50->BackColor = System::Drawing::Color::ForestGreen;
				break;
			case 2:
				button50->BackColor = System::Drawing::Color::Goldenrod;
				break;
			}
			break;
		}
	}

	private: void MainLogic()
	{
		int repeat = 0;
		for (int i = 0; i < 5; i++)
		{
			if (word[0].find(levels[0][i]) != -1)
			{
				if (word[0][i] == levels[0][i])
					KeyboardColorChange(levels[0][i], 1);
				else
					KeyboardColorChange(levels[0][i], 2);
				if (word[0].find(levels[0][i]) == word[0].rfind(levels[0][i]) || repeat == 0)
				{
					switch (curlevel)
					{
					case 0:
						switch (i)
						{
						case 0:
							if (word[0][i] == levels[0][i])
								button5->BackColor = System::Drawing::Color::ForestGreen;
							else
								button5->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 1:
							if (word[0][i] == levels[0][i])
								button4->BackColor = System::Drawing::Color::ForestGreen;
							else
								button4->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 2:
							if (word[0][i] == levels[0][i])
								button3->BackColor = System::Drawing::Color::ForestGreen;
							else
								button3->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 3:
							if (word[0][i] == levels[0][i])
								button2->BackColor = System::Drawing::Color::ForestGreen;
							else
								button2->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 4:
							if (word[0][i] == levels[0][i])
								button1->BackColor = System::Drawing::Color::ForestGreen;
							else
								button1->BackColor = System::Drawing::Color::Goldenrod;
							break;
						}
						break;
					case 1:
						switch (i)
						{
						case 0:
							if (word[0][i] == levels[0][i])
								button10->BackColor = System::Drawing::Color::ForestGreen;
							else
								button10->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 1:
							if (word[0][i] == levels[0][i])
								button9->BackColor = System::Drawing::Color::ForestGreen;
							else
								button9->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 2:
							if (word[0][i] == levels[0][i])
								button8->BackColor = System::Drawing::Color::ForestGreen;
							else
								button8->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 3:
							if (word[0][i] == levels[0][i])
								button7->BackColor = System::Drawing::Color::ForestGreen;
							else
								button7->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 4:
							if (word[0][i] == levels[0][i])
								button6->BackColor = System::Drawing::Color::ForestGreen;
							else
								button6->BackColor = System::Drawing::Color::Goldenrod;
							break;
						}
						break;
					case 2:
						switch (i)
						{
						case 0:
							if (word[0][i] == levels[0][i])
								button15->BackColor = System::Drawing::Color::ForestGreen;
							else
								button15->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 1:
							if (word[0][i] == levels[0][i])
								button14->BackColor = System::Drawing::Color::ForestGreen;
							else
								button14->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 2:
							if (word[0][i] == levels[0][i])
								button13->BackColor = System::Drawing::Color::ForestGreen;
							else
								button13->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 3:
							if (word[0][i] == levels[0][i])
								button12->BackColor = System::Drawing::Color::ForestGreen;
							else
								button12->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 4:
							if (word[0][i] == levels[0][i])
								button11->BackColor = System::Drawing::Color::ForestGreen;
							else
								button11->BackColor = System::Drawing::Color::Goldenrod;
							break;
						}
						break;
					case 3:
						switch (i)
						{
						case 0:
							if (word[0][i] == levels[0][i])
								button20->BackColor = System::Drawing::Color::ForestGreen;
							else
								button20->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 1:
							if (word[0][i] == levels[0][i])
								button19->BackColor = System::Drawing::Color::ForestGreen;
							else
								button19->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 2:
							if (word[0][i] == levels[0][i])
								button18->BackColor = System::Drawing::Color::ForestGreen;
							else
								button18->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 3:
							if (word[0][i] == levels[0][i])
								button17->BackColor = System::Drawing::Color::ForestGreen;
							else
								button17->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 4:
							if (word[0][i] == levels[0][i])
								button16->BackColor = System::Drawing::Color::ForestGreen;
							else
								button16->BackColor = System::Drawing::Color::Goldenrod;
							break;
						}
						break;
					case 4:
						switch (i)
						{
						case 0:
							if (word[0][i] == levels[0][i])
								button25->BackColor = System::Drawing::Color::ForestGreen;
							else
								button25->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 1:
							if (word[0][i] == levels[0][i])
								button24->BackColor = System::Drawing::Color::ForestGreen;
							else
								button24->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 2:
							if (word[0][i] == levels[0][i])
								button23->BackColor = System::Drawing::Color::ForestGreen;
							else
								button23->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 3:
							if (word[0][i] == levels[0][i])
								button22->BackColor = System::Drawing::Color::ForestGreen;
							else
								button22->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 4:
							if (word[0][i] == levels[0][i])
								button21->BackColor = System::Drawing::Color::ForestGreen;
							else
								button21->BackColor = System::Drawing::Color::Goldenrod;
							break;
						}
						break;
					case 5:
						switch (i)
						{
						case 0:
							if (word[0][i] == levels[0][i])
								button64->BackColor = System::Drawing::Color::ForestGreen;
							else
								button64->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 1:
							if (word[0][i] == levels[0][i])
								button63->BackColor = System::Drawing::Color::ForestGreen;
							else
								button63->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 2:
							if (word[0][i] == levels[0][i])
								button62->BackColor = System::Drawing::Color::ForestGreen;
							else
								button62->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 3:
							if (word[0][i] == levels[0][i])
								button61->BackColor = System::Drawing::Color::ForestGreen;
							else
								button61->BackColor = System::Drawing::Color::Goldenrod;
							break;
						case 4:
							if (word[0][i] == levels[0][i])
								button60->BackColor = System::Drawing::Color::ForestGreen;
							else
								button60->BackColor = System::Drawing::Color::Goldenrod;
							break;
						}
						break;
					}
					if (word[0].find(levels[0][i]) != word[0].rfind(levels[0][i]))
						repeat++;
				}
				else
				{
					if (word[0][i] == levels[0][i])
						KeyboardColorChange(levels[0][i], 1);
					else
						KeyboardColorChange(levels[0][i], 2);
					switch (curlevel)
				{
				case 0:
					switch (i)
					{
					case 0:
						if (word[0][i] == levels[0][i])
							button5->BackColor = System::Drawing::Color::ForestGreen;
						else
							button5->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 1:
						if (word[0][i] == levels[0][i])
							button4->BackColor = System::Drawing::Color::ForestGreen;
						else
							button4->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 2:
						if (word[0][i] == levels[0][i])
							button3->BackColor = System::Drawing::Color::ForestGreen;
						else
							button3->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 3:
						if (word[0][i] == levels[0][i])
							button2->BackColor = System::Drawing::Color::ForestGreen;
						else
							button2->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 4:
						if (word[0][i] == levels[0][i])
							button1->BackColor = System::Drawing::Color::ForestGreen;
						else
							button1->BackColor = System::Drawing::Color::Goldenrod;
						break;
					}
					break;
				case 1:
					switch (i)
					{
					case 0:
						if (word[0][i] == levels[0][i])
							button10->BackColor = System::Drawing::Color::ForestGreen;
						else
							button10->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 1:
						if (word[0][i] == levels[0][i])
							button9->BackColor = System::Drawing::Color::ForestGreen;
						else
							button9->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 2:
						if (word[0][i] == levels[0][i])
							button8->BackColor = System::Drawing::Color::ForestGreen;
						else
							button8->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 3:
						if (word[0][i] == levels[0][i])
							button7->BackColor = System::Drawing::Color::ForestGreen;
						else
							button7->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 4:
						if (word[0][i] == levels[0][i])
							button6->BackColor = System::Drawing::Color::ForestGreen;
						else
							button6->BackColor = System::Drawing::Color::Goldenrod;
						break;
					}
					break;
				case 2:
					switch (i)
					{
					case 0:
						if (word[0][i] == levels[0][i])
							button15->BackColor = System::Drawing::Color::ForestGreen;
						else
							button15->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 1:
						if (word[0][i] == levels[0][i])
							button14->BackColor = System::Drawing::Color::ForestGreen;
						else
							button14->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 2:
						if (word[0][i] == levels[0][i])
							button13->BackColor = System::Drawing::Color::ForestGreen;
						else
							button13->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 3:
						if (word[0][i] == levels[0][i])
							button12->BackColor = System::Drawing::Color::ForestGreen;
						else
							button12->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 4:
						if (word[0][i] == levels[0][i])
							button11->BackColor = System::Drawing::Color::ForestGreen;
						else
							button11->BackColor = System::Drawing::Color::Goldenrod;
						break;
					}
					break;
				case 3:
					switch (i)
					{
					case 0:
						if (word[0][i] == levels[0][i])
							button20->BackColor = System::Drawing::Color::ForestGreen;
						else
							button20->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 1:
						if (word[0][i] == levels[0][i])
							button19->BackColor = System::Drawing::Color::ForestGreen;
						else
							button19->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 2:
						if (word[0][i] == levels[0][i])
							button18->BackColor = System::Drawing::Color::ForestGreen;
						else
							button18->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 3:
						if (word[0][i] == levels[0][i])
							button17->BackColor = System::Drawing::Color::ForestGreen;
						else
							button17->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 4:
						if (word[0][i] == levels[0][i])
							button16->BackColor = System::Drawing::Color::ForestGreen;
						else
							button16->BackColor = System::Drawing::Color::Goldenrod;
						break;
					}
					break;
				case 4:
					switch (i)
					{
					case 0:
						if (word[0][i] == levels[0][i])
							button25->BackColor = System::Drawing::Color::ForestGreen;
						else
							button25->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 1:
						if (word[0][i] == levels[0][i])
							button24->BackColor = System::Drawing::Color::ForestGreen;
						else
							button24->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 2:
						if (word[0][i] == levels[0][i])
							button23->BackColor = System::Drawing::Color::ForestGreen;
						else
							button23->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 3:
						if (word[0][i] == levels[0][i])
							button22->BackColor = System::Drawing::Color::ForestGreen;
						else
							button22->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 4:
						if (word[0][i] == levels[0][i])
							button21->BackColor = System::Drawing::Color::ForestGreen;
						else
							button21->BackColor = System::Drawing::Color::Goldenrod;
						break;
					}
					break;
				case 5:
					switch (i)
					{
					case 0:
						if (word[0][i] == levels[0][i])
							button64->BackColor = System::Drawing::Color::ForestGreen;
						else
							button64->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 1:
						if (word[0][i] == levels[0][i])
							button63->BackColor = System::Drawing::Color::ForestGreen;
						else
							button63->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 2:
						if (word[0][i] == levels[0][i])
							button62->BackColor = System::Drawing::Color::ForestGreen;
						else
							button62->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 3:
						if (word[0][i] == levels[0][i])
							button61->BackColor = System::Drawing::Color::ForestGreen;
						else
							button61->BackColor = System::Drawing::Color::Goldenrod;
						break;
					case 4:
						if (word[0][i] == levels[0][i])
							button60->BackColor = System::Drawing::Color::ForestGreen;
						else
							button60->BackColor = System::Drawing::Color::Goldenrod;
						break;
					}
					break;
				}
				}
			}
			else
			{
				KeyboardColorChange(levels[0][i], 0);
				switch (curlevel)
			{
			case 0:
				switch (i)
				{
				case 0:
					button5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 1:
					button4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 2:
					button3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 3:
					button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 4:
					button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				}
				break;
			case 1:
				switch (i)
				{
				case 0:
					button10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 1:
					button9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 2:
					button8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 3:
					button7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 4:
					button6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				}
				break;
			case 2:
				switch (i)
				{
				case 0:
					button15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 1:
					button14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 2:
					button13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 3:
					button12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 4:
					button11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				}
				break;
			case 3:
				switch (i)
				{
				case 0:
					button20->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 1:
					button19->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 2:
					button18->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 3:
					button17->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 4:
					button16->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				}
				break;
			case 4:
				switch (i)
				{
				case 0:
					button25->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 1:
					button24->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 2:
					button23->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 3:
					button22->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 4:
					button21->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				}
				break;
			case 5:
				switch (i)
				{
				case 0:
					button64->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 1:
					button63->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 2:
					button62->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 3:
					button61->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				case 4:
					button60->BackColor = System::Drawing::SystemColors::ControlDarkDark;
					break;
				}
				break;
			}
			}
		}
	}
private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
	Loser();
}
private: void ButtonGridClear(System::Object^ sender)
{
	Button^ button = (Button^)sender;
	button->Text = "";
	button->BackColor = System::Drawing::SystemColors::ButtonFace;
}
private: void ButtonKeyboardClear(System::Object^ sender)
{
	Button^ button = (Button^)sender;
	button->BackColor = System::Drawing::SystemColors::ControlLight;
}
private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
	WordRand();
	levels[0] = "";
	curlevel = 0;
	button66->Visible = false;
	button65->Visible = true;
	game = true;
	label1->Text = "";
	ButtonGridClear(button1);
	ButtonGridClear(button2);
	ButtonGridClear(button3);
	ButtonGridClear(button4);
	ButtonGridClear(button5);
	ButtonGridClear(button6);
	ButtonGridClear(button7);
	ButtonGridClear(button8);
	ButtonGridClear(button9);
	ButtonGridClear(button10);
	ButtonGridClear(button11);
	ButtonGridClear(button12);
	ButtonGridClear(button13);
	ButtonGridClear(button14);
	ButtonGridClear(button15);
	ButtonGridClear(button16);
	ButtonGridClear(button17);
	ButtonGridClear(button18);
	ButtonGridClear(button19);
	ButtonGridClear(button20);
	ButtonGridClear(button21);
	ButtonGridClear(button22);
	ButtonGridClear(button23);
	ButtonGridClear(button24);
	ButtonGridClear(button25);
	ButtonGridClear(button60);
	ButtonGridClear(button61);
	ButtonGridClear(button62);
	ButtonGridClear(button63);
	ButtonGridClear(button64);
	ButtonKeyboardClear(button26);
	ButtonKeyboardClear(button27);
	ButtonKeyboardClear(button28);
	ButtonKeyboardClear(button29);
	ButtonKeyboardClear(button30);
	ButtonKeyboardClear(button31);
	ButtonKeyboardClear(button32);
	ButtonKeyboardClear(button33);
	ButtonKeyboardClear(button34);
	ButtonKeyboardClear(button35);
	ButtonKeyboardClear(button36);
	ButtonKeyboardClear(button37);
	ButtonKeyboardClear(button38);
	ButtonKeyboardClear(button39);
	ButtonKeyboardClear(button40);
	ButtonKeyboardClear(button41);
	ButtonKeyboardClear(button42);
	ButtonKeyboardClear(button43);
	ButtonKeyboardClear(button44);
	ButtonKeyboardClear(button45);
	ButtonKeyboardClear(button46);
	ButtonKeyboardClear(button47);
	ButtonKeyboardClear(button48);
	ButtonKeyboardClear(button50);
	ButtonKeyboardClear(button51);
	ButtonKeyboardClear(button52);
	ButtonKeyboardClear(button53);
	ButtonKeyboardClear(button54);
	ButtonKeyboardClear(button55);
	ButtonKeyboardClear(button56);
	ButtonKeyboardClear(button57);
	ButtonKeyboardClear(button58);
}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
	if (levels[0] != "")
	{
		switch (curlevel)
		{
		case 0:
			switch (levels[0].length())
			{
			case 1:
				ButtonGridClear(button5);
				break;
			case 2:
				ButtonGridClear(button4);
				break;
			case 3:
				ButtonGridClear(button3);
				break;
			case 4:
				ButtonGridClear(button2);
				break;
			case 5:
				ButtonGridClear(button1);
				break;
			}
			break;
		case 1:
			switch (levels[0].length())
			{
			case 1:
				ButtonGridClear(button10);
				break;
			case 2:
				ButtonGridClear(button9);
				break;
			case 3:
				ButtonGridClear(button8);
				break;
			case 4:
				ButtonGridClear(button7);
				break;
			case 5:
				ButtonGridClear(button6);
				break;
			}
			break;
		case 2:
			switch (levels[0].length())
			{
			case 1:
				ButtonGridClear(button15);
				break;
			case 2:
				ButtonGridClear(button14);
				break;
			case 3:
				ButtonGridClear(button13);
				break;
			case 4:
				ButtonGridClear(button12);
				break;
			case 5:
				ButtonGridClear(button11);
				break;
			}
			break;
		case 3:
			switch (levels[0].length())
			{
			case 1:
				ButtonGridClear(button20);
				break;
			case 2:
				ButtonGridClear(button19);
				break;
			case 3:
				ButtonGridClear(button18);
				break;
			case 4:
				ButtonGridClear(button17);
				break;
			case 5:
				ButtonGridClear(button16);
				break;
			}
			break;
		case 4:
			switch (levels[0].length())
			{
			case 1:
				ButtonGridClear(button25);
				break;
			case 2:
				ButtonGridClear(button24);
				break;
			case 3:
				ButtonGridClear(button23);
				break;
			case 4:
				ButtonGridClear(button22);
				break;
			case 5:
				ButtonGridClear(button21);
				break;
			}
			break;
		case 5:
			switch (levels[0].length())
			{
			case 1:
				ButtonGridClear(button64);
				break;
			case 2:
				ButtonGridClear(button63);
				break;
			case 3:
				ButtonGridClear(button62);
				break;
			case 4:
				ButtonGridClear(button61);
				break;
			case 5:
				ButtonGridClear(button60);
				break;
			}
			break;
		}
		levels[0].pop_back();
	}
}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
	if (imageshow == false)
	{
		pictureBox1->Visible = true;
		imageshow = true;
	}
	else
	{
		pictureBox1->Visible = false;
		imageshow = false;
	}
}
};
}
