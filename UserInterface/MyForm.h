#pragma once
#include "TicTacToe.h"

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
	private: System::Windows::Forms::Panel^ MenuPanel;
	protected:

	private: System::Windows::Forms::TableLayoutPanel^ GameModesLayout;
	private: System::Windows::Forms::Button^ PlaySoloButton;
	private: System::Windows::Forms::Button^ MultiplayerButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ GamePanel;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::FlowLayoutPanel^ BoardPanel;
	private: System::Windows::Forms::Button^ Cell0;
	private: System::Windows::Forms::Button^ Cell1;
	private: System::Windows::Forms::Button^ Cell2;
	private: System::Windows::Forms::Button^ Cell3;
	private: System::Windows::Forms::Button^ Cell4;
	private: System::Windows::Forms::Button^ Cell5;
	private: System::Windows::Forms::Button^ Cell6;
	private: System::Windows::Forms::Button^ Cell7;
	private: System::Windows::Forms::Button^ Cell8;

	private 










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
			this->MenuPanel = (gcnew System::Windows::Forms::Panel());
			this->GameModesLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->PlaySoloButton = (gcnew System::Windows::Forms::Button());
			this->MultiplayerButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GamePanel = (gcnew System::Windows::Forms::Panel());
			this->BoardPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Cell0 = (gcnew System::Windows::Forms::Button());
			this->Cell1 = (gcnew System::Windows::Forms::Button());
			this->Cell2 = (gcnew System::Windows::Forms::Button());
			this->Cell3 = (gcnew System::Windows::Forms::Button());
			this->Cell4 = (gcnew System::Windows::Forms::Button());
			this->Cell5 = (gcnew System::Windows::Forms::Button());
			this->Cell6 = (gcnew System::Windows::Forms::Button());
			this->Cell7 = (gcnew System::Windows::Forms::Button());
			this->Cell8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->MenuPanel->SuspendLayout();
			this->GameModesLayout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->GamePanel->SuspendLayout();
			this->BoardPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// MenuPanel
			// 
			this->MenuPanel->BackColor = System::Drawing::Color::Transparent;
			this->MenuPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->MenuPanel->Controls->Add(this->GameModesLayout);
			this->MenuPanel->Controls->Add(this->pictureBox1);
			this->MenuPanel->Location = System::Drawing::Point(245, 1);
			this->MenuPanel->Name = L"MenuPanel";
			this->MenuPanel->Size = System::Drawing::Size(427, 424);
			this->MenuPanel->TabIndex = 0;
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
			this->GameModesLayout->Location = System::Drawing::Point(3, 199);
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
			// GamePanel
			// 
			this->GamePanel->Controls->Add(this->BoardPanel);
			this->GamePanel->Controls->Add(this->pictureBox2);
			this->GamePanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->GamePanel->Location = System::Drawing::Point(0, 0);
			this->GamePanel->Name = L"GamePanel";
			this->GamePanel->Size = System::Drawing::Size(923, 424);
			this->GamePanel->TabIndex = 1;
			this->GamePanel->VisibleChanged += gcnew System::EventHandler(this, &MyForm::OnGamePanelVisibilityChanged);
			// 
			// BoardPanel
			// 
			this->BoardPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BoardPanel.BackgroundImage")));
			this->BoardPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BoardPanel->Controls->Add(this->Cell0);
			this->BoardPanel->Controls->Add(this->Cell1);
			this->BoardPanel->Controls->Add(this->Cell2);
			this->BoardPanel->Controls->Add(this->Cell3);
			this->BoardPanel->Controls->Add(this->Cell4);
			this->BoardPanel->Controls->Add(this->Cell5);
			this->BoardPanel->Controls->Add(this->Cell6);
			this->BoardPanel->Controls->Add(this->Cell7);
			this->BoardPanel->Controls->Add(this->Cell8);
			this->BoardPanel->Location = System::Drawing::Point(303, 90);
			this->BoardPanel->Margin = System::Windows::Forms::Padding(0);
			this->BoardPanel->Name = L"BoardPanel";
			this->BoardPanel->Size = System::Drawing::Size(355, 332);
			this->BoardPanel->TabIndex = 1;
			// 
			// Cell0
			// 
			this->Cell0->BackColor = System::Drawing::Color::Transparent;
			this->Cell0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell0->FlatAppearance->BorderSize = 0;
			this->Cell0->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell0->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell0->Location = System::Drawing::Point(3, 3);
			this->Cell0->Name = L"Cell0";
			this->Cell0->Size = System::Drawing::Size(112, 105);
			this->Cell0->TabIndex = 0;
			this->Cell0->UseVisualStyleBackColor = false;
			// 
			// Cell1
			// 
			this->Cell1->BackColor = System::Drawing::Color::Transparent;
			this->Cell1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cell1.BackgroundImage")));
			this->Cell1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell1->FlatAppearance->BorderSize = 0;
			this->Cell1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell1->Location = System::Drawing::Point(121, 3);
			this->Cell1->Name = L"Cell1";
			this->Cell1->Size = System::Drawing::Size(112, 105);
			this->Cell1->TabIndex = 1;
			this->Cell1->UseVisualStyleBackColor = false;
			// 
			// Cell2
			// 
			this->Cell2->BackColor = System::Drawing::Color::Transparent;
			this->Cell2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell2->FlatAppearance->BorderSize = 0;
			this->Cell2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell2->Location = System::Drawing::Point(239, 3);
			this->Cell2->Name = L"Cell2";
			this->Cell2->Size = System::Drawing::Size(112, 105);
			this->Cell2->TabIndex = 2;
			this->Cell2->UseVisualStyleBackColor = false;
			// 
			// Cell3
			// 
			this->Cell3->BackColor = System::Drawing::Color::Transparent;
			this->Cell3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell3->FlatAppearance->BorderSize = 0;
			this->Cell3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell3->Location = System::Drawing::Point(3, 114);
			this->Cell3->Name = L"Cell3";
			this->Cell3->Size = System::Drawing::Size(112, 105);
			this->Cell3->TabIndex = 3;
			this->Cell3->UseVisualStyleBackColor = false;
			// 
			// Cell4
			// 
			this->Cell4->BackColor = System::Drawing::Color::Transparent;
			this->Cell4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell4->FlatAppearance->BorderSize = 0;
			this->Cell4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell4->Location = System::Drawing::Point(121, 114);
			this->Cell4->Name = L"Cell4";
			this->Cell4->Size = System::Drawing::Size(112, 105);
			this->Cell4->TabIndex = 4;
			this->Cell4->UseVisualStyleBackColor = false;
			this->Cell4->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// Cell5
			// 
			this->Cell5->BackColor = System::Drawing::Color::Transparent;
			this->Cell5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cell5.BackgroundImage")));
			this->Cell5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell5->FlatAppearance->BorderSize = 0;
			this->Cell5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell5->Location = System::Drawing::Point(239, 114);
			this->Cell5->Name = L"Cell5";
			this->Cell5->Size = System::Drawing::Size(112, 105);
			this->Cell5->TabIndex = 5;
			this->Cell5->UseVisualStyleBackColor = false;
			// 
			// Cell6
			// 
			this->Cell6->BackColor = System::Drawing::Color::Transparent;
			this->Cell6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell6->FlatAppearance->BorderSize = 0;
			this->Cell6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell6->Location = System::Drawing::Point(3, 225);
			this->Cell6->Name = L"Cell6";
			this->Cell6->Size = System::Drawing::Size(112, 105);
			this->Cell6->TabIndex = 6;
			this->Cell6->UseVisualStyleBackColor = false;
			// 
			// Cell7
			// 
			this->Cell7->BackColor = System::Drawing::Color::Transparent;
			this->Cell7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell7->FlatAppearance->BorderSize = 0;
			this->Cell7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell7->Location = System::Drawing::Point(121, 225);
			this->Cell7->Name = L"Cell7";
			this->Cell7->Size = System::Drawing::Size(112, 105);
			this->Cell7->TabIndex = 7;
			this->Cell7->UseVisualStyleBackColor = false;
			// 
			// Cell8
			// 
			this->Cell8->BackColor = System::Drawing::Color::Transparent;
			this->Cell8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Cell8->FlatAppearance->BorderSize = 0;
			this->Cell8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->Cell8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->Cell8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cell8->Location = System::Drawing::Point(239, 225);
			this->Cell8->Name = L"Cell8";
			this->Cell8->Size = System::Drawing::Size(112, 105);
			this->Cell8->TabIndex = 8;
			this->Cell8->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(174, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(581, 75);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(923, 424);
			this->Controls->Add(this->GamePanel);
			this->Controls->Add(this->MenuPanel);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MenuPanel->ResumeLayout(false);
			this->GameModesLayout->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->GamePanel->ResumeLayout(false);
			this->BoardPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OnGamePanelVisibilityChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void PlaySoloButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->MenuPanel->Visible = false;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
