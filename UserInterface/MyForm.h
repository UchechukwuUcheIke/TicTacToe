#pragma once

namespace UserInterface {

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
	private: System::Windows::Forms::Panel^ Main;
	private: System::Windows::Forms::TableLayoutPanel^ GameModesLayout;
	private: System::Windows::Forms::Button^ PlaySoloButton;
	private: System::Windows::Forms::Button^ MultiplayerButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Main = (gcnew System::Windows::Forms::Panel());
			this->GameModesLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->PlaySoloButton = (gcnew System::Windows::Forms::Button());
			this->MultiplayerButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Main->SuspendLayout();
			this->GameModesLayout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Main
			// 
			this->Main->BackColor = System::Drawing::Color::Transparent;
			this->Main->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Main->Controls->Add(this->pictureBox1);
			this->Main->Location = System::Drawing::Point(267, 3);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(423, 424);
			this->Main->TabIndex = 0;
			// 
			// GameModesLayout
			// 
			this->GameModesLayout->BackColor = System::Drawing::Color::Transparent;
			this->GameModesLayout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->GameModesLayout->ColumnCount = 1;
			this->GameModesLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->GameModesLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->GameModesLayout->Controls->Add(this->PlaySoloButton, 0, 0);
			this->GameModesLayout->Controls->Add(this->MultiplayerButton, 0, 1);
			this->GameModesLayout->Location = System::Drawing::Point(267, 199);
			this->GameModesLayout->Name = L"GameModesLayout";
			this->GameModesLayout->Padding = System::Windows::Forms::Padding(10, 0, 10, 0);
			this->GameModesLayout->RowCount = 2;
			this->GameModesLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->GameModesLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->GameModesLayout->Size = System::Drawing::Size(423, 225);
			this->GameModesLayout->TabIndex = 0;
			// 
			// PlaySoloButton
			// 
			this->PlaySoloButton->BackColor = System::Drawing::Color::Transparent;
			this->PlaySoloButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlaySoloButton.BackgroundImage")));
			this->PlaySoloButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PlaySoloButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PlaySoloButton->FlatAppearance->BorderSize = 0;
			this->PlaySoloButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->PlaySoloButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->PlaySoloButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PlaySoloButton->ForeColor = System::Drawing::Color::Transparent;
			this->PlaySoloButton->Location = System::Drawing::Point(13, 3);
			this->PlaySoloButton->Name = L"PlaySoloButton";
			this->PlaySoloButton->Size = System::Drawing::Size(397, 106);
			this->PlaySoloButton->TabIndex = 0;
			this->PlaySoloButton->UseVisualStyleBackColor = false;
			this->PlaySoloButton->Click += gcnew System::EventHandler(this, &MyForm::PlaySoloButton_Click);
			// 
			// MultiplayerButton
			// 
			this->MultiplayerButton->BackColor = System::Drawing::Color::Transparent;
			this->MultiplayerButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MultiplayerButton.BackgroundImage")));
			this->MultiplayerButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->MultiplayerButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MultiplayerButton->FlatAppearance->BorderSize = 0;
			this->MultiplayerButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->MultiplayerButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->MultiplayerButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MultiplayerButton->Location = System::Drawing::Point(13, 115);
			this->MultiplayerButton->Name = L"MultiplayerButton";
			this->MultiplayerButton->Size = System::Drawing::Size(397, 107);
			this->MultiplayerButton->TabIndex = 1;
			this->MultiplayerButton->UseVisualStyleBackColor = false;
			this->MultiplayerButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(0, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(423, 84);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(923, 424);
			this->Controls->Add(this->GameModesLayout);
			this->Controls->Add(this->Main);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Main->ResumeLayout(false);
			this->GameModesLayout->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PlaySoloButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
