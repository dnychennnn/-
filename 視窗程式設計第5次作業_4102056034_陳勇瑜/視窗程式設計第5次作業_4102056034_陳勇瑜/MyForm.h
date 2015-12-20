#pragma once

namespace 視窗程式設計第5次作業_4102056034_陳勇瑜 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO;
#define MAX
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  檔案ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  歷史紀錄ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  讀檔ToolStripMenuItem;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
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
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->檔案ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->歷史紀錄ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->讀檔ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(56, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(162, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(265, 227);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 75);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(56, 321);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 75);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(162, 321);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 75);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(265, 321);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 75);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(56, 422);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 75);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(162, 422);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 75);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(265, 422);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 75);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(56, 514);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(189, 75);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(265, 514);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 75);
			this->button11->TabIndex = 10;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(373, 258);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(83, 138);
			this->button12->TabIndex = 11;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(373, 422);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(83, 167);
			this->button13->TabIndex = 12;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(56, 133);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(83, 72);
			this->button14->TabIndex = 13;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(162, 133);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 72);
			this->button15->TabIndex = 14;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(265, 133);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 72);
			this->button16->TabIndex = 15;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"新細明體", 15));
			this->textBox1->Location = System::Drawing::Point(56, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(621, 55);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(551, 134);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(59, 45);
			this->button20->TabIndex = 20;
			this->button20->Text = L"cos";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(486, 195);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 42);
			this->button21->TabIndex = 21;
			this->button21->Text = L"tan";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(551, 195);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(58, 42);
			this->button22->TabIndex = 22;
			this->button22->Text = L"cot";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(486, 302);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(85, 41);
			this->button23->TabIndex = 23;
			this->button23->Text = L"power";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(486, 246);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(49, 41);
			this->button24->TabIndex = 24;
			this->button24->Text = L"^";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(486, 356);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(85, 40);
			this->button25->TabIndex = 25;
			this->button25->Text = L"sqrt";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(592, 302);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(85, 41);
			this->button26->TabIndex = 26;
			this->button26->Text = L"log10";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(592, 356);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(85, 40);
			this->button27->TabIndex = 27;
			this->button27->Text = L"!";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(486, 134);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 45);
			this->button17->TabIndex = 28;
			this->button17->Text = L"sin";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(628, 134);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 45);
			this->button18->TabIndex = 29;
			this->button18->Text = L"sec";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(628, 195);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 42);
			this->button19->TabIndex = 30;
			this->button19->Text = L"csc";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(628, 246);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(49, 45);
			this->button28->TabIndex = 31;
			this->button28->Text = L"ln";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(552, 246);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(58, 40);
			this->button29->TabIndex = 32;
			this->button29->Text = L"e^";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(486, 537);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(191, 52);
			this->button30->TabIndex = 33;
			this->button30->Text = L",";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(486, 422);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(85, 97);
			this->button31->TabIndex = 34;
			this->button31->Text = L"(";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(592, 422);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(85, 97);
			this->button32->TabIndex = 35;
			this->button32->Text = L")";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(373, 133);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(83, 104);
			this->button33->TabIndex = 36;
			this->button33->Text = L"<---";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->檔案ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(736, 42);
			this->menuStrip1->TabIndex = 37;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 檔案ToolStripMenuItem
			// 
			this->檔案ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->歷史紀錄ToolStripMenuItem,
					this->讀檔ToolStripMenuItem
			});
			this->檔案ToolStripMenuItem->Name = L"檔案ToolStripMenuItem";
			this->檔案ToolStripMenuItem->Size = System::Drawing::Size(76, 38);
			this->檔案ToolStripMenuItem->Text = L"檔案";
			// 
			// 歷史紀錄ToolStripMenuItem
			// 
			this->歷史紀錄ToolStripMenuItem->Name = L"歷史紀錄ToolStripMenuItem";
			this->歷史紀錄ToolStripMenuItem->Size = System::Drawing::Size(243, 36);
			this->歷史紀錄ToolStripMenuItem->Text = L"歷史紀錄";
			this->歷史紀錄ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::歷史紀錄ToolStripMenuItem_Click);
			// 
			// 讀檔ToolStripMenuItem
			// 
			this->讀檔ToolStripMenuItem->Name = L"讀檔ToolStripMenuItem";
			this->讀檔ToolStripMenuItem->Size = System::Drawing::Size(243, 36);
			this->讀檔ToolStripMenuItem->Text = L"讀檔";
			this->讀檔ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::讀檔ToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 633);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"屌爆了計算機";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ input;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "1";
		}
		else
			textBox1->Text += "1";
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "2";
		}
		else
			textBox1->Text += "2";
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "3";
		}
		else
			textBox1->Text += "3";
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "4";
		}
		else
			textBox1->Text += "4";
	}


	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "5";
		}
		else
			textBox1->Text += "5";
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "6";
		}
		else
			textBox1->Text += "6";
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "7";
		}
		else
			textBox1->Text += "7";
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "8";
		}
		else
			textBox1->Text += "8";
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "9";
		}
		else
			textBox1->Text += "9";
	}

	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "0";
		}
		else
			textBox1->Text += "0";

	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "0.";
		}
		else
			textBox1->Text += ".";
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "0/";
		}
		else
			textBox1->Text += "/";
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "0-";
		}
		else
			textBox1->Text += "-";
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "0*";
		}
		else
			textBox1->Text += "*";
	}
	private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "0!";
		}
		else
			textBox1->Text += "!";
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text += "0+";
		}
		else
			textBox1->Text += "+";
	}

	private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "(";
		}
		else
			textBox1->Text += "(";

	}
	private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
		
			textBox1->Text += ")";

	}
	private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text != "0")
			textBox1->Text += ",";
	}
	private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "sqrt";
		}
		else
			textBox1->Text += "sqrt";
	}
	private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "log10";
		}
		else
			textBox1->Text += "log10";
	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "0"){
			textBox1->Text = "power";
		}
		else
			textBox1->Text += "power";
	
	}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "ln";
	}
	else
		textBox1->Text += "ln";
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "e^";
	}
	else
		textBox1->Text += "e^";
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "0^";
	}
	else
		textBox1->Text += "^";
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "csc";
	}
	else
		textBox1->Text += "csc";
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "cot";
	}
	else
		textBox1->Text += "cot";
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "tan";
	}
	else
		textBox1->Text += "tan";
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "sec";
	}
	else
		textBox1->Text += "sec";
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "cos";
	}
	else
		textBox1->Text += "cos";
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "0"){
		textBox1->Text = "sin";
	}
	else
		textBox1->Text += "sin";
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {

	//判斷backspace遇到的是否為定義好之函數
	int len = textBox1->Text->Length-1;
	char last = textBox1->Text[len];
	switch (last)
	{
	case 'n':
		if (textBox1->Text[len - 1] != 'l'){
			textBox1->Text = textBox1->Text->Remove(len-2);
		}
		else{
			textBox1->Text = textBox1->Text->Remove(len-1);
		}
		break;
	case 'c':
		textBox1->Text = textBox1->Text->Remove(len - 2);
	case 's':
		textBox1->Text = textBox1->Text->Remove(len - 2);
		break;
	case 't':
		if (textBox1->Text[len - 1] != 'r')
			textBox1->Text = textBox1->Text->Remove(len - 2);
		else
			textBox1->Text = textBox1->Text->Remove(len - 3);
		break;
	case 'r':
		textBox1->Text = textBox1->Text->Remove(len - 4);
		break;
	case'0':
		if (textBox1->Text[len - 2] != 'g')
			textBox1->Text = textBox1->Text->Remove(len);
		else 
			textBox1->Text = textBox1->Text->Remove(len-4);
		break;
	case ' ':
		break;
	default:
		textBox1->Text = textBox1->Text->Remove(len);
		break;
	}
}
		 History^ frm = gcnew History;
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	
	int i = 0;
	frm->line[i] = textBox1->Text;
	textBox1->Text = Convert::ToString(expr(textBox1->Text+"\0"));
	frm->lineans[i] = textBox1->Text;
	i++;
	for (int count = 0; count < frm->line->Length; count++){
		ListViewItem^ listItem = gcnew ListViewItem(frm->line[count]);
		listItem->SubItems->Add(frm->lineans[count]);
		frm->listView1->Items->Add(listItem);
	}
}

 private: System::Void 歷史紀錄ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	 frm->ShowDialog();
 }

 
