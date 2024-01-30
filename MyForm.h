#pragma once

namespace LabWork3 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Int32 Count = 0;

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label_result;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_image1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label_animation1;

	private: System::Windows::Forms::Label^ label_image2;
	private: System::Windows::Forms::Label^ label_animation2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;





	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label_image1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label_animation1 = (gcnew System::Windows::Forms::Label());
			this->label_image2 = (gcnew System::Windows::Forms::Label());
			this->label_animation2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите массу в фунтах меньше 220:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(528, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Перевести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(25, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(231, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label_result
			// 
			this->label_result->AutoSize = true;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_result->Location = System::Drawing::Point(21, 103);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(564, 20);
			this->label_result->TabIndex = 3;
			this->label_result->Text = L"Здесь отобразится результат перевода массы из фунтов в килограммы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(429, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Результат перевода, отображенный на весах:";
			// 
			// label_image1
			// 
			this->label_image1->AutoSize = true;
			this->label_image1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_image1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_image1->Location = System::Drawing::Point(22, 186);
			this->label_image1->Name = L"label_image1";
			this->label_image1->Size = System::Drawing::Size(310, 20);
			this->label_image1->TabIndex = 5;
			this->label_image1->Text = L"Здесь отобразится изображение весов";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(21, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Анимация весов:";
			// 
			// label_animation1
			// 
			this->label_animation1->AutoSize = true;
			this->label_animation1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_animation1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_animation1->Location = System::Drawing::Point(21, 292);
			this->label_animation1->Name = L"label_animation1";
			this->label_animation1->Size = System::Drawing::Size(284, 20);
			this->label_animation1->TabIndex = 7;
			this->label_animation1->Text = L"Здесь отобразится анимация весов";
			// 
			// label_image2
			// 
			this->label_image2->AutoSize = true;
			this->label_image2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_image2->Location = System::Drawing::Point(23, 215);
			this->label_image2->Name = L"label_image2";
			this->label_image2->Size = System::Drawing::Size(58, 13);
			this->label_image2->TabIndex = 8;
			this->label_image2->Text = L"                 ";
			// 
			// label_animation2
			// 
			this->label_animation2->AutoSize = true;
			this->label_animation2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_animation2->Location = System::Drawing::Point(23, 322);
			this->label_animation2->Name = L"label_animation2";
			this->label_animation2->Size = System::Drawing::Size(109, 13);
			this->label_animation2->TabIndex = 9;
			this->label_animation2->Text = L"                                  ";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(515, 247);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 65);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Запуск анимации";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(707, 409);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label_animation2);
			this->Controls->Add(this->label_image2);
			this->Controls->Add(this->label_animation1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label_image1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Lab_Work_3";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			Double Mass_In_Lb = 0, Mass_In_Kg = 0;
			array<Int32>^ Result = gcnew array<Int32>(5);
			
			
			Mass_In_Lb = Convert::ToDouble(this->textBox1->Text);

			if (Mass_In_Lb > 220)
			{
				this->label_result->Text = L"Вы ввели массу, большую 220 фунтов. Попробуйте ещё раз.";
			}
			else
			{
				Mass_In_Kg = Mass_In_Lb * 0.453592;
				this->label_result->Text = Convert::ToString(Mass_In_Kg);

			if (Mass_In_Kg > 20)
			{
				Result[0] = Mass_In_Kg - 20;
				Result[1] = Mass_In_Kg - 10;
				Result[2] = Mass_In_Kg;
				Result[3] = Mass_In_Kg + 10;
				Result[4] = Mass_In_Kg + 20;
			}
			else
			{
				if (Mass_In_Kg > 10)
				{
					Result[0] = 90 + Mass_In_Kg;
					Result[1] = Mass_In_Kg - 10;
					Result[2] = Mass_In_Kg;
					Result[3] = Mass_In_Kg + 10;
					Result[4] = Mass_In_Kg + 20;
				}
				else
				{
					Result[0] = 90 + Mass_In_Kg;
					Result[1] = 100 + Mass_In_Kg;
					Result[2] = Mass_In_Kg;
					Result[3] = Mass_In_Kg + 10;
					Result[4] = Mass_In_Kg + 20;
				}
			}

			this->label_image1->Text = L"|____|____!____|____|";
			this->label_image2->Text = Convert::ToString(Result[0]) + (L"         ") + Convert::ToString(Result[1]) + (L"         ") + Convert::ToString(Result[2]) + (L"         ") + Convert::ToString(Result[3]) + (L"         ") + Convert::ToString(Result[4]);			
			}
		}

		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
		{
			this->label_animation1->Text = L"|____|____!____|____|";

			if (Count <= (Convert::ToDouble(this->label_result->Text)))
			{
				if (Count >= 2)
				{
					this->label_animation2->Text = Convert::ToString(Count - 2) + (L"         ") + Convert::ToString(Count - 1) + (L"         ") + Convert::ToString(Count) + (L"         ") + Convert::ToString(Count + 1) + (L"         ") + Convert::ToString(Count + 2);
				}
				else
				{
					if (Count >= 1)
					{
						this->label_animation2->Text = Convert::ToString(109) + (L"         ") + Convert::ToString(Count - 1) + (L"         ") + Convert::ToString(Count) + (L"         ") + Convert::ToString(Count + 1) + (L"         ") + Convert::ToString(Count + 2);
					}
					else
					{
						this->label_animation2->Text = Convert::ToString(108) + (L"         ") + Convert::ToString(109) + (L"         ") + Convert::ToString(Count) + (L"         ") + Convert::ToString(Count + 1) + (L"         ") + Convert::ToString(Count + 2);
					}
				}
			}
			Count++;
		}
	
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->label_animation2->Text = nullptr;
			Count = 0;

			timer1->Enabled = true;
			
		}

		private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
		{
			if ((e->KeyChar < 44 || e->KeyChar==45 || e->KeyChar==46 ||e->KeyChar==47 || e->KeyChar >57) && (e->KeyChar != '\b'))
			{
				e->Handled = true;
				return;
			}
		}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
