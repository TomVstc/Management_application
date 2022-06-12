#include "CL_gestion_adresse_livraison.h"

namespace NS_svc {

	CL_gestion_adresse_livraison::CL_gestion_adresse_livraison(void)
	{
		this->cad = gcnew NS_Composants::CL_CAD();
		this->Adresse_livraison = gcnew NS_Composants::CL_Adresse_Livraison();
		this->ds = gcnew Data::DataSet();
	}

	DataSet^ CL_gestion_adresse_livraison::listeAdresseLivraison(String^ dataTabName)
	{
		this->ds->Clear();
		this->ds = this->cad->getRows(this->Adresse_livraison->SELECT(), dataTabName);
		return this->ds;
	}
	
	int CL_gestion_adresse_livraison::ajouter(String^ numero_rue, String^ nom_rue, String^ ville, String^ cp)
	{
		int id_livraison;
		this->Adresse_livraison->setN_rue(numero_rue);
		this->Adresse_livraison->setNom_rue(nom_rue);
		this->Adresse_livraison->setVille(ville);
		this->Adresse_livraison->setCp(cp);
		id_livraison = this->cad->actionRowsID(this->Adresse_livraison->INSERT());
		return id_livraison;
	}

	void CL_gestion_adresse_livraison::modifier(String^ numero_rue, String^ nom_rue, String^ ville, String^ cp, int id_livraison)
	{
		this->Adresse_livraison->set_ID(id_livraison);
		this->Adresse_livraison->setN_rue(numero_rue);
		this->Adresse_livraison->setNom_rue(nom_rue);
		this->Adresse_livraison->setVille(ville);
		this->Adresse_livraison->setCp(cp);
		this->cad->actionRows(this->Adresse_livraison->UPDATE());
	}

	void CL_gestion_adresse_livraison::supprimer(int id_livraison)
	{
		this->Adresse_livraison->set_ID(id_livraison);
		this->cad->actionRows(this->Adresse_livraison->DELETE());
	}
	



}