#pragma once
#include <string>
#include "LinkedList.h"
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <fstream>

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
	private:
	LinkedList picture_list;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
			 int current_position = 0;
			 int next_clicks = 0;

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

	protected:






	private: System::Windows::Forms::Button^  previous_button;
	private: System::Windows::Forms::Button^  next_button;


	private: System::Windows::Forms::Button^  remove_button;
	private: System::Windows::Forms::Button^  add_button;


	private: System::Windows::Forms::PictureBox^  left_pic;
	private: System::Windows::Forms::PictureBox^  right_pic;
	private: System::Windows::Forms::PictureBox^  center_pic;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


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
			this->previous_button = (gcnew System::Windows::Forms::Button());
			this->next_button = (gcnew System::Windows::Forms::Button());
			this->remove_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->left_pic = (gcnew System::Windows::Forms::PictureBox());
			this->right_pic = (gcnew System::Windows::Forms::PictureBox());
			this->center_pic = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->center_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// previous_button
			// 
			this->previous_button->Location = System::Drawing::Point(124, 337);
			this->previous_button->Name = L"previous_button";
			this->previous_button->Size = System::Drawing::Size(75, 23);
			this->previous_button->TabIndex = 5;
			this->previous_button->Text = L"Previous";
			this->previous_button->UseVisualStyleBackColor = true;
			this->previous_button->Click += gcnew System::EventHandler(this, &MyForm::previous_button_Click);
			// 
			// next_button
			// 
			this->next_button->Location = System::Drawing::Point(518, 337);
			this->next_button->Name = L"next_button";
			this->next_button->Size = System::Drawing::Size(75, 23);
			this->next_button->TabIndex = 6;
			this->next_button->Text = L"Next";
			this->next_button->UseVisualStyleBackColor = true;
			this->next_button->Click += gcnew System::EventHandler(this, &MyForm::next_button_Click);
			// 
			// remove_button
			// 
			this->remove_button->Location = System::Drawing::Point(255, 337);
			this->remove_button->Name = L"remove_button";
			this->remove_button->Size = System::Drawing::Size(75, 23);
			this->remove_button->TabIndex = 7;
			this->remove_button->Text = L"Remove";
			this->remove_button->UseVisualStyleBackColor = true;
			this->remove_button->Click += gcnew System::EventHandler(this, &MyForm::remove_button_Click);
			// 
			// add_button
			// 
			this->add_button->Location = System::Drawing::Point(381, 337);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(75, 23);
			this->add_button->TabIndex = 8;
			this->add_button->Text = L"Add";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MyForm::add_button_Click);
			// 
			// left_pic
			// 
			this->left_pic->Location = System::Drawing::Point(107, 119);
			this->left_pic->Name = L"left_pic";
			this->left_pic->Size = System::Drawing::Size(102, 88);
			this->left_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left_pic->TabIndex = 9;
			this->left_pic->TabStop = false;
			// 
			// right_pic
			// 
			this->right_pic->Location = System::Drawing::Point(504, 119);
			this->right_pic->Name = L"right_pic";
			this->right_pic->Size = System::Drawing::Size(102, 88);
			this->right_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right_pic->TabIndex = 10;
			this->right_pic->TabStop = false;
			// 
			// center_pic
			// 
			this->center_pic->Location = System::Drawing::Point(255, 82);
			this->center_pic->Name = L"center_pic";
			this->center_pic->Size = System::Drawing::Size(201, 202);
			this->center_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->center_pic->TabIndex = 11;
			this->center_pic->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 379);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(468, 126);
			this->textBox1->TabIndex = 12;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(28, 379);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 17);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"Check list";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(701, 556);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->center_pic);
			this->Controls->Add(this->right_pic);
			this->Controls->Add(this->left_pic);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->remove_button);
			this->Controls->Add(this->next_button);
			this->Controls->Add(this->previous_button);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
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



private: System::Void add_button_Click(System::Object^  sender, System::EventArgs^  e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
		return;
	/*picture_list.insert(current_position, s2s(this->openFileDialog1->FileName));
	left_pic->ImageLocation = center_pic->ImageLocation;
	center_pic->ImageLocation = right_pic->ImageLocation;
	right_pic->ImageLocation = s2s(picture_list.get(current_position));*/

	picture_list.insert(current_position, s2s(this->openFileDialog1->FileName));
	current_position = (picture_list.size()) + 1;
	right_pic->ImageLocation = center_pic->ImageLocation;
	center_pic->ImageLocation = s2s(picture_list.get(current_position));
	
	
}
private: System::Void next_button_Click(System::Object^  sender, System::EventArgs^  e) {
	next_clicks++;
	left_pic->ImageLocation = center_pic->ImageLocation;
	center_pic->ImageLocation = right_pic->ImageLocation;
	right_pic->ImageLocation = s2s(picture_list.get(current_position - (next_clicks+3)));

}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	textBox1->Text = s2s(picture_list.printPictures());
}
private: System::Void remove_button_Click(System::Object^  sender, System::EventArgs^  e) {
	//left_pic->ImageLocation = center_pic->ImageLocation;
	picture_list.remove(current_position);
	center_pic->ImageLocation = right_pic->ImageLocation;
	right_pic->ImageLocation = s2s(picture_list.get(current_position));
	
}
private: System::Void previous_button_Click(System::Object^  sender, System::EventArgs^  e) {
	current_position--; 
	right_pic->ImageLocation = center_pic->ImageLocation;
	center_pic->ImageLocation = left_pic->ImageLocation;
	left_pic->ImageLocation = s2s(picture_list.get(current_position));
}
};
}
