#pragma once
using namespace System;
namespace NS_Composants
{
	ref class CL_map_personne
	{
	private:
		String^ id_personne;
		String^ nom;
		String^ prenom;
		String^ numero_rue;
		String^ nom_rue;
		String^ superieur;
		String^ ville;
		String^ cp;
		String^ date_embauche;
	public:
		CL_map_personne(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		/* -------------------- Seteur ----------------- */
		void setID(String^);
		void setPrenom(String^);
		void setNom(String^);
		void setNumero_rue(String^);
		void setNom_rue(String^);
		void setSuperieur(String^);
		void setVille(String^);
		void setCp(String^);
		void setDate_embauche(String^);
		/* -------------------- Geteur ----------------- */
		String^ getId(void);
		String^ getNom();
		String^ getPrenom();
		String^ getNumero_rue();
		String^ getNom_rue();
		String^ getSuperieur();
		String^ getVille();
		String^ getCp();
		String^ getDate_embauche();
	};
}