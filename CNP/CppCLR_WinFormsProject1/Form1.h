#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ afisaj_cnp;
	private: System::Windows::Forms::Button^ calculeaza_cnp;

	private: System::Windows::Forms::Button^ stergere;
	private: System::Windows::Forms::TextBox^ input_cnp;

	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->afisaj_cnp = (gcnew System::Windows::Forms::TextBox());
			this->calculeaza_cnp = (gcnew System::Windows::Forms::Button());
			this->stergere = (gcnew System::Windows::Forms::Button());
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// afisaj_cnp
			// 
			this->afisaj_cnp->Location = System::Drawing::Point(12, 293);
			this->afisaj_cnp->Multiline = true;
			this->afisaj_cnp->Name = L"afisaj_cnp";
			this->afisaj_cnp->Size = System::Drawing::Size(203, 93);
			this->afisaj_cnp->TabIndex = 1;
			// 
			// calculeaza_cnp
			// 
			this->calculeaza_cnp->Location = System::Drawing::Point(26, 159);
			this->calculeaza_cnp->Name = L"calculeaza_cnp";
			this->calculeaza_cnp->Size = System::Drawing::Size(134, 23);
			this->calculeaza_cnp->TabIndex = 2;
			this->calculeaza_cnp->Text = L"Calculeaza";
			this->calculeaza_cnp->UseVisualStyleBackColor = true;
			this->calculeaza_cnp->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// stergere
			// 
			this->stergere->Location = System::Drawing::Point(26, 218);
			this->stergere->Name = L"stergere";
			this->stergere->Size = System::Drawing::Size(134, 23);
			this->stergere->TabIndex = 3;
			this->stergere->Text = L"Sterge";
			this->stergere->UseVisualStyleBackColor = true;
			this->stergere->Click += gcnew System::EventHandler(this, &Form1::stergere_Click);
			// 
			// input_cnp
			// 
			this->input_cnp->Location = System::Drawing::Point(12, 12);
			this->input_cnp->Multiline = true;
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(189, 100);
			this->input_cnp->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 521);
			this->Controls->Add(this->input_cnp);
			this->Controls->Add(this->stergere);
			this->Controls->Add(this->calculeaza_cnp);
			this->Controls->Add(this->afisaj_cnp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void stergere_Click(System::Object^ sender, System::EventArgs^ e) {
		input_cnp->Clear();
		afisaj_cnp->Clear();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (input_cnp->Text->Length == 0) {
		MessageBox::Show("Introduceti Cnp-ul!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	else {
		//citim CNP
		String^ cnp = input_cnp->Text;

		//extragerea datelo din cnp
		//2800519016909

		int an = Int32::Parse(cnp->Substring(1, 2));
		int luna = Int32::Parse(cnp->Substring(3, 2));
		int zi = Int32::Parse(cnp->Substring(5, 2));

		//calc varsta

		DateTime azi = DateTime::Now;

		int century = 0;
		if (Int32::Parse(cnp->Substring(0, 1)) <= 2)
		{
			century = 1900;
		}
		else if (Int32::Parse(cnp->Substring(0, 1)) <= 4)
		{
			century = 1800;
		}
		else if (Int32::Parse(cnp->Substring(0, 1)) <= 6)
		{
			century = 2000;
		}
		else if (Int32::Parse(cnp->Substring(0, 1)) <= 8)
		{
			century = 1900;
		}
		int varsta = azi.Year - (century + an);

		//afisam datele in afisaj_cnp

		afisaj_cnp->Text = "Data nasterii: " + zi.ToString() + "/" + luna.ToString() + "/" + an.ToString() + "\r" +  "\n"  + "Varsta: " + varsta.ToString();

	}
}
};
}
