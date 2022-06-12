#pragma once
using namespace System;

namespace NS_Composants {

	ref class CL_Adresse_Livraison
	{
	private:
		int id_livraison;
		String^ numero_rue;
		String^ nom_rue;
		String^ ville;
		String^ cp;

	public:
		/* ------------- Constructeur / Methode -------- */
		CL_Adresse_Livraison();
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		/* ---------------------- Set ------------------ */
		void set_ID(int);
		void setN_rue(String^);
		void setNom_rue(String^);
		void setVille(String^);
		void setCp(String^);
		/* ---------------------- Get ------------------ */
		int getID();
		String^ getN_rue();
		String^ getNom_rue();
		String^ getVille();
		String^ getCp();

	};

}

