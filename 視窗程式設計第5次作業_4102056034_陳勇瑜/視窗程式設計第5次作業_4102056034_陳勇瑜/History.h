#pragma once

namespace �����{���]�p��5���@�~_4102056034_���i�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// History ���K�n
	/// </summary>
	public ref class History : public System::Windows::Forms::Form
	{
	public:
		History(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~History()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListView^  listView1;

	protected:

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;
	public:
		array<String^>^ line = gcnew array < String^ >(30);
		array<String^>^ lineans = gcnew array<String^>(30);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边
		/// �ק�o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(12, 42);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(464, 339);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// History
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 448);
			this->Name = L"History";
			this->Text = L"History";
			this->ResumeLayout(false);

			
			
			
			this->Controls->Add(this->listView1);
			
			


		}
#pragma endregion
	};
}
