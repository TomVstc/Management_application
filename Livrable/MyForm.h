#pragma once
#include "CL_gestion_client.h"
#include "CL_gestion_adresse_livraison.h"
#include "CL_gestion_adresse_facturation.h"
#include "CL_gestion_personnel.h"
#include "CL_gestion_statistique.h"
#include "CL_gestion_article.h"

namespace bdd_livrable {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;

	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage7;

	private: System::Windows::Forms::TabPage^ tabPage9;

	private: System::Windows::Forms::TextBox^ txtMessage;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtbox_personnel_sh;

	private: System::Windows::Forms::TextBox^ personnel_prenom;




	private: System::Windows::Forms::TextBox^ personnel_nom;


	private: System::Windows::Forms::Button^ button_ajouter_personnel;




	private: System::Windows::Forms::Label^ label6;





























	private: System::Windows::Forms::TextBox^ personnel_ID;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button_supprimer_personel;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ afficher_personnel_sh;


	private: System::Windows::Forms::TextBox^ afficher_personnel_prenom;

private: System::Windows::Forms::TextBox^ afficher_personnel_nom;

private: System::Windows::Forms::TextBox^ afficher_personnel_ID;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;

	private: System::Windows::Forms::TabPage^ tabPage12;
private: System::Windows::Forms::Button^ button7;



private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ personnel_txtbox_cp;

private: System::Windows::Forms::TextBox^ txtbox_numRue;



private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::TextBox^ personnel_rue;


private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::ComboBox^ txtbox_personnel_ville;


















private: System::Windows::Forms::TextBox^ afficher_personnel_ville;

private: System::Windows::Forms::TextBox^ afficher_personnel_num;
private: System::Windows::Forms::TextBox^ afficher_personnel_nomRue;
private: System::Windows::Forms::TextBox^ afficher_personnel_cp;



private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label53;
private: System::Windows::Forms::Label^ label52;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Label^ label50;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox37;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::ComboBox^ comboBox4;







































private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::Label^ label70;

private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::TextBox^ textBox65;
private: System::Windows::Forms::Label^ label82;


private: System::Windows::Forms::TextBox^ textBox63;
private: System::Windows::Forms::TextBox^ textBox62;
private: System::Windows::Forms::TextBox^ textBox61;
private: System::Windows::Forms::TextBox^ textBox60;
private: System::Windows::Forms::TextBox^ textBox59;
private: System::Windows::Forms::TextBox^ textBox58;
private: System::Windows::Forms::TextBox^ textBox57;
private: System::Windows::Forms::TextBox^ textBox56;
private: System::Windows::Forms::TextBox^ textBox48;
private: System::Windows::Forms::TabControl^ tabControl4;
private: System::Windows::Forms::TabPage^ tabPage13;

private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::TextBox^ textBox67;
private: System::Windows::Forms::TextBox^ textBox66;
private: System::Windows::Forms::Label^ label83;

private: System::Windows::Forms::TabPage^ tabPage15;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::TextBox^ textBox68;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::TextBox^ textBox69;






























private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button24;

private: System::Windows::Forms::ComboBox^ comboBox16;
private: System::Windows::Forms::ComboBox^ comboBox15;
private: System::Windows::Forms::ComboBox^ comboBox14;
private: System::Windows::Forms::ComboBox^ comboBox13;
private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Label^ label102;
private: System::Windows::Forms::Label^ label101;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::TextBox^ textBox81;
private: System::Windows::Forms::TabControl^ tabControl5;
private: System::Windows::Forms::TabPage^ tabPage16;
private: System::Windows::Forms::TextBox^ textBox83;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker10;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker9;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker8;
private: System::Windows::Forms::TextBox^ textBox82;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::Label^ label104;
private: System::Windows::Forms::TextBox^ textBox84;
private: System::Windows::Forms::Button^ button28;
	private: NS_svc::CL_gestion_client^ processusClient = gcnew NS_svc::CL_gestion_client();
	private: NS_svc::CL_gestion_adresse_livraison^ processusAdLivraison = gcnew NS_svc::CL_gestion_adresse_livraison();
	private: NS_svc::CL_gestion_adresse_facturation^ processusAdFacturation = gcnew NS_svc::CL_gestion_adresse_facturation();
	private: NS_Svc::CL_svc_gestionPersonnes^ personnel = gcnew NS_Svc::CL_svc_gestionPersonnes();
	private: NS_svc::CL_gestion_statistique^ statistique = gcnew NS_svc::CL_gestion_statistique();
	private: NS_svc::CL_gestion_article^ processusArticle = gcnew NS_svc::CL_gestion_article();

