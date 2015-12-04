#pragma once
#include <string>
#include "LinkedList.h"

namespace GuiWithLinkedLists {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  previous_button;
	private: System::Windows::Forms::Button^  next_button;


	private: System::Windows::Forms::Button^  remove_button;
	private: System::Windows::Forms::Button^  add_button;


	private: System::Windows::Forms::PictureBox^  left_pic;
	private: System::Windows::Forms::PictureBox^  right_pic;
	private: System::Windows::Forms::PictureBox^  center_pic;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->previous_button = (gcnew System::Windows::Forms::Button());
			this->next_button = (gcnew System::Windows::Forms::Button());
			this->remove_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->left_pic = (gcnew System::Windows::Forms::PictureBox());
			this->right_pic = (gcnew System::Windows::Forms::PictureBox());
			this->center_pic = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->center_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Previous Picture";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(528, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Next Picture";
			// 
			// previous_button
			// 
			this->previous_button->Location = System::Drawing::Point(124, 337);
			this->previous_button->Name = L"previous_button";
			this->previous_button->Size = System::Drawing::Size(75, 23);
			this->previous_button->TabIndex = 5;
			this->previous_button->Text = L"Previous";
			this->previous_button->UseVisualStyleBackColor = true;
			// 
			// next_button
			// 
			this->next_button->Location = System::Drawing::Point(518, 337);
			this->next_button->Name = L"next_button";
			this->next_button->Size = System::Drawing::Size(75, 23);
			this->next_button->TabIndex = 6;
			this->next_button->Text = L"Next";
			this->next_button->UseVisualStyleBackColor = true;
			// 
			// remove_button
			// 
			this->remove_button->Location = System::Drawing::Point(255, 337);
			this->remove_button->Name = L"remove_button";
			this->remove_button->Size = System::Drawing::Size(75, 23);
			this->remove_button->TabIndex = 7;
			this->remove_button->Text = L"Remove";
			this->remove_button->UseVisualStyleBackColor = true;
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(381, 337);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(75, 23);
			this->add_button->TabIndex = 8;
			this->add_button->Text = L"Add";
			this->add_button->UseVisualStyleBackColor = true;
			// 
			// left_pic
			// 
			this->left_pic->Location = System::Drawing::Point(107, 119);
			this->left_pic->Name = L"left_pic";
			this->left_pic->Size = System::Drawing::Size(102, 88);
			this->left_pic->TabIndex = 9;
			this->left_pic->TabStop = false;
			// 
			// right_pic
			// 
			this->right_pic->Location = System::Drawing::Point(504, 119);
			this->right_pic->Name = L"right_pic";
			this->right_pic->Size = System::Drawing::Size(102, 88);
			this->right_pic->TabIndex = 10;
			this->right_pic->TabStop = false;
			// 
			// center_pic
			// 
			this->center_pic->Location = System::Drawing::Point(255, 82);
			this->center_pic->Name = L"center_pic";
			this->center_pic->Size = System::Drawing::Size(201, 202);
			this->center_pic->TabIndex = 11;
			this->center_pic->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(701, 461);
			this->Controls->Add(this->center_pic);
			this->Controls->Add(this->right_pic);
			this->Controls->Add(this->left_pic);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->remove_button);
			this->Controls->Add(this->next_button);
			this->Controls->Add(this->previous_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->center_pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
System::String^ s2s(std::string  str) 
{
	return gcnew System::String(str.c_str());
}


std::string s2s(System::String^ str) 
{
	return msclr::interop::marshal_as<std::string>(str);
}



};
}