double^ expr(String^ str){
				 double^ value = gcnew double(0);                   // Store result here
				 int index(0); 		
				// Keeps track of current character position
				 *value = *term(str, index);            // Get first term
				
				 for (;;)                              // Indefinite loop, all exits inside
				 {
					 switch (str[(index)++]){

					 case '\0':                       // We're at the end of the string
						 return value;                 // so return what we have got

					 case '+':                        // + found so add in the
						 *value += *term(str, index);    // next term
						 break;

					 case '-':                        // - found so subtract
						 *value -= *term(str, index);    // the next term
						 break;

					 default:       								// If we reach here the string
						 textBox1->Text = "Error!";   
						 Thread::Sleep(2000);
						 textBox1->Text = "0";
					 }
				 }
		 }
double^ term(String^ str, int& index)
{
	double^ x = gcnew double(0);
	double^ y = gcnew double(0);
	double value(0.0);                   // Somewhere to accumulate the result

	switch (str[index])
	{
	case 's':
		if (str[(index)+1] == 'i')	//判斷是sin(x)
		{
			(index) += 3;
			value = System::Math::Sin(number(str, index));
		}
		else if (str[(index)+1] == 'e')	//判斷是sec(x)
		{
			(index) += 3;
			value = 1 / System::Math::Cos(number(str, index));
		}
		else if (str[(index)+1] == 'q') //判斷是開平方根
		{
			(index) += 4;
			value = System::Math::Sqrt(number(str, index));
		}
		break;
	case 'c':
		if (str[(index)+2] == 's')	//判斷是cos(x)
		{
			(index) += 3;
			value = System::Math::Cos(number(str, index));
		}
		else if (str[(index)+2] == 't') //判斷是cot(x)
		{
			(index) += 3;
			value = 1 / System::Math::Tan(number(str, index));
		}
		else if (str[(index)+2] == 'c') //判斷是csc(x)
		{
			index += 3;
			value = 1 / System::Math::Sin(number(str, index));
		}
		break;
	case 't':
		index += 3;
		value = System::Math::Tan(number(str, index));  //判斷是tan(x)
		break;
	case 'p':								//判斷是power(x,y)
		index += 6;
		*x = number(str, index);
		index += 1;
		*y = number(str, index);
		value = System::Math::Pow(*x, *y);
		(index)++;
		break;
	case 'l':								//判斷是log10(x)
		if (str[(index) + 1] == 'o')
		{
			index += 5;
			value = System::Math::Log10(number(str, index));
			break;
		}
		else if (str[(index) + 1] == 'n')
		{
			index += 2;
			value = System::Math::Log(number(str, index));
			break;
		}
	case 'e':								//判斷是自然數的x次方 e^x
		index += 2;
		value = System::Math::Exp(number(str, index));
		break;
	default:								//若都非以上函數 代表是一般number 將第一個值給value
		value = number(str, index);
		break;
	}
	

	// Get the first number in the term
	// Loop as long as we have a good operator
	while (true)
	{

		if (str[(index)] == '*')          //乘法 乘以下一個term
			value *= number(str, (++(index)));

		else if (str[(index)] == '/')     //除法 除以下一個term
			value /= number(str, (++(index)));

		else if (str[(index)] == '%')
			(value) = static_cast<int>(value) % static_cast<int>(number(str, ++index)); // 取餘數

		else if (str[(index)] == '^')		//x的y次方 
		{
			value = System::Math::Pow(value, number(str, (++index)));
		}
		else if (str[(index)] == '!')		//階層 
		{
			int* i = new int(1);
			int *count = new int((int)(value));
			for (*i = 1; *i < *count; (*i)++)
			{
				value *= (*i);
			}
			(index)++;
		}
		else
			break;
	}
	return value;                        // We've finished, so return what we've got.
}
double number(String^ str, int& index)
{
	double value(0.0);                   // Store the resulting value

	if (str[(index)] == '(' || str[(index)] == '[' || str[(index)] == '{')            // Start of parentheses
	{
		String^ psubstr(nullptr);            // Pointer for substring
		psubstr = extract(str, (++(index)));   // Extract substring in brackets
		value = *expr(psubstr);             // Get the value of the substring
		return value;                      // Return substring value
	}

	// There must be at least one digit...
	if (!Char::IsDigit(str, (index)))
	{ // There's no digits so input is junk...
		textBox1->Text =
			"Arrrgh!*#!! There's an error";
		System::Timers::Timer^ sys_tick = gcnew System::Timers::Timer(100);

	}

	while (Char::IsDigit(str,(index)))      // Loop accumulating leading digits
		value = 10 * (value) + (str[(index)++] - '0');

	// Not a digit when we get to here
	if (str[index] != '.')            // so check for decimal point
		return value;                      // and if not, return value

	double^ factor = gcnew double(1.0);                  // Factor for decimal places
	while (Char::IsDigit(str, ++(index)))   // Loop as long as we have digits
	{
		*factor *= 0.1;                     // Decrease factor by factor of 10
		value = value + (str[index] - '0')*(*factor);   // Add decimal place
	}

	return value;                        // On loop exit we are done
}
String^ extract(String^ str, int& index)
{
	array<Char>^ buffer = gcnew array<Char>(30);                   // Temporary space for substring
	String^ pstr(nullptr);                         // Pointer to new string for return
	int^ numL1 = gcnew int(0);							// Count of left parentheses found
	int^ numL2 = gcnew int(0);
	int^ numL3 = gcnew int(0);
	int^ bufindex = gcnew int(index);                // Save starting value for index

	do
	{
		buffer[(index) - (*bufindex)] = (str[(index)]);
		switch (buffer[(index) - (*bufindex)])
		{
		case ')':
			if (0 == (*numL1))
			{
				size_t size = (index) - *bufindex;
				buffer[(index) - (*bufindex)] = '\0';  // Replace ')' with '\0' 
				++(index);
				
				if (!pstr)
				{
					textBox1->Text= "Memory allocation failed," + " program terminated.";
					Thread::Sleep(2000);	//delay 然後print0
					textBox1->Text = "0";
				}
				
				pstr = gcnew String(buffer);// Copy substring to new memory
				pstr += "\0";
				return pstr;                 // Return substring in new memory
			}
			else
				(*numL1)--;                      // Reduce count of '(' to be matched
			break;

			case '(':
			(*numL1)++;                        // Increase count of '(' to be matched
			break;

			case ']':
			if (0 == (*numL2))
			{
				size_t size = index - *bufindex;
				buffer[(index) - *bufindex] = '\0';  // Replace ']' with '\0' 
				++(index);
				//pstr = new char[*index - *bufindex];
				if (!pstr)
				{
					textBox1->Text =  "Memory allocation failed,"
						+ " program terminated.";
					Thread::Sleep(2000);
				}
				pstr = gcnew String(buffer); // Copy substring to new memory
				return pstr;                 // Return substring in new memory
			}
			else
				(*numL2)--;                      // Reduce count of '[' to be matched
			break;
		case '[':
			(*numL2)++;                        // Increase count of '[' to be 
			// matched
			break;

		case '}':
			if (0 == (*numL3))
			{
				size_t size = (index) - *bufindex;
				buffer[(index) - *bufindex] = '\0';  // Replace '}' with '\0' 
				++(index);
				//pstr = new char[(*index) - *bufindex];
				if (!pstr)
				{
					textBox1->Text =  "Memory allocation failed," + " program terminated.";
					Thread::Sleep(2000);
					textBox1->Text = "0";
				}
				pstr = gcnew String(buffer); // Copy substring to new memory
				return pstr;                 // Return substring in new memory
			}
			else
				(*numL3)--;                      // Reduce count of '{' to be matched
			break;
		case '{':
			(*numL3)++;                        // Increase count of '{' to be 
			// matched
			break;
		}
	} while (str[(index)++] != '\0'); // Loop - don't overrun end of string
	textBox1->Text = "Ran off the end of the expression, must be bad input.";
	Thread::Sleep(2000);
	textBox1->Text = "0";
}

private: System::Void 讀檔ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	Stream^ fio;
	StreamReader^ fread;
	String^ formulaStr;
	array<Char>^ formula = gcnew array<Char>(30);
	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((fio = openFileDialog1->OpenFile()) != nullptr)
		{
			textBox1->Text = "";
			fread = gcnew StreamReader(fio);
			while (fread->Peek() >= 0){
			formulaStr = fread->ReadLine();
			int length = formulaStr->Length;
			formula = formulaStr->ToCharArray();
			formula[length - 1] = '\0';
			formulaStr = gcnew String(formula);
			textBox1->Text += expr(formulaStr) + " ";
			}
			
			// Insert code to read the stream here.
			fio->Close();
		}
	}
}

};
};
