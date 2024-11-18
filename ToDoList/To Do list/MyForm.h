#pragma once
#include<ctime>
#include<chrono>

namespace TestGuIDEMO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
        std::time_t currentTime = std::time(nullptr);
        std::tm* localTime = std::localtime(&currentTime);
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int Sec_Default= localTime->tm_sec;
                int Min_Default= localTime->tm_min;
                int Hour_Default = localTime->tm_hour;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::NotifyIcon^ nicon;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ creditToolStripMenuItem;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button9;
















		  
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
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









	private: System::Windows::Forms::Label^ hr;
	private: System::Windows::Forms::Label^ minlable;
	private: System::Windows::Forms::Label^ sec;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ ToDoList;

	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TextBox^ listtextbox;






	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ Time;



	private: System::Windows::Forms::ComboBox^ s;
	private: System::Windows::Forms::ComboBox^ Min;
	private: System::Windows::Forms::ComboBox^ Hour;
	private: System::Windows::Forms::Timer^ timer1;


	private:









	private: System::ComponentModel::IContainer^ components;


























	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->hr = (gcnew System::Windows::Forms::Label());
			this->minlable = (gcnew System::Windows::Forms::Label());
			this->sec = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ToDoList = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->listtextbox = (gcnew System::Windows::Forms::TextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->s = (gcnew System::Windows::Forms::ComboBox());
			this->Min = (gcnew System::Windows::Forms::ComboBox());
			this->Hour = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->nicon = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->creditToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(381, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Change Time";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(4, 549);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"credit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// hr
			// 
			this->hr->BackColor = System::Drawing::Color::Transparent;
			this->hr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hr->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->hr->Location = System::Drawing::Point(198, 58);
			this->hr->Name = L"hr";
			this->hr->Size = System::Drawing::Size(38, 28);
			this->hr->TabIndex = 8;
			this->hr->Text = L"Hr:";
			this->hr->Visible = false;
			this->hr->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_3);
			// 
			// minlable
			// 
			this->minlable->BackColor = System::Drawing::Color::Transparent;
			this->minlable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minlable->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->minlable->Location = System::Drawing::Point(293, 58);
			this->minlable->Name = L"minlable";
			this->minlable->Size = System::Drawing::Size(51, 28);
			this->minlable->TabIndex = 9;
			this->minlable->Text = L"Min:";
			this->minlable->Visible = false;
			// 
			// sec
			// 
			this->sec->BackColor = System::Drawing::Color::Transparent;
			this->sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sec->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->sec->Location = System::Drawing::Point(403, 58);
			this->sec->Name = L"sec";
			this->sec->Size = System::Drawing::Size(58, 28);
			this->sec->TabIndex = 10;
			this->sec->Text = L"Sec:";
			this->sec->Visible = false;
			this->sec->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(87, 68);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// ToDoList
			// 
			this->ToDoList->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ToDoList->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ToDoList->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToDoList->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ToDoList->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToDoList.Image")));
			this->ToDoList->Location = System::Drawing::Point(381, 142);
			this->ToDoList->Name = L"ToDoList";
			this->ToDoList->Size = System::Drawing::Size(128, 43);
			this->ToDoList->TabIndex = 12;
			this->ToDoList->Text = L"To Do List ";
			this->ToDoList->UseVisualStyleBackColor = false;
			this->ToDoList->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(248, 245);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(272, 235);
			this->checkedListBox1->TabIndex = 13;
			this->checkedListBox1->Visible = false;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// listtextbox
			// 
			this->listtextbox->Location = System::Drawing::Point(248, 213);
			this->listtextbox->Name = L"listtextbox";
			this->listtextbox->Size = System::Drawing::Size(225, 26);
			this->listtextbox->TabIndex = 14;
			this->listtextbox->Visible = false;
			this->listtextbox->TextChanged += gcnew System::EventHandler(this, &MyForm::listtextbox_TextChanged);
			// 
			// Time
			// 
			this->Time->BackColor = System::Drawing::Color::Transparent;
			this->Time->Font = (gcnew System::Drawing::Font(L"Ink Free", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Time->Location = System::Drawing::Point(3, 93);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(148, 53);
			this->Time->TabIndex = 19;
			this->Time->Text = L"00:00:00";
			this->Time->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_5);
			// 
			// s
			// 
			this->s->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(24) {
				L"0", L"1", L"2", L"3", L"4", L"5",
					L"6", L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->s->DropDownHeight = 80;
			this->s->DropDownWidth = 17;
			this->s->FormatString = L"N2";
			this->s->FormattingEnabled = true;
			this->s->IntegralHeight = false;
			this->s->ItemHeight = 20;
			this->s->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
			});
			this->s->Location = System::Drawing::Point(242, 58);
			this->s->Name = L"s";
			this->s->Size = System::Drawing::Size(45, 28);
			this->s->TabIndex = 24;
			this->s->Text = L"0";
			this->s->Visible = false;
			this->s->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// Min
			// 
			this->Min->DropDownHeight = 80;
			this->Min->DropDownWidth = 17;
			this->Min->FormatString = L"N2";
			this->Min->FormattingEnabled = true;
			this->Min->IntegralHeight = false;
			this->Min->Items->AddRange(gcnew cli::array< System::Object^  >(59) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45",
					L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->Min->Location = System::Drawing::Point(350, 58);
			this->Min->Name = L"Min";
			this->Min->Size = System::Drawing::Size(47, 28);
			this->Min->TabIndex = 25;
			this->Min->Text = L"0";
			this->Min->Visible = false;
			this->Min->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Min_SelectedIndexChanged);
			// 
			// Hour
			// 
			this->Hour->DropDownHeight = 80;
			this->Hour->DropDownWidth = 17;
			this->Hour->FormatString = L"N2";
			this->Hour->FormattingEnabled = true;
			this->Hour->IntegralHeight = false;
			this->Hour->ItemHeight = 20;
			this->Hour->Items->AddRange(gcnew cli::array< System::Object^  >(59) {
				L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45",
					L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->Hour->Location = System::Drawing::Point(467, 58);
			this->Hour->Name = L"Hour";
			this->Hour->Size = System::Drawing::Size(48, 28);
			this->Hour->TabIndex = 26;
			this->Hour->Text = L"0";
			this->Hour->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick_2);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->monthCalendar1->Location = System::Drawing::Point(4, 213);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 27;
			this->monthCalendar1->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Ink Free", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(4, 149);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 43);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Calendar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// nicon
			// 
			this->nicon->ContextMenuStrip = this->contextMenuStrip1;
			this->nicon->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"nicon.Icon")));
			this->nicon->Text = L"notifyIcon1";
			this->nicon->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::nicon_MouseDoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->closeToolStripMenuItem,
					this->creditToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(107, 48);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::closeToolStripMenuItem_Click);
			// 
			// creditToolStripMenuItem
			// 
			this->creditToolStripMenuItem->Name = L"creditToolStripMenuItem";
			this->creditToolStripMenuItem->Size = System::Drawing::Size(106, 22);
			this->creditToolStripMenuItem->Text = L"Credit";
			this->creditToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::creditToolStripMenuItem_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(4, 387);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 31);
			this->button5->TabIndex = 30;
			this->button5->Text = L"Close";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(248, 486);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 31);
			this->button6->TabIndex = 31;
			this->button6->Text = L"Close";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(339, 486);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 31);
			this->button7->TabIndex = 32;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(435, 486);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 31);
			this->button8->TabIndex = 33;
			this->button8->Text = L"Remove";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(479, 213);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 26);
			this->button3->TabIndex = 34;
			this->button3->Text = L"ok";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_3);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(350, 93);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 26);
			this->button9->TabIndex = 35;
			this->button9->Text = L"ok";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(522, 583);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->Hour);
			this->Controls->Add(this->Min);
			this->Controls->Add(this->s);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->ToDoList);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->sec);
			this->Controls->Add(this->listtextbox);
			this->Controls->Add(this->minlable);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->hr);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"To Do List (GUI)";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
   		Time->Text = String::Format("{0:00}", Hour_Default)+":" + String::Format("{0:00}", Min_Default)+":" + String::Format("{0:00}", Sec_Default);
		nicon->BalloonTipTitle= "To Do List";
		nicon->BalloonTipText = "To Do list";
		nicon->Text = "To Do List";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		s->Visible= true;
		Min->Visible = true;
		Hour->Visible = true;
		button9->Visible = true;
		sec->Visible = true;
		minlable->Visible = true;
		hr->Visible = true;




	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("By Khaled Abdsalame\n\nWould you like to visit my GitHub profile?", "Credit", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk) == System::Windows::Forms::DialogResult::Yes) {

		System::Diagnostics::Process::Start("https://github.com/Khaledabdsalame");
	}
		
	

}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   
private: System::Void Ok_Click(System::Object^ sender, System::EventArgs^ e) {
	s->Visible = false;
	Min->Visible = false;
	Hour->Visible = false;
	button9->Visible = false;
	sec->Visible = false;
	minlable ->Visible = false;
	hr->Visible = false;
	Hour_Default = Convert::ToInt32(s->Text);
	Min_Default = Convert::ToInt32(Min->Text);
	Sec_Default = Convert::ToInt32(Hour->Text);
	
}
	   
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Seconds_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Min_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void s_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	listtextbox->Visible = true;
	checkedListBox1->Visible = true;
	button6->Visible = true;
	checkedListBox1->Visible = true;
	button3->Visible = true;
	button7->Visible = true;
	button8->Visible = true;

}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	listtextbox->Visible = false;
	checkedListBox1->Visible = false;
	button6->Visible = false;
	button3->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
}   
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
          
}
private: System::Void ok_chekedlist_Click(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Items->Add(listtextbox->Text);
	listtextbox->Text = "";
	if(listtextbox->Text=="")
	{
		checkedListBox1->Items->Remove(listtextbox->Text);
	}
	

}
private: System::Void ClrearBt_Click(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Items->Clear();
}
private: System::Void listtextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void x_Click(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->SelectedItem="";
}
private: System::Void label1_Click_4(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_2(System::Object^ sender, System::EventArgs^ e) {
	int i = 0;
	 while (checkedListBox1->CheckedItems->Count>i)
	{
		 checkedListBox1->Items->Remove(checkedListBox1->CheckedItems[i]);
		 
	}
	 i++;
}
private: System::Void label1_Click_5(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void HourDesplay_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Hour_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ErroInput_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Min_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void timer1_Tick_2(System::Object^ sender, System::EventArgs^ e) {
	
		Sec_Default++;
		if (Sec_Default == 60) {
			Sec_Default = 0;
			Min_Default++;
		}
		if (Min_Default == 60) {
			Hour_Default++;
			Min_Default = 0;
		}
		if (Hour_Default == 24) {
			Hour_Default = 0;
		}
	Time->Text = String::Format("{0:00}", Hour_Default) + ":" + String::Format("{0:00}", Min_Default) + ":" + String::Format("{0:00}", Sec_Default);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	monthCalendar1->Visible = true;
	button5->Visible = true;
}
private: System::Void CloseCaladar_Click(System::Object^ sender, System::EventArgs^ e) {
	monthCalendar1->Visible = false;
	button5->Visible = false;
}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}
private: System::Void nicon_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	this->Show();
	nicon->Visible = "false";
	WindowState = FormWindowState::Normal;
}
private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
	if (WindowState == FormWindowState::Minimized)
	{
		this->Hide();
		nicon->Visible = true;
		nicon->ShowBalloonTip(1000);
	}
	else if (FormWindowState::Normal == this->WindowState)
	{
		nicon->Visible = false;
	}
}
private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void creditToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("By Khaled Abdsalame\n\nWould you like to visit my GitHub profile?", "Credit", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk) == System::Windows::Forms::DialogResult::Yes) {

		System::Diagnostics::Process::Start("https://github.com/Khaledabdsalame");
	}
}
private: System::Void dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	monthCalendar1->Visible = false;
	button5->Visible = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	listtextbox->Visible = false;
	checkedListBox1->Visible = false;
	button6->Visible = false;
	button3->Visible = false;
	button7->Visible = false;
	button8->Visible = false;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Items->Clear();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	int i = 0;
	   while (checkedListBox1->CheckedItems->Count > i)
	   {
		   checkedListBox1->Items->Remove(checkedListBox1->CheckedItems[i]);

	   }
	   i++;
}
private: System::Void button3_Click_3(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Items->Add(listtextbox->Text);
	listtextbox->Text = "";
	if (listtextbox->Text == "")
	{
		checkedListBox1->Items->Remove(listtextbox->Text);
	}

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	s->Visible = false;
	Min->Visible = false;
	Hour->Visible = false;
	button9->Visible = false;
	sec->Visible = false;
	minlable->Visible = false;
	hr->Visible = false;
	Hour_Default = Convert::ToInt32(s->Text);
	Min_Default = Convert::ToInt32(Min->Text);
	Sec_Default = Convert::ToInt32(Hour->Text);
}
};
}
