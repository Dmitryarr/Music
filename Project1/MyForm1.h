#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblStyle;
	private: System::Windows::Forms::Label^ lblExecutor;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lblSong;
	private: System::Windows::Forms::Label^ lblDuration;


	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ tbSong;
	private: System::Windows::Forms::TextBox^ tbExecutor;
	private: System::Windows::Forms::TextBox^ tbDuration;
	private: System::Windows::Forms::ComboBox^ cbStyle;


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
			this->lblStyle = (gcnew System::Windows::Forms::Label());
			this->lblExecutor = (gcnew System::Windows::Forms::Label());
			this->lblSong = (gcnew System::Windows::Forms::Label());
			this->lblDuration = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->tbSong = (gcnew System::Windows::Forms::TextBox());
			this->tbExecutor = (gcnew System::Windows::Forms::TextBox());
			this->tbDuration = (gcnew System::Windows::Forms::TextBox());
			this->cbStyle = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// lblStyle
			// 
			this->lblStyle->AutoSize = true;
			this->lblStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblStyle->Location = System::Drawing::Point(110, 102);
			this->lblStyle->Name = L"lblStyle";
			this->lblStyle->Size = System::Drawing::Size(49, 20);
			this->lblStyle->TabIndex = 0;
			this->lblStyle->Text = L"Жанр";
			// 
			// lblExecutor
			// 
			this->lblExecutor->AutoSize = true;
			this->lblExecutor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblExecutor->Location = System::Drawing::Point(419, 102);
			this->lblExecutor->Name = L"lblExecutor";
			this->lblExecutor->Size = System::Drawing::Size(111, 20);
			this->lblExecutor->TabIndex = 1;
			this->lblExecutor->Text = L"Исполнитель";
			// 
			// lblSong
			// 
			this->lblSong->AutoSize = true;
			this->lblSong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSong->Location = System::Drawing::Point(269, 102);
			this->lblSong->Name = L"lblSong";
			this->lblSong->Size = System::Drawing::Size(56, 20);
			this->lblSong->TabIndex = 2;
			this->lblSong->Text = L"Песня";
			// 
			// lblDuration
			// 
			this->lblDuration->AutoSize = true;
			this->lblDuration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDuration->Location = System::Drawing::Point(614, 102);
			this->lblDuration->Name = L"lblDuration";
			this->lblDuration->Size = System::Drawing::Size(121, 20);
			this->lblDuration->TabIndex = 3;
			this->lblDuration->Text = L"Длительность";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(333, 275);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 4;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyForm1::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(414, 275);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 5;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &MyForm1::btnCancel_Click);
			// 
			// tbSong
			// 
			this->tbSong->Location = System::Drawing::Point(248, 206);
			this->tbSong->Name = L"tbSong";
			this->tbSong->Size = System::Drawing::Size(100, 20);
			this->tbSong->TabIndex = 6;
			// 
			// tbExecutor
			// 
			this->tbExecutor->Location = System::Drawing::Point(423, 206);
			this->tbExecutor->Name = L"tbExecutor";
			this->tbExecutor->Size = System::Drawing::Size(100, 20);
			this->tbExecutor->TabIndex = 7;
			// 
			// tbDuration
			// 
			this->tbDuration->Location = System::Drawing::Point(618, 207);
			this->tbDuration->Name = L"tbDuration";
			this->tbDuration->Size = System::Drawing::Size(100, 20);
			this->tbDuration->TabIndex = 8;
			// 
			// cbStyle
			// 
			this->cbStyle->FormattingEnabled = true;
			this->cbStyle->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Рок", L"Шансон", L"Классика", L"Инди", L"Реп",
					L"Хип-хоп", L"Металл", L"Поп"
			});
			this->cbStyle->Location = System::Drawing::Point(72, 206);
			this->cbStyle->Name = L"cbStyle";
			this->cbStyle->Size = System::Drawing::Size(121, 21);
			this->cbStyle->TabIndex = 9;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 507);
			this->Controls->Add(this->cbStyle);
			this->Controls->Add(this->tbDuration);
			this->Controls->Add(this->tbExecutor);
			this->Controls->Add(this->tbSong);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->lblDuration);
			this->Controls->Add(this->lblSong);
			this->Controls->Add(this->lblExecutor);
			this->Controls->Add(this->lblStyle);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = Windows::Forms::DialogResult::OK;
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DialogResult = Windows::Forms::DialogResult::Cancel;
}
	public: String^ getSong() {
		return tbSong->Text;
	}
	public: String^ getExecutor() {
		return tbExecutor->Text;
	}
	public: String^ getDuration() {
		return tbDuration->Text;
	}
	public: String^ getStyle() {
		return cbStyle->Text;
	}
		  public:
			  void setStyle(String^ msg) {
				  cbStyle->Text = msg;
			  }
			  void setSong(String^ msg) {
				  tbSong->Text = msg;
			  }
			  void setExecutor(String^ msg) {
				  tbExecutor->Text = msg;
			  }
			  void setDuration(String^ msg) {
				  tbDuration->Text = msg;
			  }	
};
}
