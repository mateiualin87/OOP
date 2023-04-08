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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ unu;
	private: System::Windows::Forms::Button^ patru;
	private: System::Windows::Forms::Button^ sapte;

	private: System::Windows::Forms::Button^ cinci;
	private: System::Windows::Forms::Button^ opt;
	private: System::Windows::Forms::Button^ trei;
	private: System::Windows::Forms::Button^ sase;







	private: System::Windows::Forms::Button^ zero;


	private: System::Windows::Forms::Button^ adunare;
	private: System::Windows::Forms::Button^ inmultire;
	private: System::Windows::Forms::Button^ scadere;
	private: System::Windows::Forms::Button^ impartire;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ noua;
	private: System::Windows::Forms::Button^ doi;
	private: System::Windows::Forms::Button^ virgula;
	private: System::Windows::Forms::Button^ egal;








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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->unu = (gcnew System::Windows::Forms::Button());
			this->patru = (gcnew System::Windows::Forms::Button());
			this->sapte = (gcnew System::Windows::Forms::Button());
			this->cinci = (gcnew System::Windows::Forms::Button());
			this->opt = (gcnew System::Windows::Forms::Button());
			this->trei = (gcnew System::Windows::Forms::Button());
			this->sase = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->inmultire = (gcnew System::Windows::Forms::Button());
			this->scadere = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->noua = (gcnew System::Windows::Forms::Button());
			this->doi = (gcnew System::Windows::Forms::Button());
			this->virgula = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 73);
			this->textBox1->TabIndex = 0;
			// 
			// unu
			// 
			this->unu->Location = System::Drawing::Point(12, 91);
			this->unu->Name = L"unu";
			this->unu->Size = System::Drawing::Size(49, 39);
			this->unu->TabIndex = 1;
			this->unu->Text = L"1";
			this->unu->UseVisualStyleBackColor = true;
			this->unu->Click += gcnew System::EventHandler(this, &Form1::unu_Click);
			// 
			// patru
			// 
			this->patru->Location = System::Drawing::Point(13, 136);
			this->patru->Name = L"patru";
			this->patru->Size = System::Drawing::Size(48, 39);
			this->patru->TabIndex = 2;
			this->patru->Text = L"4";
			this->patru->UseVisualStyleBackColor = true;
			this->patru->Click += gcnew System::EventHandler(this, &Form1::patru_Click);
			// 
			// sapte
			// 
			this->sapte->Location = System::Drawing::Point(13, 181);
			this->sapte->Name = L"sapte";
			this->sapte->Size = System::Drawing::Size(48, 40);
			this->sapte->TabIndex = 3;
			this->sapte->Text = L"7";
			this->sapte->UseVisualStyleBackColor = true;
			this->sapte->Click += gcnew System::EventHandler(this, &Form1::sapte_Click);
			// 
			// cinci
			// 
			this->cinci->Location = System::Drawing::Point(68, 137);
			this->cinci->Name = L"cinci";
			this->cinci->Size = System::Drawing::Size(50, 38);
			this->cinci->TabIndex = 5;
			this->cinci->Text = L"5";
			this->cinci->UseVisualStyleBackColor = true;
			this->cinci->Click += gcnew System::EventHandler(this, &Form1::cinci_Click);
			// 
			// opt
			// 
			this->opt->Location = System::Drawing::Point(68, 182);
			this->opt->Name = L"opt";
			this->opt->Size = System::Drawing::Size(50, 39);
			this->opt->TabIndex = 6;
			this->opt->Text = L"8";
			this->opt->UseVisualStyleBackColor = true;
			this->opt->Click += gcnew System::EventHandler(this, &Form1::opt_Click);
			// 
			// trei
			// 
			this->trei->Location = System::Drawing::Point(125, 93);
			this->trei->Name = L"trei";
			this->trei->Size = System::Drawing::Size(51, 38);
			this->trei->TabIndex = 7;
			this->trei->Text = L"3";
			this->trei->UseVisualStyleBackColor = true;
			this->trei->Click += gcnew System::EventHandler(this, &Form1::trei_Click);
			// 
			// sase
			// 
			this->sase->Location = System::Drawing::Point(125, 137);
			this->sase->Name = L"sase";
			this->sase->Size = System::Drawing::Size(51, 38);
			this->sase->TabIndex = 8;
			this->sase->Text = L"6";
			this->sase->UseVisualStyleBackColor = true;
			this->sase->Click += gcnew System::EventHandler(this, &Form1::sase_Click);
			// 
			// zero
			// 
			this->zero->Location = System::Drawing::Point(13, 228);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(48, 34);
			this->zero->TabIndex = 10;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
			// 
			// adunare
			// 
			this->adunare->BackColor = System::Drawing::Color::DarkOrange;
			this->adunare->Location = System::Drawing::Point(183, 93);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(46, 37);
			this->adunare->TabIndex = 13;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = false;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
			// 
			// inmultire
			// 
			this->inmultire->BackColor = System::Drawing::Color::DarkOrange;
			this->inmultire->Location = System::Drawing::Point(183, 137);
			this->inmultire->Name = L"inmultire";
			this->inmultire->Size = System::Drawing::Size(46, 38);
			this->inmultire->TabIndex = 14;
			this->inmultire->Text = L"x";
			this->inmultire->UseVisualStyleBackColor = false;
			this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
			// 
			// scadere
			// 
			this->scadere->BackColor = System::Drawing::Color::DarkOrange;
			this->scadere->Location = System::Drawing::Point(183, 182);
			this->scadere->Name = L"scadere";
			this->scadere->Size = System::Drawing::Size(46, 39);
			this->scadere->TabIndex = 15;
			this->scadere->Text = L"-";
			this->scadere->UseVisualStyleBackColor = false;
			this->scadere->Click += gcnew System::EventHandler(this, &Form1::scadere_Click);
			// 
			// impartire
			// 
			this->impartire->BackColor = System::Drawing::Color::DarkOrange;
			this->impartire->Location = System::Drawing::Point(183, 228);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(46, 34);
			this->impartire->TabIndex = 16;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = false;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::DarkOrange;
			this->clear->Location = System::Drawing::Point(12, 269);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(217, 30);
			this->clear->TabIndex = 17;
			this->clear->Text = L"CLEAR";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &Form1::clear_Click);
			// 
			// noua
			// 
			this->noua->Location = System::Drawing::Point(125, 182);
			this->noua->Name = L"noua";
			this->noua->Size = System::Drawing::Size(51, 39);
			this->noua->TabIndex = 18;
			this->noua->Text = L"9";
			this->noua->UseVisualStyleBackColor = true;
			this->noua->Click += gcnew System::EventHandler(this, &Form1::noua_Click);
			// 
			// doi
			// 
			this->doi->Location = System::Drawing::Point(68, 93);
			this->doi->Name = L"doi";
			this->doi->Size = System::Drawing::Size(50, 37);
			this->doi->TabIndex = 19;
			this->doi->Text = L"2";
			this->doi->UseVisualStyleBackColor = true;
			this->doi->Click += gcnew System::EventHandler(this, &Form1::doi_Click);
			// 
			// virgula
			// 
			this->virgula->Location = System::Drawing::Point(68, 228);
			this->virgula->Name = L"virgula";
			this->virgula->Size = System::Drawing::Size(51, 34);
			this->virgula->TabIndex = 20;
			this->virgula->Text = L".";
			this->virgula->UseVisualStyleBackColor = true;
			this->virgula->Click += gcnew System::EventHandler(this, &Form1::virgula_Click);
			// 
			// egal
			// 
			this->egal->Location = System::Drawing::Point(125, 228);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(51, 34);
			this->egal->TabIndex = 21;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = true;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(247, 314);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->virgula);
			this->Controls->Add(this->doi);
			this->Controls->Add(this->noua);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->scadere);
			this->Controls->Add(this->inmultire);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->sase);
			this->Controls->Add(this->trei);
			this->Controls->Add(this->opt);
			this->Controls->Add(this->cinci);
			this->Controls->Add(this->sapte);
			this->Controls->Add(this->patru);
			this->Controls->Add(this->unu);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}


