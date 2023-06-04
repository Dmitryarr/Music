#pragma once
#include"MyForm1.h"
#include <fstream>
#include <iostream>
#include <locale>
#include <Windows.h>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <cctype>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
			mfl = gcnew MyForm1();
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvMusic;
	private: System::Windows::Forms::Button^ btnAppend;
	private: System::Windows::Forms::Button^ btnDeleteAt;

	private: System::Windows::Forms::Button^ btnSearch;
	protected:

	protected:


	private: System::Windows::Forms::Button^ btnSort;
	private: System::Windows::Forms::Button^ btnAddat;
	private: System::Windows::Forms::TextBox^ tbSearch;



	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnChange;



	private: System::Windows::Forms::Button^ btnDeleteEnd;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ btnAddSong;
	private: System::Windows::Forms::Button^ btnAddatSong;




	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		/// 
		void InitializeComponent(void) {
			this->dgvMusic = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAppend = (gcnew System::Windows::Forms::Button());
			this->btnDeleteAt = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnSort = (gcnew System::Windows::Forms::Button());
			this->btnAddat = (gcnew System::Windows::Forms::Button());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnChange = (gcnew System::Windows::Forms::Button());
			this->btnDeleteEnd = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btnAddSong = (gcnew System::Windows::Forms::Button());
			this->btnAddatSong = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMusic))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvMusic
			// 
			this->dgvMusic->AllowUserToAddRows = false;
			this->dgvMusic->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMusic->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1, this->Column3,
					this->Column2, this->Column4
			});
			this->dgvMusic->Location = System::Drawing::Point(12, 39);
			this->dgvMusic->Name = L"dgvMusic";
			this->dgvMusic->RowHeadersWidth = 51;
			this->dgvMusic->Size = System::Drawing::Size(716, 301);
			this->dgvMusic->TabIndex = 8;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Æàíð";
			this->Column1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Ðîê", L"Øàíñîí", L"Êëàññèêà", L"Èíäè", L"Ðåï",
					L"Õèï-õîï", L"Ìåòàëë", L"Ïîï"
			});
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column1->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Ïåñíè";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Èñïîëíèòåëü";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Äëèòåëüíîñòü";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// btnAppend
			// 
			this->btnAppend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAppend->Location = System::Drawing::Point(734, 12);
			this->btnAppend->Name = L"btnAppend";
			this->btnAppend->Size = System::Drawing::Size(157, 56);
			this->btnAppend->TabIndex = 0;
			this->btnAppend->Text = L"+";
			this->btnAppend->UseVisualStyleBackColor = true;
			this->btnAppend->Click += gcnew System::EventHandler(this, &MyForm::btnAppend_Click);
			// 
			// btnDeleteAt
			// 
			this->btnDeleteAt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDeleteAt->Location = System::Drawing::Point(734, 169);
			this->btnDeleteAt->Name = L"btnDeleteAt";
			this->btnDeleteAt->Size = System::Drawing::Size(157, 57);
			this->btnDeleteAt->TabIndex = 1;
			this->btnDeleteAt->Text = L"Óäàëèòü âûäåëåííîå";
			this->btnDeleteAt->UseVisualStyleBackColor = true;
			this->btnDeleteAt->Click += gcnew System::EventHandler(this, &MyForm::btnDeleteAt_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSearch->Location = System::Drawing::Point(734, 346);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(157, 74);
			this->btnSearch->TabIndex = 2;
			this->btnSearch->Text = L"Íàéòè ïî èñïîëíèòåëþ";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// btnSort
			// 
			this->btnSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSort->Location = System::Drawing::Point(571, 391);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(157, 80);
			this->btnSort->TabIndex = 3;
			this->btnSort->Text = L"Ñîðòèðîâêà ïî äëèòåëüíîñòè";
			this->btnSort->UseVisualStyleBackColor = true;
			this->btnSort->Click += gcnew System::EventHandler(this, &MyForm::btnSort_Click);
			// 
			// btnAddat
			// 
			this->btnAddat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddat->Location = System::Drawing::Point(734, 74);
			this->btnAddat->Name = L"btnAddat";
			this->btnAddat->Size = System::Drawing::Size(157, 89);
			this->btnAddat->TabIndex = 4;
			this->btnAddat->Text = L"Âñòàâèòü ïåðåä âûäåëåííûì";
			this->btnAddat->UseVisualStyleBackColor = true;
			this->btnAddat->Click += gcnew System::EventHandler(this, &MyForm::btnAddat_Click);
			// 
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbSearch->Location = System::Drawing::Point(598, 346);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(130, 29);
			this->tbSearch->TabIndex = 5;
			this->tbSearch->Text = L"Íàéòè";
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClear->Location = System::Drawing::Point(734, 295);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(157, 45);
			this->btnClear->TabIndex = 6;
			this->btnClear->Text = L"Î÷èñòêà";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnChange
			// 
			this->btnChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnChange->Location = System::Drawing::Point(734, 426);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(157, 45);
			this->btnChange->TabIndex = 7;
			this->btnChange->Text = L"Ðåäàêòèðîâàòü";
			this->btnChange->UseVisualStyleBackColor = true;
			this->btnChange->Click += gcnew System::EventHandler(this, &MyForm::btnChange_Click);
			// 
			// btnDeleteEnd
			// 
			this->btnDeleteEnd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDeleteEnd->Location = System::Drawing::Point(734, 232);
			this->btnDeleteEnd->Name = L"btnDeleteEnd";
			this->btnDeleteEnd->Size = System::Drawing::Size(157, 57);
			this->btnDeleteEnd->TabIndex = 9;
			this->btnDeleteEnd->Text = L"-";
			this->btnDeleteEnd->UseVisualStyleBackColor = true;
			this->btnDeleteEnd->Click += gcnew System::EventHandler(this, &MyForm::btnDeleteEnd_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(933, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñîõðàíèòüToolStripMenuItem,
					this->ñîõðàíèòüÊàêToolStripMenuItem, this->îòêðûòüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"ôàéë";
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"ñîõðàíèòü";
			this->ñîõðàíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõðàíèòüToolStripMenuItem_Click);
			// 
			// ñîõðàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõðàíèòüÊàêToolStripMenuItem->Name = L"ñîõðàíèòüÊàêToolStripMenuItem";
			this->ñîõðàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ñîõðàíèòüÊàêToolStripMenuItem->Text = L"ñîõðàíèòü êàê";
			this->ñîõðàíèòüÊàêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõðàíèòüÊàêToolStripMenuItem_Click);
			// 
			// îòêðûòüToolStripMenuItem
			// 
			this->îòêðûòüToolStripMenuItem->Name = L"îòêðûòüToolStripMenuItem";
			this->îòêðûòüToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->îòêðûòüToolStripMenuItem->Text = L"îòêðûòü";
			this->îòêðûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îòêðûòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->âûõîäToolStripMenuItem->Text = L"âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// btnAddSong
			// 
			this->btnAddSong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddSong->Location = System::Drawing::Point(408, 391);
			this->btnAddSong->Name = L"btnAddSong";
			this->btnAddSong->Size = System::Drawing::Size(157, 40);
			this->btnAddSong->TabIndex = 11;
			this->btnAddSong->Text = L"Äîáàâèòü";
			this->btnAddSong->UseVisualStyleBackColor = true;
			this->btnAddSong->Click += gcnew System::EventHandler(this, &MyForm::btnAddSong_Click);
			// 
			// btnAddatSong
			// 
			this->btnAddatSong->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddatSong->Location = System::Drawing::Point(408, 437);
			this->btnAddatSong->Name = L"btnAddatSong";
			this->btnAddatSong->Size = System::Drawing::Size(157, 34);
			this->btnAddatSong->TabIndex = 12;
			this->btnAddatSong->Text = L"Âñòàâèòü";
			this->btnAddatSong->UseVisualStyleBackColor = true;
			this->btnAddatSong->Click += gcnew System::EventHandler(this, &MyForm::btnAddatSong_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(933, 577);
			this->Controls->Add(this->btnAddatSong);
			this->Controls->Add(this->btnAddSong);
			this->Controls->Add(this->btnDeleteEnd);
			this->Controls->Add(this->dgvMusic);
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->btnAddat);
			this->Controls->Add(this->btnSort);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->btnDeleteAt);
			this->Controls->Add(this->btnAppend);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMusic))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MyForm1^ mfl;
		bool save, open = false;
	private: System::Void btnAppend_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvMusic->RowCount++;
	}
	private: System::Void btnDeleteEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvMusic->RowCount == 0)
			return;
		dgvMusic->RowCount--;
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
		while (dgvMusic->RowCount > 0)
			dgvMusic->RowCount--;
	}
	private: System::Void btnAddat_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvMusic->RowCount == 0)
			return;
		/*if (dgvMusic->CurrentCell->RowIndex == -1)
			return;*/
		int count = dgvMusic->CurrentCell->RowIndex;
		dgvMusic->RowCount++;
		for (int j = dgvMusic->RowCount - 1; j > count; j--) {
			for (int i = 0; i < 4; i++) {
				dgvMusic->Rows[j]->Cells[i]->Value = dgvMusic->Rows[j - 1]->Cells[i]->Value;
			}
		}
		for (int i = 0; i < 4; i++) {
			dgvMusic->Rows[count]->Cells[i]->Value = "";
		}
	}

	private: System::Void btnDeleteAt_Click(System::Object^ sender, System::EventArgs^ e) {
		while (dgvMusic->SelectedRows->Count > 0)
			dgvMusic->Rows->RemoveAt(dgvMusic->SelectedRows[0]->Index);
		//////////////////////////////////////////////////////////////////////////
	/*	int count1 = dgvMusic->SelectedRows->Count;
		int n = dgvMusic->RowCount;
		for (int j = count1 - 1; j >= 0 ; j--) {
			for (int i = 0; i < 4; i++) {
				dgvMusic->SelectedRows[j]->Cells[i]->Value = "";
			}
		}
		for (int i = 0; i < 4; i++) {
			while (Convert::ToString(dgvMusic->Rows[dgvMusic->RowCount - 2]->Cells[i]->Value) == "" && dgvMusic->RowCount > 1) {
				dgvMusic->RowCount--;
			}
		}
		int del = 0;
		int n1 = dgvMusic->RowCount;
		for (int j = n1 - 1, k; j >= 0; j--) {
			for (int i = 0; i < 4; i++) {
				if (dgvMusic->Rows[j]->Cells[i]->Value == "") {
					for (k = j+1; k < n1-1; k++) {
						dgvMusic->Rows[k - 1]->Cells[i]->Value = dgvMusic->Rows[k]->Cells[i]->Value;
					}
					del++;
				}

			}
		}
		for (int i = 0; i < del/4; i++) {
				dgvMusic->RowCount--;
		}*/
	}
	private: System::Void btnSort_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvMusic->RowCount < 2)
			return;
		for (int j = dgvMusic->RowCount - 1, k; j >= 0; j--) {
			for (int i = 0; i < 4; i++) {
				if (dgvMusic->Rows[j]->Cells[i]->Value == "")
					return;
			}
		}
		for (int i = dgvMusic->RowCount - 1; i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (Convert::ToSingle(dgvMusic[3, j]->Value) < Convert::ToSingle(dgvMusic[3, j + 1]->Value)) {
				
				        //if (Convert::ToSingle(dgvMusic[3, j]->Value) == false || Convert::ToSingle(dgvMusic[3, j]->Value) < 0)
					//	return;
					//for (int k = 0; k < 3; k++) {
					//	String^ temp = Convert::ToString(dgvMusic[k, j]->Value);
					//	dgvMusic[k, j]->Value = dgvMusic[k, j + 1]->Value;
					//	dgvMusic[k, j + 1]->Value = temp;
					//}
					//Single^ temp = Convert::ToSingle(dgvMusic[3, j]->Value);
					//dgvMusic[3, j]->Value = dgvMusic[3, j + 1]->Value;
					//dgvMusic[3, j + 1]->Value = temp;
				
					if (Convert::ToSingle(dgvMusic[3, j]->Value) == false || Convert::ToSingle(dgvMusic[3, j]->Value) < 0)
						return;
					for (int k = 0; k < 4; k++) {
						String^ temp = Convert::ToString(dgvMusic[k, j]->Value);
						dgvMusic[k, j]->Value = dgvMusic[k, j + 1]->Value;
						dgvMusic[k, j + 1]->Value = temp;
					}
				}
			}
		}
	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvMusic->RowCount == 0)
			return;
		String^ nameone = tbSearch->Text;
		String^ s = "Èñïîëíèòåëü(è) ñ èìåíåì \"" + tbSearch->Text + "\": " + "\n";
		bool ok = false;
		for (int i = 0; i < dgvMusic->RowCount; i++) {
			if (dgvMusic[0, i]->Value != nullptr && dgvMusic[1, i]->Value != nullptr && dgvMusic[2, i]->Value != nullptr && dgvMusic[3, i]->Value != nullptr) {
				if (nameone == dgvMusic[2, i]->Value->ToString()) {
					s += i + ". " + dgvMusic[0, i]->Value->ToString()
						+ " " + dgvMusic[1, i]->Value->ToString()
						+ " " + dgvMusic[2, i]->Value->ToString()
						+ " " + dgvMusic[3, i]->Value->ToString() + "\n";
					ok = true;
				}
			}
		}
		if (ok == false)
			s = "Èñïîëíèòåëü ñ èìåíåì \"" + tbSearch->Text + "\" íå íàéäåí.";
		MessageBox::Show(s);
	}
	private: System::Void ñîõðàíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvMusic->RowCount == 0)
			return;
		int n1 = dgvMusic->RowCount;
		for (int j = 0; j < n1; j++) {
			for (int i = 0; i < 4; i++) {
				if (dgvMusic->Rows[j]->Cells[i]->Value == nullptr)
					return;
			}
		}
		String^ fileName;
		if (open == false && save == false) {
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				fileName = saveFileDialog1->FileName;
				IO::StreamWriter^ temp = gcnew IO::StreamWriter(fileName);
				for (int i = 0; i < dgvMusic->RowCount; i++) {
					for (int j = 0; j < 4; j++) {
						String^ s1 = "" + dgvMusic[j, i]->Value->ToString();
						temp->WriteLine(s1);
						temp->WriteLine("\n");
					}
				}
				temp->Close();
				return;
			}
		}
		
		
		if (open == true) {
			//if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				fileName = openFileDialog1->FileName;
				IO::StreamWriter^ sw = gcnew IO::StreamWriter(fileName);
				for (int i = 0; i < dgvMusic->RowCount; i++) {
					for (int j = 0; j < 4; j++) {
						String^ s1 = "" + dgvMusic[j, i]->Value->ToString();
						sw->WriteLine(s1);
						sw->WriteLine("\n");
					}
				}
				sw->Close();
				return;
			//}
		}
				
		if (save == true) {
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				fileName = openFileDialog1->FileName;
				IO::StreamWriter^ sw = gcnew IO::StreamWriter(fileName);
				for (int i = 0; i < dgvMusic->RowCount; i++) {
					for (int j = 0; j < 4; j++) {
						String^ s1 = "" + dgvMusic[j, i]->Value->ToString();
						sw->WriteLine(s1);
						sw->WriteLine("\n");
					}
				}
				sw->Close();
				return;
			}
		}
	}
private: System::Void ñîõðàíèòüÊàêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvMusic->RowCount == 0)
		return;
	int n1 = dgvMusic->RowCount;
	for (int j = 0; j < n1; j++) {
		for (int i = 0; i < 4; i++) {
			if (dgvMusic->Rows[j]->Cells[i]->Value == nullptr)
				return;
		}
	}
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = saveFileDialog1->FileName;
		IO::StreamWriter^ temp = gcnew IO::StreamWriter(fileName);
		for (int i = 0; i < dgvMusic->RowCount; i++) {
			for (int j = 0; j < 4; j++) {
				String^ s2 = "" + dgvMusic[j, i]->Value->ToString();
				temp->WriteLine(s2);
				temp->WriteLine("\n");
			}
		}
		temp->Close();
		save = true;
		open = false;
	}
}
private: System::Void îòêðûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ filename = openFileDialog1->FileName;
		IO::StreamReader^ temp = IO::File::OpenText(filename);
		String^ str;
		int i = 0, j = 0;
		int count = 0;
		dgvMusic->RowCount = 1;
		while ((str = temp->ReadLine()) != nullptr) {
			if (str == "")
				continue;
			dgvMusic[j, i]->Value = str;
			j++;
			count++;
			if (count == 4) {
				dgvMusic->RowCount++;
				i++;
				j = 0;
				count = 0;
			}
		}
		open = true;
		save = false;
		dgvMusic->RowCount--;
		temp->Close();
	}
}
	   void clearning() {
		   mfl->setStyle("");
		   mfl->setSong("");
		   mfl->setExecutor("");
		   mfl->setDuration("");
	   }

	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void btnAddSong_Click(System::Object^ sender, System::EventArgs^ e) {
		if (mfl->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			int n = dgvMusic->RowCount;
			dgvMusic->RowCount++;
			dgvMusic[0, n]->Value = mfl->getStyle();
			dgvMusic[1, n]->Value = mfl->getSong();
			dgvMusic[2, n]->Value = mfl->getExecutor();
			dgvMusic[3, n]->Value = mfl->getDuration();
		}
		clearning();
	}

	private: System::Void btnChange_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvMusic->RowCount == 0)
			return;
		int n = dgvMusic->CurrentCell->RowIndex;
		mfl->setStyle(System::Convert::ToString   (dgvMusic[0, n]->Value));
		mfl->setSong(System::Convert::ToString    (dgvMusic[1, n]->Value));
		mfl->setExecutor(System::Convert::ToString(dgvMusic[2, n]->Value));
		mfl->setDuration(System::Convert::ToString(dgvMusic[3, n]->Value));
		if (mfl->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			dgvMusic[0, n]->Value = mfl->getStyle();
			dgvMusic[1, n]->Value = mfl->getSong();
			dgvMusic[2, n]->Value = mfl->getExecutor();
			dgvMusic[3, n]->Value = mfl->getDuration();
		}
		clearning();
	}

	private: System::Void btnAddatSong_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvMusic->RowCount == 0)
			return;
		if (mfl->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			int n = dgvMusic->CurrentCell->RowIndex;
			dgvMusic->RowCount++;
			for (int i = dgvMusic->RowCount - 1; i > n; i--)
				for (int j = 0; j < 4; j++)
					dgvMusic[j, i]->Value = dgvMusic[j, i - 1]->Value;
			dgvMusic[0, n]->Value = mfl->getStyle();
			dgvMusic[1, n]->Value = mfl->getSong();
			dgvMusic[2, n]->Value = mfl->getExecutor();
			dgvMusic[3, n]->Value = mfl->getDuration();
		}
		clearning();
	}
};
}