	private: Data::DataSet^ ds = gcnew Data::DataSet();
	private: int index;
	private: String^ mode;

private: System::Windows::Forms::TextBox^ textBox86;
private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::TextBox^ textBox85;
private: System::Windows::Forms::Label^ label110;
private: System::Windows::Forms::TextBox^ textBox87;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::TextBox^ textBox64;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::TextBox^ personnel_txtbox_date;
private: System::Windows::Forms::Label^ label54;
private: System::Windows::Forms::TextBox^ afficher_personnel_date;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::DataGridView^ dataGridView1;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button32;



private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button17;








	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->personnel_txtbox_date = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_personnel_ville = (gcnew System::Windows::Forms::ComboBox());
			this->personnel_rue = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->personnel_txtbox_cp = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_numRue = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->personnel_ID = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button_ajouter_personnel = (gcnew System::Windows::Forms::Button());
			this->txtbox_personnel_sh = (gcnew System::Windows::Forms::TextBox());
			this->personnel_prenom = (gcnew System::Windows::Forms::TextBox());
			this->personnel_nom = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->afficher_personnel_date = (gcnew System::Windows::Forms::TextBox());
			this->afficher_personnel_ville = (gcnew System::Windows::Forms::TextBox());
			this->afficher_personnel_num = (gcnew System::Windows::Forms::TextBox());
			this->afficher_personnel_nomRue = (gcnew System::Windows::Forms::TextBox());
			this->afficher_personnel_cp = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->button_supprimer_personel = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->afficher_personnel_sh = (gcnew System::Windows::Forms::TextBox());
			this->afficher_personnel_prenom = (gcnew System::Windows::Forms::TextBox());
			this->afficher_personnel_nom = (gcnew System::Windows::Forms::TextBox());
			this->afficher_personnel_ID = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker10 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker9 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker8 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage16->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage13->SuspendLayout();
			this->tabPage15->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Bold));
			this->tabControl1->HotTrack = true;
			this->tabControl1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tabControl1->ItemSize = System::Drawing::Size(150, 50);
			this->tabControl1->Location = System::Drawing::Point(0, -1);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->ShowToolTips = true;
			this->tabControl1->Size = System::Drawing::Size(1046, 651);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Location = System::Drawing::Point(4, 54);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1038, 593);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Acceuil";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->Location = System::Drawing::Point(153, 164);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(706, 160);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Bienvenue";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label6->UseMnemonic = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Controls->Add(this->txtMessage);
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Location = System::Drawing::Point(4, 54);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1038, 593);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Gestion Personnel";
			// 
			// txtMessage
			// 
			this->txtMessage->Location = System::Drawing::Point(688, 7);
			this->txtMessage->Multiline = true;
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->Size = System::Drawing::Size(342, 576);
			this->txtMessage->TabIndex = 1;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Location = System::Drawing::Point(8, 7);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(674, 575);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->button15);
			this->tabPage7->Controls->Add(this->personnel_txtbox_date);
			this->tabPage7->Controls->Add(this->txtbox_personnel_ville);
			this->tabPage7->Controls->Add(this->personnel_rue);
			this->tabPage7->Controls->Add(this->label35);
			this->tabPage7->Controls->Add(this->label34);
			this->tabPage7->Controls->Add(this->personnel_txtbox_cp);
			this->tabPage7->Controls->Add(this->txtbox_numRue);
			this->tabPage7->Controls->Add(this->label33);
			this->tabPage7->Controls->Add(this->label32);
			this->tabPage7->Controls->Add(this->personnel_ID);
			this->tabPage7->Controls->Add(this->label7);
			this->tabPage7->Controls->Add(this->button_ajouter_personnel);
			this->tabPage7->Controls->Add(this->txtbox_personnel_sh);
			this->tabPage7->Controls->Add(this->personnel_prenom);
			this->tabPage7->Controls->Add(this->personnel_nom);
			this->tabPage7->Controls->Add(this->label5);
			this->tabPage7->Controls->Add(this->label4);
			this->tabPage7->Controls->Add(this->label3);
			this->tabPage7->Controls->Add(this->label2);
			this->tabPage7->Controls->Add(this->label1);
			this->tabPage7->Location = System::Drawing::Point(4, 26);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(666, 545);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Ajouter";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Coral;
			this->button15->Location = System::Drawing::Point(522, 486);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(92, 40);
			this->button15->TabIndex = 22;
			this->button15->Text = L"Clear";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// personnel_txtbox_date
			// 
			this->personnel_txtbox_date->Location = System::Drawing::Point(23, 426);
			this->personnel_txtbox_date->Name = L"personnel_txtbox_date";
			this->personnel_txtbox_date->Size = System::Drawing::Size(173, 23);
			this->personnel_txtbox_date->TabIndex = 21;
			// 
			// txtbox_personnel_ville
			// 
			this->txtbox_personnel_ville->FormattingEnabled = true;
			this->txtbox_personnel_ville->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Lille", L"Paris", L"Lyon" });
			this->txtbox_personnel_ville->Location = System::Drawing::Point(24, 282);
			this->txtbox_personnel_ville->Name = L"txtbox_personnel_ville";
			this->txtbox_personnel_ville->Size = System::Drawing::Size(172, 25);
			this->txtbox_personnel_ville->TabIndex = 20;
			// 
			// personnel_rue
			// 
			this->personnel_rue->Location = System::Drawing::Point(24, 347);
			this->personnel_rue->Name = L"personnel_rue";
			this->personnel_rue->Size = System::Drawing::Size(172, 23);
			this->personnel_rue->TabIndex = 19;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(22, 327);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(115, 17);
			this->label35->TabIndex = 18;
			this->label35->Text = L"Nom rue perso";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(215, 263);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(28, 17);
			this->label34->TabIndex = 17;
			this->label34->Text = L"CP";
			// 
			// personnel_txtbox_cp
			// 
			this->personnel_txtbox_cp->Location = System::Drawing::Point(215, 282);
			this->personnel_txtbox_cp->Name = L"personnel_txtbox_cp";
			this->personnel_txtbox_cp->Size = System::Drawing::Size(95, 23);
			this->personnel_txtbox_cp->TabIndex = 16;
			// 
			// txtbox_numRue
			// 
			this->txtbox_numRue->Location = System::Drawing::Point(215, 347);
			this->txtbox_numRue->Name = L"txtbox_numRue";
			this->txtbox_numRue->Size = System::Drawing::Size(95, 23);
			this->txtbox_numRue->TabIndex = 15;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(215, 327);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 17);
			this->label33->TabIndex = 14;
			this->label33->Text = L"N* rue perso";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(22, 262);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(39, 17);
			this->label32->TabIndex = 13;
			this->label32->Text = L"Ville";
			// 
			// personnel_ID
			// 
			this->personnel_ID->Location = System::Drawing::Point(24, 28);
			this->personnel_ID->Name = L"personnel_ID";
			this->personnel_ID->ReadOnly = true;
			this->personnel_ID->Size = System::Drawing::Size(172, 23);
			this->personnel_ID->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 8);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"ID";
			// 
			// button_ajouter_personnel
			// 
			this->button_ajouter_personnel->BackColor = System::Drawing::Color::Gainsboro;
			this->button_ajouter_personnel->Location = System::Drawing::Point(23, 486);
			this->button_ajouter_personnel->Name = L"button_ajouter_personnel";
			this->button_ajouter_personnel->Size = System::Drawing::Size(462, 40);
			this->button_ajouter_personnel->TabIndex = 10;
			this->button_ajouter_personnel->Text = L"Ajouter Personnel";
			this->button_ajouter_personnel->UseVisualStyleBackColor = false;
			this->button_ajouter_personnel->Click += gcnew System::EventHandler(this, &MyForm::button_ajouter_personnel_Click);
			// 
			// txtbox_personnel_sh
			// 
			this->txtbox_personnel_sh->Location = System::Drawing::Point(24, 200);
			this->txtbox_personnel_sh->Name = L"txtbox_personnel_sh";
			this->txtbox_personnel_sh->Size = System::Drawing::Size(172, 23);
			this->txtbox_personnel_sh->TabIndex = 7;
			// 
			// personnel_prenom
			// 
			this->personnel_prenom->Location = System::Drawing::Point(24, 145);
			this->personnel_prenom->Name = L"personnel_prenom";
			this->personnel_prenom->Size = System::Drawing::Size(172, 23);
			this->personnel_prenom->TabIndex = 6;
			// 
			// personnel_nom
			// 
			this->personnel_nom->Location = System::Drawing::Point(24, 89);
			this->personnel_nom->Name = L"personnel_nom";
			this->personnel_nom->Size = System::Drawing::Size(172, 23);
			this->personnel_nom->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(21, 406);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date d\'embauche";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Adresse perso";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Supérieur hiérarchique";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prenom";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// tabPage9
			// 
			this->tabPage9->BackColor = System::Drawing::Color::Transparent;
			this->tabPage9->Controls->Add(this->button9);
			this->tabPage9->Controls->Add(this->button8);
			this->tabPage9->Controls->Add(this->button1);
			this->tabPage9->Controls->Add(this->label54);
			this->tabPage9->Controls->Add(this->afficher_personnel_date);
			this->tabPage9->Controls->Add(this->afficher_personnel_ville);
			this->tabPage9->Controls->Add(this->afficher_personnel_num);
			this->tabPage9->Controls->Add(this->afficher_personnel_nomRue);
			this->tabPage9->Controls->Add(this->afficher_personnel_cp);
			this->tabPage9->Controls->Add(this->label45);
			this->tabPage9->Controls->Add(this->label44);
			this->tabPage9->Controls->Add(this->label43);
			this->tabPage9->Controls->Add(this->button_supprimer_personel);
			this->tabPage9->Controls->Add(this->button5);
			this->tabPage9->Controls->Add(this->button4);
			this->tabPage9->Controls->Add(this->afficher_personnel_sh);
			this->tabPage9->Controls->Add(this->afficher_personnel_prenom);
			this->tabPage9->Controls->Add(this->afficher_personnel_nom);
			this->tabPage9->Controls->Add(this->afficher_personnel_ID);
			this->tabPage9->Controls->Add(this->label26);
			this->tabPage9->Controls->Add(this->label25);
			this->tabPage9->Controls->Add(this->label24);
			this->tabPage9->Controls->Add(this->label23);
			this->tabPage9->Controls->Add(this->label22);
			this->tabPage9->Location = System::Drawing::Point(4, 26);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(666, 545);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = L"Afficher / Modifier / Supprimer";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::SkyBlue;
			this->button9->Location = System::Drawing::Point(315, 363);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(140, 51);
			this->button9->TabIndex = 25;
			this->button9->Text = L"Enregistrer modifications";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SkyBlue;
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(91, 363);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 51);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Modifier";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Khaki;
			this->button1->Location = System::Drawing::Point(91, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 51);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(233, 132);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(121, 17);
			this->label54->TabIndex = 22;
			this->label54->Text = L"Date embauche";
			// 
			// afficher_personnel_date
			// 
			this->afficher_personnel_date->Location = System::Drawing::Point(233, 151);
			this->afficher_personnel_date->Name = L"afficher_personnel_date";
			this->afficher_personnel_date->Size = System::Drawing::Size(205, 23);
			this->afficher_personnel_date->TabIndex = 21;
			// 
			// afficher_personnel_ville
			// 
			this->afficher_personnel_ville->Location = System::Drawing::Point(233, 27);
			this->afficher_personnel_ville->Name = L"afficher_personnel_ville";
			this->afficher_personnel_ville->Size = System::Drawing::Size(205, 23);
			this->afficher_personnel_ville->TabIndex = 20;
			// 
			// afficher_personnel_num
			// 
			this->afficher_personnel_num->Location = System::Drawing::Point(476, 91);
			this->afficher_personnel_num->Name = L"afficher_personnel_num";
			this->afficher_personnel_num->Size = System::Drawing::Size(100, 23);
			this->afficher_personnel_num->TabIndex = 19;
			// 
			// afficher_personnel_nomRue
			// 
			this->afficher_personnel_nomRue->Location = System::Drawing::Point(233, 91);
			this->afficher_personnel_nomRue->Name = L"afficher_personnel_nomRue";
			this->afficher_personnel_nomRue->Size = System::Drawing::Size(205, 23);
			this->afficher_personnel_nomRue->TabIndex = 18;
			// 
			// afficher_personnel_cp
			// 
			this->afficher_personnel_cp->Location = System::Drawing::Point(473, 27);
			this->afficher_personnel_cp->Name = L"afficher_personnel_cp";
			this->afficher_personnel_cp->Size = System::Drawing::Size(100, 23);
			this->afficher_personnel_cp->TabIndex = 17;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(473, 70);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(100, 17);
			this->label45->TabIndex = 15;
			this->label45->Text = L"N* rue perso";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(230, 70);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(115, 17);
			this->label44->TabIndex = 14;
			this->label44->Text = L"Nom rue perso";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(470, 6);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(28, 17);
			this->label43->TabIndex = 13;
			this->label43->Text = L"CP";
			// 
			// button_supprimer_personel
			// 
			this->button_supprimer_personel->BackColor = System::Drawing::Color::LightCoral;
			this->button_supprimer_personel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_supprimer_personel->Location = System::Drawing::Point(198, 435);
			this->button_supprimer_personel->Name = L"button_supprimer_personel";
			this->button_supprimer_personel->Size = System::Drawing::Size(147, 51);
			this->button_supprimer_personel->TabIndex = 12;
			this->button_supprimer_personel->Text = L"Supprimer";
			this->button_supprimer_personel->UseVisualStyleBackColor = false;
			this->button_supprimer_personel->Click += gcnew System::EventHandler(this, &MyForm::button_supprimer_personel_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Khaki;
			this->button5->Location = System::Drawing::Point(398, 294);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(57, 51);
			this->button5->TabIndex = 11;
			this->button5->Text = L">";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Khaki;
			this->button4->Location = System::Drawing::Point(315, 294);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(57, 51);
			this->button4->TabIndex = 10;
			this->button4->Text = L"<";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// afficher_personnel_sh
			// 
			this->afficher_personnel_sh->Location = System::Drawing::Point(12, 228);
			this->afficher_personnel_sh->Name = L"afficher_personnel_sh";
			this->afficher_personnel_sh->Size = System::Drawing::Size(191, 23);
			this->afficher_personnel_sh->TabIndex = 8;
			// 
			// afficher_personnel_prenom
			// 
			this->afficher_personnel_prenom->Location = System::Drawing::Point(12, 152);
			this->afficher_personnel_prenom->Name = L"afficher_personnel_prenom";
			this->afficher_personnel_prenom->Size = System::Drawing::Size(191, 23);
			this->afficher_personnel_prenom->TabIndex = 7;
			// 
			// afficher_personnel_nom
			// 
			this->afficher_personnel_nom->Location = System::Drawing::Point(12, 90);
			this->afficher_personnel_nom->Name = L"afficher_personnel_nom";
			this->afficher_personnel_nom->Size = System::Drawing::Size(191, 23);
			this->afficher_personnel_nom->TabIndex = 6;
			// 
			// afficher_personnel_ID
			// 
			this->afficher_personnel_ID->Location = System::Drawing::Point(12, 27);
			this->afficher_personnel_ID->Name = L"afficher_personnel_ID";
			this->afficher_personnel_ID->ReadOnly = true;
			this->afficher_personnel_ID->Size = System::Drawing::Size(191, 23);
			this->afficher_personnel_ID->TabIndex = 5;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(230, 4);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(39, 17);
			this->label26->TabIndex = 4;
			this->label26->Text = L"Ville";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(9, 198);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(175, 17);
			this->label25->TabIndex = 3;
			this->label25->Text = L"Supérieur hiérarchique";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(12, 131);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(63, 17);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Prenom";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(12, 69);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(40, 17);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Nom";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 6);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 17);
			this->label22->TabIndex = 0;
			this->label22->Text = L"ID";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage3->Controls->Add(this->textBox21);
			this->tabPage3->Controls->Add(this->tabControl3);
			this->tabPage3->Location = System::Drawing::Point(4, 54);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(4);
			this->tabPage3->Size = System::Drawing::Size(1038, 593);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Gestion Client";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(763, 7);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(267, 575);
			this->textBox21->TabIndex = 1;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Location = System::Drawing::Point(8, 7);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(749, 575);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->button16);
			this->tabPage10->Controls->Add(this->textBox86);
			this->tabPage10->Controls->Add(this->label109);
			this->tabPage10->Controls->Add(this->textBox85);
			this->tabPage10->Controls->Add(this->label53);
			this->tabPage10->Controls->Add(this->label52);
			this->tabPage10->Controls->Add(this->label51);
			this->tabPage10->Controls->Add(this->label50);
			this->tabPage10->Controls->Add(this->label49);
			this->tabPage10->Controls->Add(this->label48);
			this->tabPage10->Controls->Add(this->label47);
			this->tabPage10->Controls->Add(this->label46);
			this->tabPage10->Controls->Add(this->textBox38);
			this->tabPage10->Controls->Add(this->textBox37);
			this->tabPage10->Controls->Add(this->textBox36);
			this->tabPage10->Controls->Add(this->textBox35);
			this->tabPage10->Controls->Add(this->textBox25);
			this->tabPage10->Controls->Add(this->textBox24);
			this->tabPage10->Controls->Add(this->comboBox5);
			this->tabPage10->Controls->Add(this->comboBox4);
			this->tabPage10->Controls->Add(this->button7);
			this->tabPage10->Controls->Add(this->textBox23);
			this->tabPage10->Controls->Add(this->textBox22);
			this->tabPage10->Controls->Add(this->label31);
			this->tabPage10->Controls->Add(this->label30);
			this->tabPage10->Controls->Add(this->label29);
			this->tabPage10->Controls->Add(this->label28);
			this->tabPage10->Controls->Add(this->label27);
			this->tabPage10->Location = System::Drawing::Point(4, 26);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(741, 545);
			this->tabPage10->TabIndex = 0;
			this->tabPage10->Text = L"Ajouter";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Coral;
			this->button16->Location = System::Drawing::Point(520, 488);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(92, 40);
			this->button16->TabIndex = 30;
			this->button16->Text = L"Clear";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(234, 94);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(165, 23);
			this->textBox86->TabIndex = 29;
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->Location = System::Drawing::Point(231, 74);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(108, 17);
			this->label109->TabIndex = 28;
			this->label109->Text = L"Numéro client";
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(234, 33);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(165, 23);
			this->textBox85->TabIndex = 27;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(231, 365);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(54, 17);
			this->label53->TabIndex = 26;
			this->label53->Text = L"N* rue";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(231, 227);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(54, 17);
			this->label52->TabIndex = 25;
			this->label52->Text = L"N* rue";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(231, 309);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(28, 17);
			this->label51->TabIndex = 24;
			this->label51->Text = L"CP";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(20, 309);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(39, 17);
			this->label50->TabIndex = 23;
			this->label50->Text = L"Ville";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(20, 227);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(69, 17);
			this->label49->TabIndex = 22;
			this->label49->Text = L"Nom rue";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(20, 365);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(69, 17);
			this->label48->TabIndex = 21;
			this->label48->Text = L"Nom rue";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(231, 170);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(28, 17);
			this->label47->TabIndex = 20;
			this->label47->Text = L"CP";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(20, 170);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(39, 17);
			this->label46->TabIndex = 19;
			this->label46->Text = L"Ville";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(234, 385);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(100, 23);
			this->textBox38->TabIndex = 18;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(22, 385);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(161, 23);
			this->textBox37->TabIndex = 17;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(234, 329);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(100, 23);
			this->textBox36->TabIndex = 16;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(234, 247);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 23);
			this->textBox35->TabIndex = 15;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(23, 247);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(160, 23);
			this->textBox25->TabIndex = 14;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(234, 190);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 23);
			this->textBox24->TabIndex = 13;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Lille", L"Paris", L"Lyon" });
			this->comboBox5->Location = System::Drawing::Point(22, 329);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(161, 25);
			this->comboBox5->TabIndex = 12;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Lille", L"Paris", L"Lyon" });
			this->comboBox4->Location = System::Drawing::Point(26, 190);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(161, 25);
			this->comboBox4->TabIndex = 11;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(22, 488);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(462, 40);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Ajouter client";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(22, 94);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(161, 23);
			this->textBox23->TabIndex = 6;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(22, 33);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(161, 23);
			this->textBox22->TabIndex = 5;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(234, 13);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(143, 17);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Date de naissance";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(19, 285);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(150, 17);
			this->label30->TabIndex = 3;
			this->label30->Text = L"Adresse facturation";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(19, 143);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(138, 17);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Adresse Livraison";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(19, 74);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(63, 17);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Prenom";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(19, 13);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(40, 17);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Nom";
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->button30);
			this->tabPage12->Controls->Add(this->button29);
			this->tabPage12->Controls->Add(this->label110);
			this->tabPage12->Controls->Add(this->textBox87);
			this->tabPage12->Controls->Add(this->label69);
			this->tabPage12->Controls->Add(this->textBox64);
			this->tabPage12->Controls->Add(this->button28);
			this->tabPage12->Controls->Add(this->textBox84);
			this->tabPage12->Controls->Add(this->button12);
			this->tabPage12->Controls->Add(this->button11);
			this->tabPage12->Controls->Add(this->button10);
			this->tabPage12->Controls->Add(this->textBox65);
			this->tabPage12->Controls->Add(this->label82);
			this->tabPage12->Controls->Add(this->textBox63);
			this->tabPage12->Controls->Add(this->textBox62);
			this->tabPage12->Controls->Add(this->textBox61);
			this->tabPage12->Controls->Add(this->textBox60);
			this->tabPage12->Controls->Add(this->textBox59);
			this->tabPage12->Controls->Add(this->textBox58);
			this->tabPage12->Controls->Add(this->textBox57);
			this->tabPage12->Controls->Add(this->textBox56);
			this->tabPage12->Controls->Add(this->textBox48);
			this->tabPage12->Controls->Add(this->label81);
			this->tabPage12->Controls->Add(this->label80);
			this->tabPage12->Controls->Add(this->label79);
			this->tabPage12->Controls->Add(this->label78);
			this->tabPage12->Controls->Add(this->label77);
			this->tabPage12->Controls->Add(this->label76);
			this->tabPage12->Controls->Add(this->label75);
			this->tabPage12->Controls->Add(this->label74);
			this->tabPage12->Controls->Add(this->label73);
			this->tabPage12->Controls->Add(this->label72);
			this->tabPage12->Controls->Add(this->label71);
			this->tabPage12->Controls->Add(this->label70);
			this->tabPage12->Location = System::Drawing::Point(4, 26);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(741, 545);
			this->tabPage12->TabIndex = 2;
			this->tabPage12->Text = L"Afficher/ Modifier / Supprimer";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::SkyBlue;
			this->button30->Location = System::Drawing::Point(489, 335);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(158, 47);
			this->button30->TabIndex = 36;
			this->button30->Text = L"Enregistrer modifications";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::SkyBlue;
			this->button29->Location = System::Drawing::Point(489, 265);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(158, 47);
			this->button29->TabIndex = 35;
			this->button29->Text = L"Modifier";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Location = System::Drawing::Point(24, 182);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(133, 17);
			this->label110->TabIndex = 34;
			this->label110->Text = L"Adresse livraison";
			// 
			// textBox87
			// 
			this->textBox87->Location = System::Drawing::Point(260, 434);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(175, 23);
			this->textBox87->TabIndex = 33;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(257, 119);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(108, 17);
			this->label69->TabIndex = 32;
			this->label69->Text = L"Numero client";
			// 
			// textBox64
			// 
			this->textBox64->Location = System::Drawing::Point(260, 139);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(175, 23);
			this->textBox64->TabIndex = 31;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Khaki;
			this->button28->Location = System::Drawing::Point(489, 90);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(158, 52);
			this->button28->TabIndex = 30;
			this->button28->Text = L"Afficher";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(260, 93);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(175, 23);
			this->textBox84->TabIndex = 29;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightCoral;
			this->button12->ForeColor = System::Drawing::Color::Black;
			this->button12->Location = System::Drawing::Point(489, 412);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(163, 45);
			this->button12->TabIndex = 28;
			this->button12->Text = L"Supprimer";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Khaki;
			this->button11->Location = System::Drawing::Point(581, 180);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(66, 57);
			this->button11->TabIndex = 27;
			this->button11->Text = L">";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Khaki;
			this->button10->Location = System::Drawing::Point(489, 180);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(66, 57);
			this->button10->TabIndex = 26;
			this->button10->Text = L"<";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// textBox65
			// 
			this->textBox65->Location = System::Drawing::Point(28, 49);
			this->textBox65->Name = L"textBox65";
			this->textBox65->ReadOnly = true;
			this->textBox65->Size = System::Drawing::Size(80, 23);
			this->textBox65->TabIndex = 25;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(25, 28);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(23, 17);
			this->label82->TabIndex = 24;
			this->label82->Text = L"ID";
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(31, 434);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(173, 23);
			this->textBox63->TabIndex = 21;
			// 
			// textBox62
			// 
			this->textBox62->Location = System::Drawing::Point(261, 369);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(174, 23);
			this->textBox62->TabIndex = 20;
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(30, 369);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(174, 23);
			this->textBox61->TabIndex = 19;
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(260, 279);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(175, 23);
			this->textBox60->TabIndex = 18;
			// 
			// textBox59
			// 
			this->textBox59->Location = System::Drawing::Point(29, 279);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(175, 23);
			this->textBox59->TabIndex = 17;
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(260, 231);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(175, 23);
			this->textBox58->TabIndex = 16;
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(30, 231);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(174, 23);
			this->textBox57->TabIndex = 15;
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(27, 139);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(175, 23);
			this->textBox56->TabIndex = 14;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(28, 93);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(174, 23);
			this->textBox48->TabIndex = 13;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(258, 414);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(54, 17);
			this->label81->TabIndex = 12;
			this->label81->Text = L"N* rue";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(28, 348);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(39, 17);
			this->label80->TabIndex = 11;
			this->label80->Text = L"Ville";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(257, 259);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(54, 17);
			this->label79->TabIndex = 10;
			this->label79->Text = L"N* rue";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(26, 259);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(69, 17);
			this->label78->TabIndex = 9;
			this->label78->Text = L"Nom rue";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(28, 414);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(69, 17);
			this->label77->TabIndex = 8;
			this->label77->Text = L"Nom rue";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(258, 72);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(143, 17);
			this->label76->TabIndex = 7;
			this->label76->Text = L"Date de naissance";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(258, 348);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(28, 17);
			this->label75->TabIndex = 6;
			this->label75->Text = L"CP";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(26, 210);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(39, 17);
			this->label74->TabIndex = 5;
			this->label74->Text = L"Ville";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(24, 119);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(63, 17);
			this->label73->TabIndex = 4;
			this->label73->Text = L"Prenom";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(257, 210);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(28, 17);
			this->label72->TabIndex = 3;
			this->label72->Text = L"CP";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(24, 72);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(40, 17);
			this->label71->TabIndex = 2;
			this->label71->Text = L"Nom";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(24, 319);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(154, 17);
			this->label70->TabIndex = 1;
			this->label70->Text = L"Adresse Facturation";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage4->Controls->Add(this->textBox81);
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Location = System::Drawing::Point(4, 54);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(4);
			this->tabPage4->Size = System::Drawing::Size(1038, 593);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Gestion Commande";
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(674, 8);
			this->textBox81->Multiline = true;
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(357, 577);
			this->textBox81->TabIndex = 1;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage16);
			this->tabControl5->Location = System::Drawing::Point(7, 7);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(660, 578);
			this->tabControl5->TabIndex = 0;
			// 
			// tabPage16
			// 
			this->tabPage16->Controls->Add(this->textBox83);
			this->tabPage16->Controls->Add(this->dateTimePicker10);
			this->tabPage16->Controls->Add(this->dateTimePicker9);
			this->tabPage16->Controls->Add(this->dateTimePicker8);
			this->tabPage16->Controls->Add(this->textBox82);
			this->tabPage16->Controls->Add(this->label108);
			this->tabPage16->Controls->Add(this->label107);
			this->tabPage16->Controls->Add(this->label106);
			this->tabPage16->Controls->Add(this->label105);
			this->tabPage16->Controls->Add(this->label104);
			this->tabPage16->Location = System::Drawing::Point(4, 26);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(652, 548);
			this->tabPage16->TabIndex = 0;
			this->tabPage16->Text = L"Commande";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(37, 307);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(169, 23);
			this->textBox83->TabIndex = 9;
			// 
			// dateTimePicker10
			// 
			this->dateTimePicker10->Location = System::Drawing::Point(37, 385);
			this->dateTimePicker10->Name = L"dateTimePicker10";
			this->dateTimePicker10->Size = System::Drawing::Size(254, 23);
			this->dateTimePicker10->TabIndex = 8;
			// 
			// dateTimePicker9
			// 
			this->dateTimePicker9->Location = System::Drawing::Point(32, 221);
			this->dateTimePicker9->Name = L"dateTimePicker9";
			this->dateTimePicker9->Size = System::Drawing::Size(254, 23);
			this->dateTimePicker9->TabIndex = 7;
			// 
			// dateTimePicker8
			// 
			this->dateTimePicker8->Location = System::Drawing::Point(32, 135);
			this->dateTimePicker8->Name = L"dateTimePicker8";
			this->dateTimePicker8->Size = System::Drawing::Size(254, 23);
			this->dateTimePicker8->TabIndex = 6;
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(32, 61);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(174, 23);
			this->textBox82->TabIndex = 5;
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Location = System::Drawing::Point(34, 286);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(49, 17);
			this->label108->TabIndex = 4;
			this->label108->Text = L"Solde";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Location = System::Drawing::Point(29, 201);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(110, 17);
			this->label107->TabIndex = 3;
			this->label107->Text = L"Date émission";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Location = System::Drawing::Point(29, 114);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(113, 17);
			this->label106->TabIndex = 2;
			this->label106->Text = L"Date paiement";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Location = System::Drawing::Point(34, 365);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(108, 17);
			this->label105->TabIndex = 1;
			this->label105->Text = L"Date livraison";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Location = System::Drawing::Point(29, 40);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(83, 17);
			this->label104->TabIndex = 0;
			this->label104->Text = L"Référence";
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage5->Controls->Add(this->textBox69);
			this->tabPage5->Controls->Add(this->tabControl4);
			this->tabPage5->Location = System::Drawing::Point(4, 54);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4);
			this->tabPage5->Size = System::Drawing::Size(1038, 593);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Gestion Stock";
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(659, 8);
			this->textBox69->Multiline = true;
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(372, 578);
			this->textBox69->TabIndex = 1;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage13);
			this->tabControl4->Controls->Add(this->tabPage15);
			this->tabControl4->Location = System::Drawing::Point(8, 7);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(645, 579);
			this->tabControl4->TabIndex = 0;
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->button17);
			this->tabPage13->Controls->Add(this->textBox5);
			this->tabPage13->Controls->Add(this->textBox4);
			this->tabPage13->Controls->Add(this->textBox3);
			this->tabPage13->Controls->Add(this->label11);
			this->tabPage13->Controls->Add(this->textBox2);
			this->tabPage13->Controls->Add(this->label10);
			this->tabPage13->Controls->Add(this->textBox1);
			this->tabPage13->Controls->Add(this->label9);
			this->tabPage13->Controls->Add(this->label8);
			this->tabPage13->Controls->Add(this->button13);
			this->tabPage13->Controls->Add(this->textBox68);
			this->tabPage13->Controls->Add(this->label86);
			this->tabPage13->Controls->Add(this->label85);
			this->tabPage13->Controls->Add(this->label84);
			this->tabPage13->Controls->Add(this->textBox67);
			this->tabPage13->Controls->Add(this->textBox66);
			this->tabPage13->Controls->Add(this->label83);
			this->tabPage13->Location = System::Drawing::Point(4, 26);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(637, 549);
			this->tabPage13->TabIndex = 0;
			this->tabPage13->Text = L"Ajouter";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Coral;
			this->button17->Location = System::Drawing::Point(520, 481);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(92, 46);
			this->button17->TabIndex = 31;
			this->button17->Text = L"Clear";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(32, 422);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(217, 23);
			this->textBox5->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(29, 366);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(220, 23);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(29, 307);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(220, 23);
			this->textBox3->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(29, 345);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(224, 17);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Seuil de réapprovisionnement";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(29, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(220, 23);
			this->textBox2->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 228);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Quantité";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(29, 145);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 23);
			this->textBox1->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 124);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Nature article";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 74);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Nom article";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(26, 481);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(477, 46);
			this->button13->TabIndex = 8;
			this->button13->Text = L"Ajouter article";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(29, 198);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(220, 23);
			this->textBox68->TabIndex = 7;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(26, 178);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(64, 17);
			this->label86->TabIndex = 6;
			this->label86->Text = L"Couleur";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(29, 401);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(38, 17);
			this->label85->TabIndex = 4;
			this->label85->Text = L"TVA";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(26, 286);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(61, 17);
			this->label84->TabIndex = 3;
			this->label84->Text = L"Prix HT";
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(29, 94);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(220, 23);
			this->textBox67->TabIndex = 2;
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(26, 44);
			this->textBox66->Name = L"textBox66";
			this->textBox66->ReadOnly = true;
			this->textBox66->Size = System::Drawing::Size(223, 23);
			this->textBox66->TabIndex = 1;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(23, 24);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(114, 17);
			this->label83->TabIndex = 0;
			this->label83->Text = L"Référence - ID";
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->button14);
			this->tabPage15->Controls->Add(this->button2);
			this->tabPage15->Controls->Add(this->button3);
			this->tabPage15->Controls->Add(this->button6);
			this->tabPage15->Controls->Add(this->button31);
			this->tabPage15->Controls->Add(this->button32);
			this->tabPage15->Controls->Add(this->textBox6);
			this->tabPage15->Controls->Add(this->textBox7);
			this->tabPage15->Controls->Add(this->textBox8);
			this->tabPage15->Controls->Add(this->label12);
			this->tabPage15->Controls->Add(this->textBox9);
			this->tabPage15->Controls->Add(this->label13);
			this->tabPage15->Controls->Add(this->textBox10);
			this->tabPage15->Controls->Add(this->label14);
			this->tabPage15->Controls->Add(this->label15);
			this->tabPage15->Controls->Add(this->textBox11);
			this->tabPage15->Controls->Add(this->label16);
			this->tabPage15->Controls->Add(this->label17);
			this->tabPage15->Controls->Add(this->label18);
			this->tabPage15->Controls->Add(this->textBox12);
			this->tabPage15->Controls->Add(this->textBox13);
			this->tabPage15->Controls->Add(this->label19);
			this->tabPage15->Location = System::Drawing::Point(4, 26);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Size = System::Drawing::Size(637, 549);
			this->tabPage15->TabIndex = 2;
			this->tabPage15->Text = L"Afficher / Modifier / Supprimer";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightCoral;
			this->button14->Location = System::Drawing::Point(363, 377);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(158, 46);
			this->button14->TabIndex = 52;
			this->button14->Text = L"Supprimer";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SkyBlue;
			this->button2->Location = System::Drawing::Point(363, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(158, 47);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Enregistrer modifications";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->Location = System::Drawing::Point(363, 236);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 47);
			this->button3->TabIndex = 50;
			this->button3->Text = L"Modifier";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Khaki;
			this->button6->Location = System::Drawing::Point(363, 76);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(158, 52);
			this->button6->TabIndex = 49;
			this->button6->Text = L"Afficher";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Khaki;
			this->button31->Location = System::Drawing::Point(455, 151);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(66, 57);
			this->button31->TabIndex = 48;
			this->button31->Text = L">";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Khaki;
			this->button32->Location = System::Drawing::Point(363, 151);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(66, 57);
			this->button32->TabIndex = 47;
			this->button32->Text = L"<";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(36, 433);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(217, 23);
			this->textBox6->TabIndex = 46;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(33, 377);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(220, 23);
			this->textBox7->TabIndex = 45;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(33, 318);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(220, 23);
			this->textBox8->TabIndex = 44;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(33, 356);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(224, 17);
			this->label12->TabIndex = 43;
			this->label12->Text = L"Seuil de réapprovisionnement";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(33, 260);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(220, 23);
			this->textBox9->TabIndex = 42;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(33, 239);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(70, 17);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Quantité";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(33, 156);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(220, 23);
			this->textBox10->TabIndex = 40;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(30, 135);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 17);
			this->label14->TabIndex = 39;
			this->label14->Text = L"Nature article";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(30, 85);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(90, 17);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Nom article";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(33, 209);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(220, 23);
			this->textBox11->TabIndex = 37;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(30, 189);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(64, 17);
			this->label16->TabIndex = 36;
			this->label16->Text = L"Couleur";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(33, 412);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 17);
			this->label17->TabIndex = 35;
			this->label17->Text = L"TVA";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(30, 297);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(61, 17);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Prix HT";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(33, 105);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(220, 23);
			this->textBox12->TabIndex = 33;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(30, 55);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(223, 23);
			this->textBox13->TabIndex = 32;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(27, 35);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(114, 17);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Référence - ID";
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->textBox15);
			this->tabPage6->Controls->Add(this->label40);
			this->tabPage6->Controls->Add(this->label39);
			this->tabPage6->Controls->Add(this->label38);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->textBox14);
			this->tabPage6->Controls->Add(this->label20);
			this->tabPage6->Controls->Add(this->dataGridView1);
			this->tabPage6->Controls->Add(this->comboBox16);
			this->tabPage6->Controls->Add(this->comboBox15);
			this->tabPage6->Controls->Add(this->comboBox14);
			this->tabPage6->Controls->Add(this->comboBox13);
			this->tabPage6->Controls->Add(this->label103);
			this->tabPage6->Controls->Add(this->label102);
			this->tabPage6->Controls->Add(this->label101);
			this->tabPage6->Controls->Add(this->label100);
			this->tabPage6->Controls->Add(this->button27);
			this->tabPage6->Controls->Add(this->button19);
			this->tabPage6->Controls->Add(this->button26);
			this->tabPage6->Controls->Add(this->button25);
			this->tabPage6->Controls->Add(this->button23);
			this->tabPage6->Controls->Add(this->button22);
			this->tabPage6->Controls->Add(this->button21);
			this->tabPage6->Controls->Add(this->button20);
			this->tabPage6->Controls->Add(this->button24);
			this->tabPage6->Location = System::Drawing::Point(4, 54);
			this->tabPage6->Margin = System::Windows::Forms::Padding(4);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(4);
			this->tabPage6->Size = System::Drawing::Size(1038, 593);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Statistique";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1013, 146);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(17, 17);
			this->label21->TabIndex = 33;
			this->label21->Text = L"€";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(873, 143);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(137, 23);
			this->textBox15->TabIndex = 32;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(833, 195);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(21, 17);
			this->label40->TabIndex = 31;
			this->label40->Text = L"%";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(833, 164);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(21, 17);
			this->label39->TabIndex = 30;
			this->label39->Text = L"%";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(833, 133);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(21, 17);
			this->label38->TabIndex = 29;
			this->label38->Text = L"%";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(833, 103);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(21, 17);
			this->label37->TabIndex = 28;
			this->label37->Text = L"%";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(451, 118);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(138, 23);
			this->textBox14->TabIndex = 24;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(448, 97);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(104, 17);
			this->label20->TabIndex = 23;
			this->label20->Text = L"ID de l\'article";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(451, 237);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 102;
			this->dataGridView1->Size = System::Drawing::Size(531, 319);
			this->dataGridView1->TabIndex = 22;
			// 
			// comboBox16
			// 
			this->comboBox16->FormattingEnabled = true;
			this->comboBox16->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"3", L"5" });
			this->comboBox16->Location = System::Drawing::Point(706, 192);
			this->comboBox16->Name = L"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(121, 25);
			this->comboBox16->TabIndex = 21;
			// 
			// comboBox15
			// 
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5", L"6" });
			this->comboBox15->Location = System::Drawing::Point(706, 161);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(121, 25);
			this->comboBox15->TabIndex = 20;
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"15" });
			this->comboBox14->Location = System::Drawing::Point(706, 130);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(121, 25);
			this->comboBox14->TabIndex = 19;
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"19,6", L"10", L"5,5" });
			this->comboBox13->Location = System::Drawing::Point(706, 97);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(121, 25);
			this->comboBox13->TabIndex = 18;
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Location = System::Drawing::Point(620, 196);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(82, 17);
			this->label103->TabIndex = 17;
			this->label103->Text = L"Démarque";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(620, 165);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(61, 17);
			this->label102->TabIndex = 16;
			this->label102->Text = L"Remise";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(620, 134);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(53, 17);
			this->label101->TabIndex = 15;
			this->label101->Text = L"Marge";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(620, 97);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(38, 17);
			this->label100->TabIndex = 14;
			this->label100->Text = L"TVA";
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(451, 30);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(531, 59);
			this->button27->TabIndex = 13;
			this->button27->Text = L"Simuler des variations de valeurs commerciales pour en déduire la valeur du stock"
				L"";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(29, 42);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(358, 59);
			this->button19->TabIndex = 12;
			this->button19->Text = L"Calculer le panier moyen (après remise)";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(27, 497);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(360, 59);
			this->button26->TabIndex = 11;
			this->button26->Text = L"Calculer la valeur d’achat du stock";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(27, 432);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(360, 59);
			this->button25->TabIndex = 10;
			this->button25->Text = L"Calculer la valeur commerciale du stock";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(27, 367);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(360, 59);
			this->button23->TabIndex = 9;
			this->button23->Text = L"Identifier les 10 articles les moins vendus";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(27, 302);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(360, 59);
			this->button22->TabIndex = 8;
			this->button22->Text = L"Identifier les 10 articles les plus vendus";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(27, 237);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(360, 59);
			this->button21->TabIndex = 7;
			this->button21->Text = L"Calculer le montant total des achats pour un client";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(27, 172);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(360, 59);
			this->button20->TabIndex = 6;
			this->button20->Text = L"Identifier les produits sous le seuil de réapprovisionnement";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(27, 107);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(360, 59);
			this->button24->TabIndex = 5;
			this->button24->Text = L"Calculer le chiffre d’affaire sur un mois en particulier";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->ClientSize = System::Drawing::Size(1046, 650);
			this->Controls->Add(this->tabControl1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabControl5->ResumeLayout(false);
			this->tabPage16->ResumeLayout(false);
			this->tabPage16->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabControl4->ResumeLayout(false);
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			this->tabPage15->ResumeLayout(false);
			this->tabPage15->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		

		private: SqlConnection^ conn = gcnew SqlConnection("Data Source=DESKTOP-BLV2H3O\\SQLEXPRESS;" + "Initial Catalog=bdd_livrable6;" + "Integrated Security=True;");
		private: SqlDataAdapter^ adapter;
		private: DataTable^ table;

		private: void loadData(int index)
		{

			this->ds->Clear();
			this->ds = this->processusClient->listeClient("Client");
			this->textBox65->Text = Convert::ToString(this->ds->Tables["Client"]->Rows[this->index]->ItemArray[0]);   // Id
			this->textBox48->Text = Convert::ToString(this->ds->Tables["Client"]->Rows[this->index]->ItemArray[1]);   // Nom
			this->textBox56->Text = Convert::ToString(this->ds->Tables["Client"]->Rows[this->index]->ItemArray[2]);   // Prenom
			this->textBox84->Text = Convert::ToString(this->ds->Tables["Client"]->Rows[this->index]->ItemArray[3]);  // Date_Naissance
			this->textBox64->Text = Convert::ToString(this->ds->Tables["Client"]->Rows[this->index]->ItemArray[4]);  // N_ Client

			this->ds->Clear();
			this->ds = this->processusAdLivraison->listeAdresseLivraison("Adresse_livraison");
			this->textBox60->Text = Convert::ToString(this->ds->Tables["Adresse_livraison"]->Rows[this->index]->ItemArray[1]);   // N_Rue
			this->textBox59->Text = Convert::ToString(this->ds->Tables["Adresse_livraison"]->Rows[this->index]->ItemArray[2]);   // Nom_Rue
			this->textBox57->Text = Convert::ToString(this->ds->Tables["Adresse_livraison"]->Rows[this->index]->ItemArray[3]);   // Ville
			this->textBox58->Text = Convert::ToString(this->ds->Tables["Adresse_livraison"]->Rows[this->index]->ItemArray[4]);  // CP
			
			this->ds->Clear();
			this->ds = this->processusAdFacturation->listeAdresseFacturation("Adresse_facturation");
			this->textBox87->Text = Convert::ToString(this->ds->Tables["Adresse_facturation"]->Rows[this->index]->ItemArray[1]);   // N_Rue
			this->textBox63->Text = Convert::ToString(this->ds->Tables["Adresse_facturation"]->Rows[this->index]->ItemArray[2]);   // Nom_Rue
			this->textBox61->Text = Convert::ToString(this->ds->Tables["Adresse_facturation"]->Rows[this->index]->ItemArray[3]);   // Ville
			this->textBox62->Text = Convert::ToString(this->ds->Tables["Adresse_facturation"]->Rows[this->index]->ItemArray[4]);  // CP
		}
		 private: void loadData2(int index)
		 {
			this->ds->Clear();
			this->ds = this->personnel->listePersonnes("Personnel");

			this->afficher_personnel_ID->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[0]);
			this->afficher_personnel_nom->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[1]);
			this->afficher_personnel_prenom->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[2]);
			this->afficher_personnel_num->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[3]);
			this->afficher_personnel_nomRue->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[4]);
		    this->afficher_personnel_date->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[5]);
			this->afficher_personnel_sh->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[6]);
			this->afficher_personnel_ville->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[7]);
			this->afficher_personnel_cp->Text = Convert::ToString(this->ds->Tables["Personnel"]->Rows[this->index]->ItemArray[8]);
		 }

		private: void loadData3(int index) {
			this->ds->Clear();
			this->ds = this->processusArticle->listearticle("Article");

			this->textBox13->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[0]);
			this->textBox12->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[1]);
			this->textBox10->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[2]);
			this->textBox11->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[3]);
			this->textBox9->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[4]);
			this->textBox8->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[5]);
			this->textBox7->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[6]);
			this->textBox6->Text = Convert::ToString(this->ds->Tables["Article"]->Rows[this->index]->ItemArray[7]);
		}

		int quantite;
		float PrixHT;
		float resultat;
		private: void loadData4(int indexSelection) {
			this->ds->Clear();
			this->ds = this->processusArticle->listearticle("Article");

			quantite = Convert::ToInt32(this->ds->Tables["Article"]->Rows[indexSelection]->ItemArray[4]);
			PrixHT = Convert::ToSingle(this->ds->Tables["Article"]->Rows[indexSelection]->ItemArray[5]);


			float TVA = ((Convert::ToSingle(this->comboBox13->Text) / 100) + 1);
			float marge = ((Convert::ToSingle(this->comboBox14->Text) / 100) + 1);
			float remise = 1 - (Convert::ToSingle(this->comboBox15->Text) / 100);
			float demarque = 1 - (Convert::ToSingle(this->comboBox16->Text) / 100);

			resultat = quantite * PrixHT * TVA * marge * remise * demarque;
			this->textBox15->Text = Convert::ToString(resultat);

		}


		private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
			this->index = 0;
			this->loadData(this->index);
			this->textBox21->Text = "Affichage réussis";
		}
		//Ajoute un client
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		id = this->processusClient->ajouter(this->textBox22->Text, this->textBox23->Text, this->textBox85->Text, this->textBox86->Text);
		id = this->processusAdLivraison->ajouter(this->textBox35->Text, this->textBox25->Text, this->comboBox4->Text, this->textBox24->Text);
		id = this->processusAdFacturation->ajouter(this->textBox38->Text, this->textBox37->Text, this->comboBox5->Text, this->textBox36->Text);
		this->textBox21->Text = "L'ID généré est le : " + id + ".";
		}

		// Bouton suivant
		private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->index >= 0 )
			{
				this->index++;
				this->loadData(this->index);
				this->textBox21->Text = "Enregistrement n° : " + (this->index + 1);
			}
		}
		// Bouton précédent
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->index > 0)
			{
				this->index--;
				this->loadData(this->index);
				this->textBox21->Text = "Enregistrement n° : " + (this->index + 1);
			}
			else {
				this->textBox21->Text = "Vous ne pouvez pas aller plus pas cette personne est votre premier client";
			}
		}

		private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

			this->processusClient->supprimer(Convert::ToInt32(this->textBox65->Text));
			this->processusAdFacturation->supprimer(Convert::ToInt32(this->textBox65->Text));
			this->processusAdLivraison->supprimer(Convert::ToInt32(this->textBox65->Text));
			this->textBox21->Text = "Utilisateur supprimé";

		}
		private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
			this->textBox21->Text = "Veuillez entrer les nouvelles informations";
		}
		private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
			this->processusClient->modifier(this->textBox48->Text, this->textBox56->Text, this->textBox84->Text, this->textBox64->Text, Convert::ToInt32(this->textBox65->Text));
			this->textBox21->Text = "Modification 1 effectué";
			this->processusAdLivraison->modifier(this->textBox60->Text, this->textBox59->Text, this->textBox57->Text, this->textBox58->Text, Convert::ToInt32(this->textBox65->Text));
			this->textBox21->Text = "Modification 2 effectué";
			this->processusAdFacturation->modifier(this->textBox87->Text, this->textBox63->Text, this->textBox61->Text, this->textBox62->Text, Convert::ToInt32(this->textBox65->Text));
			this->textBox21->Text = "Modifications effectués";
		}
		private: System::Void button_ajouter_personnel_Click(System::Object^ sender, System::EventArgs^ e) {
			this->personnel->ajouter(this->personnel_nom->Text, this->personnel_prenom->Text, this->txtbox_numRue->Text, this->personnel_rue->Text, this->txtbox_personnel_sh->Text, this->txtbox_personnel_ville->Text, this->personnel_txtbox_cp->Text, this->personnel_txtbox_date->Text);
			this->txtMessage->Text = "Réussi";
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->index = 0;
			this->loadData2(this->index);
			this->txtMessage->Text = "Données chargées";
		}
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			this->txtMessage->Text = "Veuillez entrer les nouvelles informations";
		}
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			this->personnel->modifier(this->afficher_personnel_ID->Text, this->afficher_personnel_nom->Text, this->afficher_personnel_prenom->Text, this->afficher_personnel_num->Text, this->afficher_personnel_nomRue->Text, this->afficher_personnel_sh->Text, this->afficher_personnel_ville->Text, this->afficher_personnel_cp->Text, this->afficher_personnel_date->Text);
			this->txtMessage->Text = "modification réussi";
		}

		private: System::Void button_supprimer_personel_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->afficher_personnel_ID->Text != "" || this->afficher_personnel_ID->Text != " ")
			{
				this->personnel->supprimer(this->afficher_personnel_ID->Text); //Execute la fonction supprimer avec comme paramètre ce qui est dans la case ID
				this->txtMessage->Text = "Personnel avec l'id : " + this->afficher_personnel_ID->Text + " à été supprimer ";
			}
			else
			{
				this->txtMessage->Text = "Veuillez entrer un id dans le champ ID";
			}
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->index > 0)
			{
				this->index--;
				this->loadData2(this->index);
				this->txtMessage->Text = "Employé précédent";
			}
			else
			{
				this->txtMessage->Text = "Impossible ! Vous êtes au premier employé";
			}
		}

		private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
			if (this->index < this->ds->Tables["Personnel"]->Rows->Count)
			{
				this->index++;
				this->loadData2(this->index);
				this->txtMessage->Text = "Employé suivant";
			}

			else if (this->index == this->ds->Tables["Personnel"]->Rows->Count)
			{

			}

			else
			{
				this->txtMessage->Text = "Impossible ! Dernier employé";
			}
		}
		
		// Ajouter un article
		private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
			int id;
			id = this->processusArticle->ajouter(this->textBox67->Text, this->textBox1->Text, this->textBox68->Text,
				Convert::ToInt32(this->textBox2->Text), this->textBox3->Text,
				Convert::ToInt32(this->textBox4->Text), this->textBox5->Text);
				this->textBox69->Text = "Article ajouté !";
		}


		// Commande seuil de réapro
		private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
			conn->Open();
			adapter = gcnew SqlDataAdapter("SELECT Nom_article FROM Article WHERE Quantite < Seuil_de_reapprovisionement;", conn);
			table = gcnew DataTable();
			adapter->Fill(table);
			dataGridView1->DataSource = table;
			conn->Close();

		}
			  
		// Afficher gestion Stock
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			this->index = 0;
			this->loadData3(this->index);
			this->textBox69->Text = "Données chargées";
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			this->textBox69->Text = "Veuillez entrer les nouvelles informations";
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->processusArticle->modifier(this->textBox12->Text, this->textBox10->Text, this->textBox11->Text,
				Convert::ToInt32(this->textBox9->Text), (this->textBox8->Text),
				Convert::ToInt32(this->textBox7->Text), (this->textBox6->Text), Convert::ToInt32(this->textBox13->Text));
			this->textBox69->Text = "Modifications effectuées";
		}
		// Bouton Article Avant
		private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->index > 0)
			{
				this->index--;
				this->loadData3(this->index);
				this->textBox69->Text = "Article précédent";
			}
			else
			{
				this->textBox69->Text = "Impossible ! Vous êtes au premier article";
			}
		}
		// Bouton Article après
		private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
			this->index++;
			this->loadData3(this->index);
			this->textBox69->Text = "Article suivant";
		}
		// Bouton Article supprimer
		private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
			this->processusArticle->supprimer(Convert::ToInt32(this->textBox13->Text));
			this->textBox69->Text = "Article supprimé";
		}



		private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
			loadData4((Convert::ToInt32(this->textBox14->Text)) - 1);
		}


private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {

	this->processusArticle->supprimer(Convert::ToInt32(this->textBox13->Text));
	this->textBox69->Text = "Article supprimé";
}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
		private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
			this->personnel_nom->Text = "";
			this->personnel_prenom->Text="";
			this->txtbox_personnel_sh->Text = "";
			this->txtbox_personnel_ville->Text = "";
			this->personnel_txtbox_cp->Text = "";
			this->personnel_rue->Text = "";
			this->txtbox_numRue->Text = "";
			this->personnel_txtbox_date->Text = "";
		}
		private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
			this->textBox22->Text = "";
			this->textBox85->Text = "";
			this->textBox23->Text = "";
			this->textBox86->Text = "";
			this->textBox24->Text = "";
			this->textBox25->Text = "";
			this->textBox35->Text = "";
			this->textBox36->Text = "";
			this->textBox37->Text = "";
			this->textBox38->Text = "";
			this->comboBox4->Text = "";
			this->comboBox5->Text = "";

		}
		private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
			this->textBox67->Text = "";
			this->textBox1->Text = "";
			this->textBox68->Text = "";
			this->textBox2->Text = "";
			this->textBox3->Text = "";
			this->textBox4->Text = "";
			this->textBox5->Text = "";


		}
};
}