private: System::Void unu_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "1";
}
private: System::Void doi_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "2";
}
private: System::Void trei_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "3";
}
private: System::Void patru_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "4";
}
private: System::Void cinci_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "5";
}
private: System::Void sase_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "6";
}
private: System::Void sapte_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "7";
}
private: System::Void opt_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "8";
}
private: System::Void noua_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "9";
}
private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "0";
}


	private:double primulNumar = 0;
	private:double alDoileaNumar = 0;
	private: String^ operation = "";


private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primulNumar = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		operation = "+";
		textBox1->Text = "";
	}

}
private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primulNumar = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		operation = "*";
		textBox1->Text = "";
	}

}
private: System::Void scadere_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primulNumar = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		operation = "-";
		textBox1->Text = "";
	}

}
private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		primulNumar = Double::Parse(textBox1->Text);
		textBox1->Text = "";
		operation = "/";
		textBox1->Text = "";
	}
}
private: System::Void virgula_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += ".";
}

private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		alDoileaNumar = Double::Parse(textBox1->Text);
		if (operation == "+") {
			textBox1->Text = (primulNumar + alDoileaNumar).ToString();
		}
		else if (operation == "-") {
			textBox1->Text = (primulNumar - alDoileaNumar).ToString();
		}
		else if (operation == "*") {
			textBox1->Text = (primulNumar * alDoileaNumar).ToString();
		}
		else if (operation == "/") {
			if (alDoileaNumar != 0) {
				textBox1->Text = (primulNumar / alDoileaNumar).ToString();
			}
			else {
				textBox1->Text = "Error: Cannot divide to zero!";
			}
		}

	}
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
}
};
}
