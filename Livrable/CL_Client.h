#pragma once
using namespace System;

namespace NS_Composants {
	ref class CL_Client
	{
	private:
		int id_client;
		String^ nom;
		String^ prenom;
		String^ date_de_naissance;
		String^ numero_client;
	public:
		/* ------------- Constructeur / Methode -------- */
		CL_Client();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		/* ---------------------- Set ------------------ */
		void set_ID(int);
		void setNom(String^);
		void setPrenom(String^);
		void setDate_naissance(String^);
		void setNumero_client(String^);
		/* ---------------------- Get ------------------ */
		int getID();
		String^ getNom();
		String^ getPrenom();
		String^ getDate_naissance();
		String^ getNumero_client();
	};
}

