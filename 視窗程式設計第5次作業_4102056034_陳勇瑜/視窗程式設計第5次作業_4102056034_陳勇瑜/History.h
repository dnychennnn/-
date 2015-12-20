#pragma once

namespace 視窗程式設計第5次作業_4102056034_陳勇瑜 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// History 的摘要
	/// </summary>
	public ref class History : public System::Windows::Forms::Form
	{
	public:
		History(void)
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
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;
	public:
		array<String^>^ line = gcnew array < String^ >(30);
		array<String^>^ lineans = gcnew array<String^>(30);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
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
