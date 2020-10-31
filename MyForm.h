#pragma once
#include <string>
namespace Email {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Web;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace std;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			textBox_Password->PasswordChar = '*';
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox_Body;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox_Username;
	private: System::Windows::Forms::TextBox^ textBox_From;
	private: System::Windows::Forms::TextBox^ textBox_Password;
	private: System::Windows::Forms::TextBox^ textBox_To;
	private: System::Windows::Forms::TextBox^ textBox_Theme;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ restartToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ dt;
	private: System::Windows::Forms::Button^ button_welc;

	private: System::Windows::Forms::Label^ label_welc;





	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox_Body = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->textBox_From = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_To = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Theme = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dt = (gcnew System::Windows::Forms::Label());
			this->button_welc = (gcnew System::Windows::Forms::Button());
			this->label_welc = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox_Body
			// 
			resources->ApplyResources(this->richTextBox_Body, L"richTextBox_Body");
			this->richTextBox_Body->Name = L"richTextBox_Body";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// textBox_Username
			// 
			resources->ApplyResources(this->textBox_Username, L"textBox_Username");
			this->textBox_Username->Name = L"textBox_Username";
			// 
			// textBox_From
			// 
			resources->ApplyResources(this->textBox_From, L"textBox_From");
			this->textBox_From->Name = L"textBox_From";
			// 
			// textBox_Password
			// 
			resources->ApplyResources(this->textBox_Password, L"textBox_Password");
			this->textBox_Password->Name = L"textBox_Password";
			// 
			// textBox_To
			// 
			resources->ApplyResources(this->textBox_To, L"textBox_To");
			this->textBox_To->Name = L"textBox_To";
			// 
			// textBox_Theme
			// 
			resources->ApplyResources(this->textBox_Theme, L"textBox_Theme");
			this->textBox_Theme->Name = L"textBox_Theme";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->restartToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			// 
			// restartToolStripMenuItem
			// 
			this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
			resources->ApplyResources(this->restartToolStripMenuItem, L"restartToolStripMenuItem");
			this->restartToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::restartToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// dt
			// 
			resources->ApplyResources(this->dt, L"dt");
			this->dt->Name = L"dt";
			// 
			// button_welc
			// 
			resources->ApplyResources(this->button_welc, L"button_welc");
			this->button_welc->Name = L"button_welc";
			this->button_welc->UseVisualStyleBackColor = true;
			this->button_welc->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label_welc
			// 
			resources->ApplyResources(this->label_welc, L"label_welc");
			this->label_welc->BackColor = System::Drawing::Color::Gainsboro;
			this->label_welc->Name = L"label_welc";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Controls->Add(this->label_welc);
			this->Controls->Add(this->button_welc);
			this->Controls->Add(this->dt);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_Theme);
			this->Controls->Add(this->textBox_To);
			this->Controls->Add(this->textBox_Password);
			this->Controls->Add(this->textBox_From);
			this->Controls->Add(this->textBox_Username);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox_Body);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Send
		SmtpClient^ client = gcnew SmtpClient("smtp.mail.ru", 2525);
		try
		{
			client->Credentials = gcnew System::Net::NetworkCredential(textBox_Username->Text, textBox_Password->Text);
		}
		catch (...)
		{
			MessageBox::Show("Enter all information!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		client->EnableSsl = true;



		MailMessage^ mail = gcnew MailMessage(textBox_From->Text, textBox_To->Text, textBox_Theme->Text, richTextBox_Body->Text);




		client->Send(mail);
		Application::Restart;
		MessageBox::Show("Mail sent", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("This program written by Veremeychik Pavel", "About",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
	private: System::Void restartToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Restart();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{

		DateTime iDate = DateTime::Now;
		dt->Text = iDate.ToLongDateString();

		button_welc->Location = System::Drawing::Point(0, 24);
		button_welc->Size = System::Drawing::Size(634, 338);
		label_welc->Location = System::Drawing::Point(250, 219);
		label_welc->Size = System::Drawing::Size(144, 15);

	}


	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		DateTime datetime = DateTime::Now;
		this->dt->Text = datetime.ToLongDateString();


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button_welc->Visible = false;
		label_welc->Visible = false;
	}
	};
}
