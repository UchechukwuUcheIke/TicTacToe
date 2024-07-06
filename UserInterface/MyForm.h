#pragma once
#include "Resource.h"
#include "../TicTacToe/Game.h"
#include <chrono>
#include <thread>

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
			this->game = new Game();
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
			delete game;
		}
	private: System::Windows::Forms::Panel^ MenuPanel;

	private: Game* game;
	//private: Bitmap oMark = Properties.Resources.OMark;
	protected:

	private: System::Windows::Forms::TableLayoutPanel^ GameModesLayout;
	private: System::Windows::Forms::Button^ PlaySoloButton;
	private: System::Windows::Forms::Button^ MultiplayerButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ GamePanel;
	private: System::Windows::Forms::PictureBox^ GameAnnouncement;

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
	private: System::Windows::Forms::Button^ OMark;
	private: System::Windows::Forms::Button^ XMark;
	private: System::Windows::Forms::PictureBox^ PlayerOsTurn;

	private: System::Windows::Forms::PictureBox^ PlayerXsTurn;
	private: System::Windows::Forms::PictureBox^ PlayerOHasWon;

	private: System::Windows::Forms::PictureBox^ PlayerXHasWon;
	private: System::Windows::Forms::Panel^ GameOverPanel;

	private: System::Windows::Forms::Button^ BackToMenuButton;

	private: System::Windows::Forms::Button^ PlayAgainButton;



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
			this->GameOverPanel = (gcnew System::Windows::Forms::Panel());
			this->BackToMenuButton = (gcnew System::Windows::Forms::Button());
			this->PlayAgainButton = (gcnew System::Windows::Forms::Button());
			this->PlayerOHasWon = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerXHasWon = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerOsTurn = (gcnew System::Windows::Forms::PictureBox());
			this->PlayerXsTurn = (gcnew System::Windows::Forms::PictureBox());
			this->OMark = (gcnew System::Windows::Forms::Button());
			this->XMark = (gcnew System::Windows::Forms::Button());
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
			this->GameAnnouncement = (gcnew System::Windows::Forms::PictureBox());
			this->MenuPanel->SuspendLayout();
			this->GameModesLayout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->GamePanel->SuspendLayout();
			this->GameOverPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerOHasWon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerXHasWon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerOsTurn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerXsTurn))->BeginInit();
			this->BoardPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GameAnnouncement))->BeginInit();
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
			this->MenuPanel->Size = System::Drawing::Size(430, 424);
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
			this->GamePanel->BackColor = System::Drawing::Color::Transparent;
			this->GamePanel->Controls->Add(this->GameOverPanel);
			this->GamePanel->Controls->Add(this->PlayerOHasWon);
			this->GamePanel->Controls->Add(this->PlayerXHasWon);
			this->GamePanel->Controls->Add(this->PlayerOsTurn);
			this->GamePanel->Controls->Add(this->PlayerXsTurn);
			this->GamePanel->Controls->Add(this->OMark);
			this->GamePanel->Controls->Add(this->XMark);
			this->GamePanel->Controls->Add(this->BoardPanel);
			this->GamePanel->Controls->Add(this->GameAnnouncement);
			this->GamePanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->GamePanel->Location = System::Drawing::Point(0, 0);
			this->GamePanel->Name = L"GamePanel";
			this->GamePanel->Size = System::Drawing::Size(923, 424);
			this->GamePanel->TabIndex = 1;
			this->GamePanel->Visible = false;
			this->GamePanel->VisibleChanged += gcnew System::EventHandler(this, &MyForm::OnGamePanelVisibilityChanged);
			this->GamePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::GamePanel_Paint);
			// 
			// GameOverPanel
			// 
			this->GameOverPanel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GameOverPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->GameOverPanel->Controls->Add(this->BackToMenuButton);
			this->GameOverPanel->Controls->Add(this->PlayAgainButton);
			this->GameOverPanel->Location = System::Drawing::Point(661, 144);
			this->GameOverPanel->Name = L"GameOverPanel";
			this->GameOverPanel->Size = System::Drawing::Size(260, 165);
			this->GameOverPanel->TabIndex = 2;
			this->GameOverPanel->Visible = false;
			// 
			// BackToMenuButton
			// 
			this->BackToMenuButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->BackToMenuButton->Location = System::Drawing::Point(0, 86);
			this->BackToMenuButton->Name = L"BackToMenuButton";
			this->BackToMenuButton->Size = System::Drawing::Size(256, 75);
			this->BackToMenuButton->TabIndex = 1;
			this->BackToMenuButton->Text = L"Back To Menu";
			this->BackToMenuButton->UseVisualStyleBackColor = true;
			this->BackToMenuButton->Click += gcnew System::EventHandler(this, &MyForm::BackToMenuButton_Click);
			// 
			// PlayAgainButton
			// 
			this->PlayAgainButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->PlayAgainButton->Location = System::Drawing::Point(0, 0);
			this->PlayAgainButton->Name = L"PlayAgainButton";
			this->PlayAgainButton->Size = System::Drawing::Size(256, 75);
			this->PlayAgainButton->TabIndex = 3;
			this->PlayAgainButton->Text = L"Play Again";
			this->PlayAgainButton->UseVisualStyleBackColor = true;
			this->PlayAgainButton->Click += gcnew System::EventHandler(this, &MyForm::PlayAgainButton_Click);
			// 
			// PlayerOHasWon
			// 
			this->PlayerOHasWon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerOHasWon.BackgroundImage")));
			this->PlayerOHasWon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PlayerOHasWon->Location = System::Drawing::Point(12, 137);
			this->PlayerOHasWon->Name = L"PlayerOHasWon";
			this->PlayerOHasWon->Size = System::Drawing::Size(212, 48);
			this->PlayerOHasWon->TabIndex = 7;
			this->PlayerOHasWon->TabStop = false;
			this->PlayerOHasWon->Visible = false;
			// 
			// PlayerXHasWon
			// 
			this->PlayerXHasWon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerXHasWon.BackgroundImage")));
			this->PlayerXHasWon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PlayerXHasWon->Location = System::Drawing::Point(12, 86);
			this->PlayerXHasWon->Name = L"PlayerXHasWon";
			this->PlayerXHasWon->Size = System::Drawing::Size(212, 46);
			this->PlayerXHasWon->TabIndex = 6;
			this->PlayerXHasWon->TabStop = false;
			this->PlayerXHasWon->Visible = false;
			// 
			// PlayerOsTurn
			// 
			this->PlayerOsTurn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerOsTurn.BackgroundImage")));
			this->PlayerOsTurn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PlayerOsTurn->Location = System::Drawing::Point(12, 245);
			this->PlayerOsTurn->Name = L"PlayerOsTurn";
			this->PlayerOsTurn->Size = System::Drawing::Size(212, 51);
			this->PlayerOsTurn->TabIndex = 5;
			this->PlayerOsTurn->TabStop = false;
			this->PlayerOsTurn->Visible = false;
			// 
			// PlayerXsTurn
			// 
			this->PlayerXsTurn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerXsTurn.BackgroundImage")));
			this->PlayerXsTurn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PlayerXsTurn->Location = System::Drawing::Point(12, 191);
			this->PlayerXsTurn->Name = L"PlayerXsTurn";
			this->PlayerXsTurn->Size = System::Drawing::Size(212, 48);
			this->PlayerXsTurn->TabIndex = 4;
			this->PlayerXsTurn->TabStop = false;
			this->PlayerXsTurn->Visible = false;
			this->PlayerXsTurn->Click += gcnew System::EventHandler(this, &MyForm::PlayerXsTurn_Click);
			// 
			// OMark
			// 
			this->OMark->BackColor = System::Drawing::Color::Transparent;
			this->OMark->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OMark.BackgroundImage")));
			this->OMark->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->OMark->Location = System::Drawing::Point(127, 302);
			this->OMark->Name = L"OMark";
			this->OMark->Size = System::Drawing::Size(75, 23);
			this->OMark->TabIndex = 3;
			this->OMark->UseVisualStyleBackColor = false;
			this->OMark->Visible = false;
			// 
			// XMark
			// 
			this->XMark->BackColor = System::Drawing::Color::Transparent;
			this->XMark->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"XMark.BackgroundImage")));
			this->XMark->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->XMark->Location = System::Drawing::Point(12, 302);
			this->XMark->Name = L"XMark";
			this->XMark->Size = System::Drawing::Size(75, 23);
			this->XMark->TabIndex = 2;
			this->XMark->UseVisualStyleBackColor = false;
			this->XMark->Visible = false;
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
			this->Cell0->Click += gcnew System::EventHandler(this, &MyForm::Cell0_Click);
			// 
			// Cell1
			// 
			this->Cell1->BackColor = System::Drawing::Color::Transparent;
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
			this->Cell1->Click += gcnew System::EventHandler(this, &MyForm::Cell1_Click);
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
			this->Cell2->Click += gcnew System::EventHandler(this, &MyForm::Cell2_Click);
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
			this->Cell3->Click += gcnew System::EventHandler(this, &MyForm::Cell3_Click);
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
			this->Cell4->Click += gcnew System::EventHandler(this, &MyForm::Cell4_Click);
			// 
			// Cell5
			// 
			this->Cell5->BackColor = System::Drawing::Color::Transparent;
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
			this->Cell5->Click += gcnew System::EventHandler(this, &MyForm::Cell5_Click);
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
			this->Cell6->Click += gcnew System::EventHandler(this, &MyForm::Cell6_Click);
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
			this->Cell7->Click += gcnew System::EventHandler(this, &MyForm::Cell7_Click);
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
			this->Cell8->Click += gcnew System::EventHandler(this, &MyForm::Cell8_Click);
			// 
			// GameAnnouncement
			// 
			this->GameAnnouncement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"GameAnnouncement.BackgroundImage")));
			this->GameAnnouncement->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->GameAnnouncement->Location = System::Drawing::Point(174, 5);
			this->GameAnnouncement->Name = L"GameAnnouncement";
			this->GameAnnouncement->Size = System::Drawing::Size(581, 75);
			this->GameAnnouncement->TabIndex = 0;
			this->GameAnnouncement->TabStop = false;
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
			this->GameOverPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerOHasWon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerXHasWon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerOsTurn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PlayerXsTurn))->EndInit();
			this->BoardPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GameAnnouncement))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UpdateGameState() {
		// Update the board
		//Board board = game->getBoard();
	}
	//Property Change Events
	private: System::Void OnGamePanelVisibilityChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->GamePanel->Visible == true) {
			this->game->resetGame();
			this->GamePanel->Enabled = true;
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}

	//Click Events

	private: System::Void PlaySoloButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->MenuPanel->Visible = false;
		this->GamePanel->Visible = true;
		
	}

	// Sets the background of all buttons to be empty. Used when resetting game state
	private: System::Void clearCells() {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		this->Cell0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
		this->Cell8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"")));
	}

	// Update game state after game
	private: System::Void updateGameState() {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));

		Player current_player = this->game->getCurrentPlayer();
		char player_token = current_player.getToken();

		bool player_won = this->game->checkWinner();

		if (player_won) {
			// TODO: Maybe add a helper function for all this?
			if (player_token == 'x') {
				this->GameAnnouncement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerXHasWon.BackgroundImage")));
			} else {
				this->GameAnnouncement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerOHasWon.BackgroundImage")));
			}
			// Wait for 1 second
			// TODO: Get rid of this and use SetTimer instead
			this->GameAnnouncement->Refresh();
			std::this_thread::sleep_for(std::chrono::seconds(3));
			
			// Same position as the BoardPanel
			// TODO: Get a variable so this isn't hardcoded
			this->GameOverPanel->Location = System::Drawing::Point(303, 90);
			this->GameOverPanel->Visible = true;
			this->BoardPanel->Visible = false;
			return;
		}
		
		this->game->swapPlayer();
		
		if (this->game->getCurrentPlayer().getToken() == 'o') {
			this->GameAnnouncement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerOsTurn.BackgroundImage")));
		}
		else {
			this->GameAnnouncement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerXsTurn.BackgroundImage")));
		}
	}

	private: System::Void PlayAgainButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Resets the game state
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));

		this->game->resetGame();
		this->clearCells();
		this->GameOverPanel->Visible = false;
		this->BoardPanel->Visible = true;
		this->GameAnnouncement->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PlayerXsTurn.BackgroundImage")));
	}

	private: System::Void BackToMenuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PlayAgainButton_Click(sender, e);
		this->GamePanel->Visible = false;
		this->MenuPanel->Visible = true;
	}

	private: System::Void takeTurn(System::Windows::Forms::Button^ button, size_t row, size_t col) {
		bool move_successful = game->takeTurn(row, col);
		if (!move_successful) {
			return;
		}

		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
		if (this->game->getCurrentPlayer().getToken() == 'o') {
			button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OMark.BackgroundImage"))); // Ensure the image file is in the correct location
		}
		else {
			button->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"XMark.BackgroundImage"))); // Ensure the image file is in the correct location
		}

		button->Refresh();
		// Swaps players' alongside some cosmetic updates
		this->updateGameState();
	}

	private: System::Void Cell0_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 0;
		size_t col = 0;
		
		this->takeTurn(this->Cell0, row, col);
	}
	private: System::Void Cell1_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 0;
		size_t col = 1;

		this->takeTurn(this->Cell1, row, col);
	}
	private: System::Void Cell2_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 0;
		size_t col = 2;

		this->takeTurn(this->Cell2, row, col);
	}

	private: System::Void Cell3_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 1;
		size_t col = 0;

		this->takeTurn(this->Cell3, row, col);
	}

	private: System::Void Cell4_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 1;
		size_t col = 1;

		this->takeTurn(this->Cell4, row, col);
	}

	private: System::Void Cell5_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 1;
		size_t col = 2;

		this->takeTurn(this->Cell5, row, col);
	}

	private: System::Void Cell6_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 2;
		size_t col = 0;

		this->takeTurn(this->Cell6, row, col);
	}

	private: System::Void Cell7_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 2;
		size_t col = 1;

		this->takeTurn(this->Cell7, row, col);
	}

	private: System::Void Cell8_Click(System::Object^ sender, System::EventArgs^ e) {
		size_t row = 2;
		size_t col = 2;

		this->takeTurn(this->Cell8, row, col);
	}
private: System::Void GamePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void PlayerXsTurn_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
